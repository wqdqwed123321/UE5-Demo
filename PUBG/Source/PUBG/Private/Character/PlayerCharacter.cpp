#include "Character/PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "MotionWarpingComponent.h"
#include "NiagaraComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "PUBGGameplayTag.h"
#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"
#include "Actor/BulletProjectile.h"
#include "Actor/GrenadeProjectile.h"
#include "Actor/PickupItem.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "AnimInstance/CharacterAnimInstance.h"
#include "AttributeSet/CharacterAttributeSet.h"
#include "Camera/CameraComponent.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "Components/CapsuleComponent.h"
#include "Components/SphereComponent.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Ammo.h"
#include "Object/BackpackItemFragment_Mount.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"
#include "Components/StaticMeshComponent.h"
#include "GameFramework/GameStateBase.h"
#include "Object/BackpackItemFragment_Attachment.h"
#include "Object/BackpackItemFragment_Throwable.h"
#include "PlayerController/GlobalPlayerController.h"

void APlayerCharacter::HandleHealthZero()
{
	if (!HasAuthority() || LifeState == ECharacterLifeState::Dead) return;
	
	if (LifeState == ECharacterLifeState::Downed)
	{
		EnterDead();
		return;
	}

	if (HasLivingTeammate()) EnterDowned();
	else EnterDead();
}

void APlayerCharacter::Multicast_PlayDownedMontage_Implementation()
{
	if (!DownedMontage || !GetMesh()) return;
	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->Montage_Play(DownedMontage);
	}
}

void APlayerCharacter::OnRep_LifeState()
{
	if (LifeState == ECharacterLifeState::Downed)
	{
		if (CharacterAnimInstance && CharacterAnimLayerInstance_Downed)
		{
			CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Downed);
		}
	}
	else if (LifeState == ECharacterLifeState::Dead)
	{
		if (GetCapsuleComponent()) GetCapsuleComponent()->SetCollisionEnabled(ECollisionEnabled::NoCollision);
		if (GetCharacterMovement()) GetCharacterMovement()->DisableMovement();

		UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
		if (DeathMontage && AnimInst)
		{
			AnimInst->Montage_Play(DeathMontage);
			const float RagdollDelay = DeathMontage->GetPlayLength() * 0.7f;
			GetWorldTimerManager().SetTimer(RagdollTimerHandle, this, &APlayerCharacter::EnableRagdoll, RagdollDelay, false);
		}
		else
		{
			EnableRagdoll();
		}
	}
}

void APlayerCharacter::EnterDowned()
{
	LifeState = ECharacterLifeState::Downed;
	OnRep_LifeState();
	
	if (UAbilitySystemComponent* ASC = GetAbilitySystemComponent())
	{
		ASC->SetNumericAttributeBase(UCharacterAttributeSet::GetDownedMaxHealthAttribute(), DownedHealthPool);
		ASC->SetNumericAttributeBase(UCharacterAttributeSet::GetDownedHealthAttribute(), DownedHealthPool);
	}

	Multicast_PlayDownedMontage();

	const float BleedStartDelay = DownedMontage ? DownedMontage->GetPlayLength() : 0.1f;
	GetWorldTimerManager().SetTimer(BleedTimerHandle, this, &APlayerCharacter::BleedTick, 0.1f, true, BleedStartDelay);
	
	BroadcastKillFeed(EKillFeedType::Knock);
}

void APlayerCharacter::EnterDead()
{
	GetWorldTimerManager().ClearTimer(BleedTimerHandle);

	LifeState = ECharacterLifeState::Dead;
	OnRep_LifeState();
	
	BroadcastKillFeed(EKillFeedType::Eliminate);
}

void APlayerCharacter::BleedTick()
{
	if (LifeState != ECharacterLifeState::Downed)
	{
		GetWorldTimerManager().ClearTimer(BleedTimerHandle);
		return;
	}

	UAbilitySystemComponent* ASC = GetAbilitySystemComponent();
	if (!ASC) return;

	const float NewHealth = ASC->GetNumericAttribute(UCharacterAttributeSet::GetDownedHealthAttribute()) - BleedDamagePerSecond * 0.1f;
	ASC->SetNumericAttributeBase(UCharacterAttributeSet::GetDownedHealthAttribute(), FMath::Max(0.f, NewHealth));

	if (NewHealth <= 0.f)
	{
		GetWorldTimerManager().ClearTimer(BleedTimerHandle);
		EnterDead();
	}
}

bool APlayerCharacter::HasLivingTeammate() const
{
	AGlobalPlayerState* MyPS = GetPlayerState<AGlobalPlayerState>();
	if (!MyPS || !GetWorld() || !GetWorld()->GetGameState()) return false;

	const FGenericTeamId MyTeam = MyPS->GetTeamId();
	if (MyTeam == FGenericTeamId::NoTeam) return false;

	for (APlayerState* PS : GetWorld()->GetGameState()->PlayerArray)
	{
		if (PS == MyPS) continue;
		AGlobalPlayerState* OtherPS = Cast<AGlobalPlayerState>(PS);
		if (!OtherPS || OtherPS->GetTeamId() != MyTeam) continue;

		if (APlayerCharacter* OtherChar = Cast<APlayerCharacter>(OtherPS->GetPawn()))
		{
			if (OtherChar->LifeState != ECharacterLifeState::Dead) return true;
		}
	}
	return false;
}

void APlayerCharacter::EnableRagdoll()
{
	if (!GetMesh()) return;
	
	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->Montage_Stop(0.15f);
	}

	GetMesh()->SetCollisionProfileName(TEXT("Ragdoll"));
	GetMesh()->SetSimulatePhysics(true);
}

FVector APlayerCharacter::GetGrenadeStartLocation(const FVector& ThrowDir) const
{
	const FVector RightDir = FVector::CrossProduct(FVector::UpVector, ThrowDir).GetSafeNormal();
	const FVector Loc = GetActorLocation();

	return FVector(Loc.X, Loc.Y, SmoothGrenadeStartZ) + RightDir * 10.f;
}

void APlayerCharacter::BroadcastKillFeed(EKillFeedType FeedType)
{
	if (!HasAuthority()) return;
	AGlobalPlayerState* VictimPS = GetPlayerState<AGlobalPlayerState>();
	if (!VictimPS || !GetWorld() || !GetWorld()->GetGameState()) return;

	AGlobalPlayerState* KillerPS = Cast<AGlobalPlayerState>(LastKillerPS);
	
	VictimPS->Multicast_KillFeed(KillerPS ? KillerPS->GetPlayerName() : TEXT(""), VictimPS->GetPlayerName(), FeedType);

	if (!KillerPS) return;

	const bool bKnock = (FeedType == EKillFeedType::Knock);
	const bool bFriendlyFire = KillerPS != VictimPS
		&& KillerPS->GetTeamId() != FGenericTeamId::NoTeam
		&& KillerPS->GetTeamId() == VictimPS->GetTeamId();
	
	if (!bKnock && !bFriendlyFire)
	{
		KillerPS->AddKillCount();
	}

	FString WeaponName;
	if (APlayerCharacter* KillerChar = Cast<APlayerCharacter>(KillerPS->GetPawn()))
	{
		WeaponName = KillerChar->GetCurrentWeaponName();
	}

	const FString KillerName = KillerPS->GetPlayerName();
	const FString VictimName = VictimPS->GetPlayerName();
	const FGenericTeamId KillerTeam = KillerPS->GetTeamId();
	
	for (APlayerState* PS : GetWorld()->GetGameState()->PlayerArray)
	{
		AGlobalPlayerState* GPS = Cast<AGlobalPlayerState>(PS);
		if (!GPS) continue;

		EKillMessageRole MsgRole;
		if (GPS == KillerPS)
		{
			MsgRole = EKillMessageRole::Killer;
		}
		else if (GPS == VictimPS)
		{
			MsgRole = EKillMessageRole::Victim;
		}
		else if (KillerTeam != FGenericTeamId::NoTeam && GPS->GetTeamId() == KillerTeam)
		{
			MsgRole = EKillMessageRole::Teammate;
		}
		else
		{
			continue;
		}

		if (AGlobalPlayerController* PC = Cast<AGlobalPlayerController>(GPS->GetPlayerController()))
		{
			PC->Client_KillMessage(KillerName, VictimName, WeaponName, bKnock, bFriendlyFire, KillerPS->GetKillCount(), MsgRole);
		}
	}
}

APlayerCharacter::APlayerCharacter()
{
	PrimaryActorTick.bCanEverTick = true;

	PersonHead = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("FirstPersonMesh"));
	PersonHead->SetupAttachment(GetMesh());
	PersonHead->SetLeaderPoseComponent(GetMesh());
	PersonHead->SetCastShadow(true);
	PersonHead->bCastHiddenShadow = true;

	FirstPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("FirstPersonCamera"));
	FirstPersonCamera->SetupAttachment(GetMesh(), TEXT("Socket_FirstPersonCamera"));
	FirstPersonCamera->bUsePawnControlRotation = true;

	ThirdPersonSpringArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("ThirdPersonSpringArm"));
	ThirdPersonSpringArm->SetupAttachment(RootComponent);
	ThirdPersonSpringArm->bUsePawnControlRotation = true;

	ThirdPersonCamera = CreateDefaultSubobject<UCameraComponent>(TEXT("ThirdPersonCamera"));
	ThirdPersonCamera->SetupAttachment(ThirdPersonSpringArm, USpringArmComponent::SocketName);

	Sphere = CreateDefaultSubobject<USphereComponent>(TEXT("Sphere"));
	Sphere->SetupAttachment(GetCapsuleComponent());
	Sphere->InitSphereRadius(200.f);
	Sphere->SetCollisionEnabled(ECollisionEnabled::QueryOnly);
	Sphere->SetCollisionObjectType(ECC_GameTraceChannel1);
	Sphere->SetCollisionResponseToAllChannels(ECR_Ignore);
	Sphere->SetCollisionResponseToChannel(ECC_WorldDynamic, ECR_Overlap);
	Sphere->SetGenerateOverlapEvents(true);
	
	MotionWarpingComp = CreateDefaultSubobject<UMotionWarpingComponent>(TEXT("MotionWarpingComp"));

	bUseControllerRotationPitch = false;
	bUseControllerRotationYaw = false;
	bUseControllerRotationRoll = false;
	GetCharacterMovement()->NavAgentProps.bCanCrouch = true;
	LastSentControllerYaw = 0.f;
	LastSentControllerPitch = 0.f;
	TargetArmLength = 300.f;
	bIsReloading = false;
	bIsAiming = false;
	bIsTogglingFireMode = false;
	bIsSwitchingWeapon = false;
	PendingHeldSlotProcessing = false;
	ConsecutiveShots = 0;
	TargetRecoilPitch = 0.f;
	TargetRecoilYaw = 0.f;
	AccumulatedRecoilPitch = 0.f;
	AccumulatedRecoilYaw = 0.f;
	LastFireTimeForRecoil = -100.f;
	bWantsToSprint = false;
	bIsInterpolatingWeapon = false;
	InterpAlpha = 0.f;
	bAttachToHandWhenNotifyFires = true;
	bIsHoldingFire = false;
}

void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();
	
	CharacterAnimInstance = Cast<UCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	FirstPersonCamera->SetActive(false);
	ThirdPersonCamera->SetActive(true);
	PersonHead->SetOwnerNoSee(false);
	
	ApplyCharacterGait();
	UpdateCharacterHeldSlotAnimLayer();
	DefaultFPPCameraRelativeLoc = FirstPersonCamera->GetRelativeLocation();
	ApplyCameraState();

	if (Sphere)
	{
		Sphere->OnComponentBeginOverlap.AddDynamic(this, &APlayerCharacter::OnSphereBeginOverlap);
		Sphere->OnComponentEndOverlap.AddDynamic(this, &APlayerCharacter::OnSphereEndOverlap);
	}

	if (APlayerState* PS = GetPlayerState())
	{
		if (UBackpackManagerComponent* Comp = PS->FindComponentByClass<UBackpackManagerComponent>())
		{
			Comp->OnInventoryChanged.RemoveDynamic(this, &APlayerCharacter::OnInventoryChangedHandler);
			Comp->OnInventoryChanged.AddDynamic(this, &APlayerCharacter::OnInventoryChangedHandler);
			Comp->OnWeaponAttachmentsChanged.RemoveDynamic(this, &APlayerCharacter::OnWeaponAttachmentsChangedHandler);
			Comp->OnWeaponAttachmentsChanged.AddDynamic(this, &APlayerCharacter::OnWeaponAttachmentsChangedHandler);
			RefreshEquipmentVisuals();
		}
	}
	
	BaseBoomZ = ThirdPersonSpringArm->GetRelativeLocation().Z;
	SmoothGrenadeStartZ = GetActorLocation().Z + GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * 0.667f;
}

void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (IsLocallyControlled())
	{
		ControllerRotator_Yaw = GetControlRotation().Yaw;
		ControllerRotator_Pitch = GetControlRotation().Pitch;
		if (FMath::Abs(ControllerRotator_Yaw - LastSentControllerYaw) > 0.5f || FMath::Abs(ControllerRotator_Pitch - LastSentControllerPitch) > 0.5f)
		{
			Server_SetControllerRotator(ControllerRotator_Yaw, ControllerRotator_Pitch);
			LastSentControllerYaw = ControllerRotator_Yaw;
			LastSentControllerPitch = ControllerRotator_Pitch;
		}

		if (FMath::Abs(TargetRecoilPitch) > 0.01f || FMath::Abs(TargetRecoilYaw) > 0.01f)
		{
			float ConsumePitch = FMath::FInterpTo(0.f, TargetRecoilPitch, DeltaTime, 30.f);
			float ConsumeYaw = FMath::FInterpTo(0.f, TargetRecoilYaw, DeltaTime, 30.f);
			AddControllerPitchInput(-ConsumePitch);
			AddControllerYawInput(ConsumeYaw);
			TargetRecoilPitch -= ConsumePitch;
			TargetRecoilYaw -= ConsumeYaw;
			AccumulatedRecoilPitch += ConsumePitch * CachedRecoilRecoveryRatio;
			AccumulatedRecoilYaw += ConsumeYaw * CachedRecoilRecoveryRatio;
		}

		if (bWantsToSprint && CharacterGait != ECharacterGait::Sprint && CharacterGait != ECharacterGait::Walk)
		{
			float Now = GetWorld()->GetTimeSeconds();
			bool bIsFiring = GetWorldTimerManager().IsTimerActive(FireTimerHandle) || (Now - LastFireTimeForSpread < 0.2f);
			bool bCanSprint = !bIsFiring && (!CharacterAnimInstance || CharacterAnimInstance->GetCharacterDirection() == ECharacterDirection::Forward);
			if (bCanSprint)
			{
				CharacterGait = ECharacterGait::Sprint;
				Server_SetCharacterGait(CharacterGait);
				ApplyCharacterGait();
			}
		}
		else if (CharacterGait == ECharacterGait::Sprint)
		{
			const float Now = GetWorld()->GetTimeSeconds();
			const bool bIsFiring = GetWorldTimerManager().IsTimerActive(FireTimerHandle) || (Now - LastFireTimeForSpread < 0.2f);
			const ECharacterDirection Dir = CharacterAnimInstance ? CharacterAnimInstance->GetCharacterDirection() : ECharacterDirection::Forward;
			if (!bWantsToSprint || bIsFiring || Dir != ECharacterDirection::Forward)
			{
				CharacterGait = ECharacterGait::Jog;
				Server_SetCharacterGait(CharacterGait);
				ApplyCharacterGait();
			}
		}
	}

	if (HasAuthority() || IsLocallyControlled())
	{
		if (!bIsClimbing && GetVelocity().Size() > 0.f)
		{
			FRotator TargetRotation = GetControlRotation();
			TargetRotation.Pitch = 0.f;
			TargetRotation.Roll = 0.f;
			SetActorRotation(FMath::RInterpTo(GetActorRotation(), TargetRotation, DeltaTime, 15.f));
		}
	}

	if (IsLocallyControlled() && CharacterAnimInstance)
	{
		const float TurnYawDelta = CharacterAnimInstance->GetTurnYawCurveDeltaValue();
		
		if (!FMath::IsNearlyZero(TurnYawDelta) && GetVelocity().SizeSquared() < 25.f)
		{
			FRotator TargetRotation = GetActorRotation();
			TargetRotation.Yaw = FRotator::NormalizeAxis(TargetRotation.Yaw - TurnYawDelta);
			SetActorRotation(TargetRotation);
			Server_SetActorYaw(TargetRotation.Yaw);
		}
	}

	if (IsLocallyControlled())
	{
		const FVector RelTarget = (FirstPersonCamera->GetAttachParent() != GetMesh()) ? FVector::ZeroVector : DefaultFPPCameraRelativeLoc;
		if (!FirstPersonCamera->GetRelativeLocation().Equals(RelTarget, 0.1f))
		{
			const FVector NewRelLoc = FMath::VInterpTo(FirstPersonCamera->GetRelativeLocation(), RelTarget, DeltaTime, ADSCameraInterpSpeed);
			FirstPersonCamera->SetRelativeLocation(NewRelLoc);
			if (NewRelLoc.Equals(RelTarget, 0.1f)) FirstPersonCamera->SetRelativeLocation(RelTarget);
		}
		
		UCameraComponent* ActiveCam = FirstPersonCamera->IsActive() ? (UCameraComponent*)FirstPersonCamera.Get() : (UCameraComponent*)ThirdPersonCamera.Get();
    	ActiveCam->SetFieldOfView(FMath::FInterpTo(ActiveCam->FieldOfView, TargetFOV, DeltaTime, FOVInterpSpeed));
	
		CurrentLeanOffset = FMath::FInterpTo(CurrentLeanOffset, CurrentLeanDirection * LeanOffsetDistance, DeltaTime, LeanInterpSpeed);

		if (ThirdPersonSpringArm)
		{
			FVector DesiredSocketOffset = TargetSocketOffset;
			DesiredSocketOffset.Y += CurrentLeanOffset;

			bool bNeedsInterp = !FMath::IsNearlyEqual(ThirdPersonSpringArm->TargetArmLength, TargetArmLength, 0.1f) || !ThirdPersonSpringArm->SocketOffset.Equals(DesiredSocketOffset, 0.1f);
			if (bNeedsInterp)
			{
				ThirdPersonSpringArm->TargetArmLength = FMath::FInterpTo(ThirdPersonSpringArm->TargetArmLength, TargetArmLength, DeltaTime, CameraInterpSpeed);
				ThirdPersonSpringArm->SocketOffset = FMath::VInterpTo(ThirdPersonSpringArm->SocketOffset, DesiredSocketOffset, DeltaTime, CameraInterpSpeed);
			}
			else
			{
				ThirdPersonSpringArm->TargetArmLength = TargetArmLength;
				ThirdPersonSpringArm->SocketOffset = DesiredSocketOffset;
			}
		}
	}

	if (CurrentHeldWeaponInstance && CurrentHeldWeaponInstance->Definition)
	{
		UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentHeldWeaponInstance->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
		if (WeaponFrag)
		{
			float Now = GetWorld()->GetTimeSeconds();
			
			if (Now - LastFireTimeForSpread > WeaponFrag->SpreadSettings.SpreadRecoveryDelay)
			{
				CurrentRecoilSpread = FMath::FInterpTo(CurrentRecoilSpread, 0.f, DeltaTime, WeaponFrag->SpreadSettings.SpreadRecoverySpeed);
			}
			
			if (Now - LastFireTimeForRecoil > WeaponFrag->RecoilSettings.RecoilRecoveryDelay)
			{
				if (IsLocallyControlled() && (FMath::Abs(AccumulatedRecoilPitch) > 0.01f || FMath::Abs(AccumulatedRecoilYaw) > 0.01f))
				{
					const float Step = WeaponFrag->RecoilSettings.RecoilRecoverySpeed * DeltaTime;
					const float BackPitch = FMath::Min(Step, AccumulatedRecoilPitch);
					const float BackYaw = FMath::Min(Step, FMath::Abs(AccumulatedRecoilYaw));

					AddControllerPitchInput(BackPitch);
					AddControllerYawInput(-FMath::Sign(AccumulatedRecoilYaw) * BackYaw);

					AccumulatedRecoilPitch -= BackPitch;
					AccumulatedRecoilYaw -= FMath::Sign(AccumulatedRecoilYaw) * BackYaw;
				}
			}
		}
	}

	if (bIsInterpolatingWeapon)
	{
		USkeletalMeshComponent* WeaponMesh = InterpWeaponMesh ? InterpWeaponMesh.Get() : GetHeldWeaponComp();
		if (WeaponMesh && GetMesh())
		{
			FVector TargetLoc = GetMesh()->GetSocketLocation(InterpTargetSocket);
			FRotator TargetRot = GetMesh()->GetSocketRotation(InterpTargetSocket);

			InterpAlpha = FMath::Min(1.f, InterpAlpha + DeltaTime / 0.15f);
			float SmoothAlpha = FMath::InterpEaseOut(0.f, 1.f, InterpAlpha, 2.f);

			FVector NewLoc = FMath::Lerp(InterpStartLoc, TargetLoc, SmoothAlpha);
			FQuat NewQuat = FQuat::Slerp(InterpStartRot.Quaternion(), TargetRot.Quaternion(), SmoothAlpha);
			WeaponMesh->SetWorldLocationAndRotation(NewLoc, NewQuat.Rotator());

			if (InterpAlpha >= 1.f)
			{
				WeaponMesh->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, InterpTargetSocket);
				bIsInterpolatingWeapon = false;
				InterpWeaponMesh = nullptr;
				RefreshWeaponVisuals();
			}
		}
		else
		{
			bIsInterpolatingWeapon = false;
			InterpWeaponMesh = nullptr;
		}
	}
	
	if (!IsLocallyControlled() && GetCharacterMovement() && GetCharacterMovement()->MovementMode == MOVE_Flying)
	{
		static float LastClimbLogTime = 0.f;
		const float Now = GetWorld()->GetTimeSeconds();
		if (Now - LastClimbLogTime > 0.5f)
		{
			LastClimbLogTime = Now;
			UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
			UAnimMontage* ActiveMontage = AnimInst ? AnimInst->GetCurrentActiveMontage() : nullptr;
		}
	}
	
	if (IsLocallyControlled() && bIsCookingGrenade)
	{
		UpdateGrenadeTrajectory();
	}
	
	if (!FMath::IsNearlyZero(BoomZCompensation, 0.01f))
	{
		BoomZCompensation = FMath::FInterpTo(BoomZCompensation, 0.f, DeltaTime, CrouchCamInterpSpeed);
	}
	ThirdPersonSpringArm->SetRelativeLocation(FVector(0.f, 0.f, BaseBoomZ + BoomZCompensation));
	
	const float GrenadeRatio = (ThrowMode == EThrowMode::Overhand) ? 0.667f : 0.25f;
	const float GrenadeTargetZ = GetActorLocation().Z + GetCapsuleComponent()->GetScaledCapsuleHalfHeight() * GrenadeRatio;
	SmoothGrenadeStartZ = FMath::FInterpTo(SmoothGrenadeStartZ, GrenadeTargetZ, DeltaTime, 3.f);
}

void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		EnhancedInputComponent->BindAction(IA_Crouch, ETriggerEvent::Started, this, &APlayerCharacter::OnCrouch);
		EnhancedInputComponent->BindAction(IA_Jump, ETriggerEvent::Started, this, &APlayerCharacter::OnJump);
		EnhancedInputComponent->BindAction(IA_Look, ETriggerEvent::Triggered, this, &APlayerCharacter::OnLook);
		EnhancedInputComponent->BindAction(IA_Move, ETriggerEvent::Triggered, this, &APlayerCharacter::OnMove);
		EnhancedInputComponent->BindAction(IA_Sprint, ETriggerEvent::Started, this, &APlayerCharacter::OnSprint);
		EnhancedInputComponent->BindAction(IA_Sprint, ETriggerEvent::Triggered, this, &APlayerCharacter::OnSprint);
		EnhancedInputComponent->BindAction(IA_Sprint, ETriggerEvent::Completed, this, &APlayerCharacter::OnSprint);
		EnhancedInputComponent->BindAction(IA_SwitchHeld, ETriggerEvent::Started, this, &APlayerCharacter::OnSwitchHeld);
		EnhancedInputComponent->BindAction(IA_TogglePerspective, ETriggerEvent::Started, this, &APlayerCharacter::OnTogglePerspective);
		EnhancedInputComponent->BindAction(IA_ToggleBackpack, ETriggerEvent::Started, this, &APlayerCharacter::OnToggleBackpack);
		EnhancedInputComponent->BindAction(IA_Walk, ETriggerEvent::Started, this, &APlayerCharacter::OnWalk);
		EnhancedInputComponent->BindAction(IA_Walk, ETriggerEvent::Completed, this, &APlayerCharacter::OnWalk);
		EnhancedInputComponent->BindAction(IA_Fire, ETriggerEvent::Started, this, &APlayerCharacter::OnFire);
		EnhancedInputComponent->BindAction(IA_Fire, ETriggerEvent::Completed, this, &APlayerCharacter::OnFire);
		EnhancedInputComponent->BindAction(IA_Aim, ETriggerEvent::Started, this, &APlayerCharacter::OnAim);
		EnhancedInputComponent->BindAction(IA_Aim, ETriggerEvent::Completed, this, &APlayerCharacter::OnAim);
		EnhancedInputComponent->BindAction(IA_Reload, ETriggerEvent::Started, this, &APlayerCharacter::OnReload);
		EnhancedInputComponent->BindAction(IA_Holster, ETriggerEvent::Started, this, &APlayerCharacter::OnHolster);
		EnhancedInputComponent->BindAction(IA_ToggleFireMode, ETriggerEvent::Started, this, &APlayerCharacter::OnToggleFireMode);
		EnhancedInputComponent->BindAction(IA_Lean, ETriggerEvent::Triggered, this, &APlayerCharacter::OnLean);
		EnhancedInputComponent->BindAction(IA_Lean, ETriggerEvent::Completed, this, &APlayerCharacter::OnLean);
		EnhancedInputComponent->BindAction(IA_Pickup, ETriggerEvent::Started, this, &APlayerCharacter::OnPickup);
	}
}

UAbilitySystemComponent* APlayerCharacter::GetAbilitySystemComponent() const
{
	if (AGlobalPlayerState* PS = GetPlayerState<AGlobalPlayerState>()) return PS->GetAbilitySystemComponent();
	return nullptr;
}

bool APlayerCharacter::ShouldShowCrosshairBars() const
{
	if (bIsADS) return false;
	if (CharacterGait == ECharacterGait::Sprint) return false;
	if (!IsHoldingFireArm()) return false;
	return true;
}

bool APlayerCharacter::ShouldShowCrosshairCenter() const
{
	if (bIsADS) return false;
	if (CharacterGait == ECharacterGait::Sprint) return false;
	return true;
}

void APlayerCharacter::AnimNotify_ReloadMagOut()
{
	if (!bIsReloading || bReloadMagOut) return;
	bReloadMagOut = true;
	ReloadingMagSlotIndex = GetCurrentWeaponSlotIndex();

	GetWorldTimerManager().ClearTimer(AttachmentRefreshTimer);
	RefreshAttachmentsOnly();

	UStaticMesh* MagMesh = GetHeldMagazineMesh();
	USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp();

	if (GetHeldCurrentAmmo() <= 0)
	{
		if (MagMesh && WeaponMesh)
		{
			const FVector Loc = WeaponMesh->GetSocketLocation(TEXT("Gun_Mag_Socket"));
			const FRotator Rot = WeaponMesh->GetSocketRotation(TEXT("Gun_Mag_Socket"));

			UStaticMeshComponent* DroppedMag = NewObject<UStaticMeshComponent>(this);
			DroppedMag->RegisterComponent();
			DroppedMag->SetStaticMesh(MagMesh);
			DroppedMag->SetWorldLocationAndRotation(Loc, Rot);
			DroppedMag->SetCollisionEnabled(ECollisionEnabled::PhysicsOnly);
			DroppedMag->SetSimulatePhysics(true);
			DroppedMag->AddImpulse(GetActorForwardVector() * 120.f + FVector::UpVector * 60.f);

			FTimerHandle DropTimer;
			TWeakObjectPtr<UStaticMeshComponent> WeakDropped = DroppedMag;
			GetWorldTimerManager().SetTimer(DropTimer, FTimerDelegate::CreateLambda([WeakDropped]()
			{
				if (WeakDropped.IsValid()) WeakDropped->DestroyComponent();
			}), 10.f, false);
		}
	}
	else
	{
		SpawnHandMagMesh(MagMesh);
	}
}

void APlayerCharacter::AnimNotify_ReloadMagIn()
{
	if (!bReloadMagOut) return;
	if (HandMagMeshComp != nullptr)
	{
		HandMagMeshComp->DestroyComponent();
		HandMagMeshComp = nullptr;
	}
	bReloadMagOut = false;
	ReloadingMagSlotIndex = -1;
	RefreshAttachmentsOnly();
}
void APlayerCharacter::AnimNotify_ReloadMagGrab()
{
	if (!bReloadMagOut || HandMagMeshComp != nullptr) return;
	SpawnHandMagMesh(GetHeldMagazineMesh());
}

float APlayerCharacter::GetCrosshairSpreadDegrees() const
{
	if (!CurrentHeldWeaponInstance || !CurrentHeldWeaponInstance->Definition) return 0.f;
	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentHeldWeaponInstance->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag) return 0.f;
	float Spread = WeaponFrag->SpreadSettings.BaseSpreadAngle;
	if (CharacterStance == ECharacterStance::Crouch) Spread *= WeaponFrag->SpreadSettings.CrouchMultiplier;
	if (GetCharacterMovement()->IsFalling()) Spread *= WeaponFrag->SpreadSettings.AirMultiplier;
	else if (GetVelocity().Size() > 10.f)
	{
		if (CharacterGait == ECharacterGait::Walk) Spread *= WeaponFrag->SpreadSettings.WalkMultiplier;
		else Spread *= WeaponFrag->SpreadSettings.MoveMultiplier;
	}
	if (bIsAiming) Spread *= WeaponFrag->SpreadSettings.ADSSpreadMultiplier;
	Spread += CurrentRecoilSpread;
	return FMath::Min(Spread, WeaponFrag->SpreadSettings.MaxSpreadAngle);
}

void APlayerCharacter::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(APlayerCharacter, CharacterGait)
	DOREPLIFETIME(APlayerCharacter, CharacterStance)
	DOREPLIFETIME(APlayerCharacter, CharacterHeldSlot)
	DOREPLIFETIME(APlayerCharacter, ControllerRotator_Yaw)
	DOREPLIFETIME(APlayerCharacter, ControllerRotator_Pitch)
	DOREPLIFETIME(APlayerCharacter, CurrentLeanDirection);
	DOREPLIFETIME(APlayerCharacter, ClimbWarpTarget);
	DOREPLIFETIME(APlayerCharacter, ClimbTopTarget);
	DOREPLIFETIME(APlayerCharacter, bIsClimbing);
	DOREPLIFETIME(APlayerCharacter, ThrowMode);
	DOREPLIFETIME(APlayerCharacter, LifeState);
}

void APlayerCharacter::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);
	if (HasAuthority()) Server_InitASC();
}

void APlayerCharacter::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
	Client_InitASC();
	if (APlayerState* PS = GetPlayerState())
	{
		if (UBackpackManagerComponent* Comp = PS->FindComponentByClass<UBackpackManagerComponent>())
		{
			Comp->OnInventoryChanged.RemoveDynamic(this, &APlayerCharacter::OnInventoryChangedHandler);
			Comp->OnInventoryChanged.AddDynamic(this, &APlayerCharacter::OnInventoryChangedHandler);
			Comp->OnWeaponAttachmentsChanged.RemoveDynamic(this, &APlayerCharacter::OnWeaponAttachmentsChangedHandler);
			Comp->OnWeaponAttachmentsChanged.AddDynamic(this, &APlayerCharacter::OnWeaponAttachmentsChangedHandler);
			RefreshEquipmentVisuals();
			RefreshWeaponVisuals();
		}
	}
}

void APlayerCharacter::OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnStartCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	
	BoomZCompensation += ScaledHalfHeightAdjust;
}

void APlayerCharacter::OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust)
{
	Super::OnEndCrouch(HalfHeightAdjust, ScaledHalfHeightAdjust);
	
	BoomZCompensation -= ScaledHalfHeightAdjust;
}

void APlayerCharacter::Server_InitASC()
{
	if (UCharacterAbilitySystemComponent* CharacterAbilitySystemComponent = Cast<UCharacterAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		CharacterAbilitySystemComponent->InitAbilityActorInfo(GetPlayerState(), this);
		CharacterAbilitySystemComponent->ApplyEffects();
		CharacterAbilitySystemComponent->ApplyAbilities();
	}
}

void APlayerCharacter::Client_InitASC()
{
	if (UCharacterAbilitySystemComponent* CharacterAbilitySystemComponent = Cast<UCharacterAbilitySystemComponent>(GetAbilitySystemComponent()))
	{
		CharacterAbilitySystemComponent->InitAbilityActorInfo(GetPlayerState(), this);
	}
}

void APlayerCharacter::RefreshEquipmentVisuals()
{
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp || !GetMesh()) return;

	for (int32 i = 0; i <= static_cast<int32>(EEquipmentSlot::Mask); ++i)
	{
		EEquipmentSlot SlotType = static_cast<EEquipmentSlot>(i);
		UBackpackItemInstance* EquipItem = Comp->GetEquipmentItem(SlotType);
		bool bHasMesh = EquippedMeshComponents.Contains(SlotType) && IsValid(EquippedMeshComponents[SlotType]);

		if (!EquipItem)
		{
			if (bHasMesh)
			{
				EquippedMeshComponents[SlotType]->DestroyComponent();
				EquippedMeshComponents.Remove(SlotType);
			}
			continue;
		}
		if (EquipItem && EquipItem->Definition)
		{
			UBackpackItemFragment_Mount* MountFrag = Cast<UBackpackItemFragment_Mount>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(EquipItem->Definition->GetClass(), UBackpackItemFragment_Mount::StaticClass()));
			if (!MountFrag || !MountFrag->EquipmentMesh)
			{
				if (bHasMesh)
				{
					EquippedMeshComponents[SlotType]->DestroyComponent();
					EquippedMeshComponents.Remove(SlotType);
				}
				continue;
			}
			if (bHasMesh && EquippedMeshComponents[SlotType]->GetSkeletalMeshAsset() == MountFrag->EquipmentMesh) continue;
			if (bHasMesh)
			{
				EquippedMeshComponents[SlotType]->DestroyComponent();
				EquippedMeshComponents.Remove(SlotType);
			}
			USkeletalMeshComponent* NewMeshComp = NewObject<USkeletalMeshComponent>(this);
			if (NewMeshComp)
			{
				NewMeshComp->RegisterComponent();
				NewMeshComp->SetSkeletalMesh(MountFrag->EquipmentMesh);
				NewMeshComp->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, MountFrag->AttachSocketName);
				NewMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				EquippedMeshComponents.Add(SlotType, NewMeshComp);
			}
		}
	}
}

void APlayerCharacter::RefreshWeaponVisuals()
{
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp || !GetMesh()) return;
	
	if (IsHoldingFireArm())
	{
		const int32 HeldIdx = GetCurrentWeaponSlotIndex();
		if (HeldIdx != -1 && Comp->GetWeaponSlotItem(HeldIdx))
		{
			CurrentHeldWeaponInstance = Comp->GetWeaponSlotItem(HeldIdx);
		}
	}

	if (!bIsInterpolatingWeapon)
	{
		if (WeaponMeshComponents.Num() < 5) WeaponMeshComponents.SetNum(5);

		int32 HeldIndex = -1;
		switch (CharacterHeldSlot)
		{
		case ECharacterHeldSlot::Primary1:  HeldIndex = 0; break;
		case ECharacterHeldSlot::Primary2:  HeldIndex = 1; break;
		case ECharacterHeldSlot::Secondary: HeldIndex = 2; break;
		case ECharacterHeldSlot::Melee:     HeldIndex = 3; break;
		case ECharacterHeldSlot::Throwable: HeldIndex = 4; break;
		default: break;
		}

		for (int32 i = 0; i < 5; ++i)
		{
			UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(i);

			if (!WeaponItem || !WeaponItem->Definition)
			{
				if (IsValid(WeaponMeshComponents[i]))
				{
					ClearAttachmentsFromWeaponMesh(WeaponMeshComponents[i]);
					WeaponMeshComponents[i]->DestroyComponent();
					WeaponMeshComponents[i] = nullptr;
				}
				continue;
			}

			UBackpackItemFragment_Mount* MountFrag = Cast<UBackpackItemFragment_Mount>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Mount::StaticClass()));
			if (!MountFrag || !MountFrag->EquipmentMesh) continue;

			USceneComponent* TargetParent = GetMesh();

			FName TargetSocket = NAME_None;
			if (i == 0) TargetSocket = Primary1Socket_Character;
			else if (i == 1) TargetSocket = Primary2Socket_Character;
			else TargetSocket = MountFrag->AttachSocketName;

			if (i == HeldIndex)
			{
				const bool bTransitioning = bIsSwitchingWeapon || bIsInterpolatingWeapon || PendingHeldSlotProcessing;
				if (!bTransitioning)
				{
					TargetSocket = MountFrag->HeldSocketName;
				}
				else if (IsValid(WeaponMeshComponents[i]))
				{
					TargetSocket = WeaponMeshComponents[i]->GetAttachSocketName();
				}
			}

			if (TargetSocket == NAME_None) continue;

			bool bAlreadySpawned = IsValid(WeaponMeshComponents[i])
				&& WeaponMeshComponents[i]->GetSkeletalMeshAsset() == MountFrag->EquipmentMesh
				&& WeaponMeshComponents[i]->GetAttachSocketName() == TargetSocket;

			if (!bAlreadySpawned)
			{
				if (IsValid(WeaponMeshComponents[i]))
				{
					ClearAttachmentsFromWeaponMesh(WeaponMeshComponents[i]);
					WeaponMeshComponents[i]->DestroyComponent();
				}

				USkeletalMeshComponent* NewMeshComp = NewObject<USkeletalMeshComponent>(this);
				NewMeshComp->RegisterComponent();
				NewMeshComp->SetSkeletalMesh(MountFrag->EquipmentMesh);
				UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
				if (WeaponFrag && WeaponFrag->WeaponAnimInstanceClass)
				{
					NewMeshComp->SetAnimInstanceClass(WeaponFrag->WeaponAnimInstanceClass);
				}
				NewMeshComp->AttachToComponent(TargetParent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TargetSocket);
				NewMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				NewMeshComp->SetVisibility(true);
				WeaponMeshComponents[i] = NewMeshComp;
			}
			
			if (IsValid(WeaponMeshComponents[i]))
			{
				WeaponMeshComponents[i]->SetComponentTickEnabled(i == HeldIndex);
			}
		}
	}

	RefreshAttachmentsOnly();
}

void APlayerCharacter::RefreshAttachmentsOnly()
{
    APlayerState* PS = GetPlayerState();
    UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
    if (!Comp) return;

    for (int32 i = 0; i < 5; ++i)
    {
        USkeletalMeshComponent* WeaponMesh = WeaponMeshComponents.IsValidIndex(i) ? WeaponMeshComponents[i] : nullptr;
        if (!IsValid(WeaponMesh)) continue;

        UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(i);

        TMap<FName, UStaticMesh*> Desired;
        if (WeaponItem && WeaponItem->Definition)
        {
            TSet<EAttachmentSlot> ProcessedSlots;
            for (const FItemAttachment& Attach : WeaponItem->ItemAttachments)
            {
                if (!Attach.ItemInstance || !Attach.ItemInstance->Definition) continue;
                if (ProcessedSlots.Contains(Attach.Slot)) continue;
                ProcessedSlots.Add(Attach.Slot);

                UBackpackItemFragment_Attachment* AttachFrag = Cast<UBackpackItemFragment_Attachment>(
                    UBackpackItemDefinition::FindBackpackItemFragmentByClass(Attach.ItemInstance->Definition->GetClass(), UBackpackItemFragment_Attachment::StaticClass()));
                if (!AttachFrag) continue;

            	if (AttachFrag->TargetSlot == EAttachmentSlot::Magazine && bReloadMagOut && i == ReloadingMagSlotIndex)
                {
                    continue;
                }

                UStaticMesh* AttachMesh = Attach.ItemInstance->Definition->WorldMesh;
                if (!AttachMesh) continue;

                FName Socket = NAME_None;
                switch (AttachFrag->TargetSlot)
                {
                case EAttachmentSlot::Scope:    Socket = TEXT("Scope_Socket"); break;
                case EAttachmentSlot::Muzzle:   Socket = TEXT("Muzzle_Socket"); break;
                case EAttachmentSlot::Grip:     Socket = TEXT("Grip_Socket"); break;
                case EAttachmentSlot::Magazine: Socket = TEXT("Gun_Mag_Socket"); break;
                case EAttachmentSlot::Stock:    Socket = TEXT("Gun_Stock_Socket"); break;
                default: break;
                }
                if (Socket == NAME_None) continue;

                if (UStaticMesh** Found = Desired.Find(Socket)) *Found = AttachMesh;
                else Desired.Add(Socket, AttachMesh);
            }
        }
    	
    	TMap<FName, UStaticMeshComponent*> Existing;
    	TArray<USceneComponent*> AttachChildren;
    	WeaponMesh->GetChildrenComponents(true, AttachChildren);
    	for (USceneComponent* Child : AttachChildren)
        {
            UStaticMeshComponent* SM = Cast<UStaticMeshComponent>(Child);
            if (!SM) continue;

            if (Existing.Contains(SM->GetAttachSocketName()))
            {
                SM->DestroyComponent();
            }
            else
            {
                Existing.Add(SM->GetAttachSocketName(), SM);
            }
        }
    	
        for (const auto& Pair : Desired)
        {
            UStaticMeshComponent* SM = nullptr;
            if (UStaticMeshComponent** Found = Existing.Find(Pair.Key)) SM = *Found;
            Existing.Remove(Pair.Key);

            if (IsValid(SM))
            {
                if (SM->GetStaticMesh() != Pair.Value) SM->SetStaticMesh(Pair.Value);
            }
            else
            {
                UStaticMeshComponent* NewComp = NewObject<UStaticMeshComponent>(WeaponMesh);
                NewComp->RegisterComponent();
                NewComp->SetStaticMesh(Pair.Value);
                NewComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
                NewComp->SetVisibility(true);
                NewComp->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, Pair.Key);
                NewComp->SetRelativeLocationAndRotation(FVector::ZeroVector, FRotator::ZeroRotator);
            }
        }
    	
        for (const auto& Pair : Existing)
        {
            if (IsValid(Pair.Value)) Pair.Value->DestroyComponent();
        }
    }
}


void APlayerCharacter::OnWeaponAttachmentsChangedHandler()
{
	GetWorldTimerManager().ClearTimer(AttachmentRefreshTimer);
	GetWorldTimerManager().SetTimer(AttachmentRefreshTimer, this, &APlayerCharacter::RefreshAttachmentsOnly, 0.2f, false);
}

void APlayerCharacter::FireOneShot()
{
	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	if (SlotIndex == -1) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag) return;

	int32 CurrentAmmo = 0;
	for (const FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
		{
			CurrentAmmo = FMath::RoundToInt(Attr.Value);
			break;
		}
	}

	if (IsLocallyControlled() && !HasAuthority())
	{
		bool bLocalDeducted = false;
		for (FItemAttribute& Attr : WeaponItem->ItemAttributes)
		{
			if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
			{
				if (Attr.Value > 0)
				{
					Attr.Value -= 1.f;
					bLocalDeducted = true;
				}
				break;
			}
		}

		if (bLocalDeducted)
		{
			Comp->OnInventoryChanged.Broadcast();
		}
	}

	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC) return;
	FVector CamLoc; FRotator CamRot;
	PC->GetPlayerViewPoint(CamLoc, CamRot);
	float CurrentSpread = WeaponFrag->SpreadSettings.BaseSpreadAngle;
	if (CharacterStance == ECharacterStance::Crouch) CurrentSpread *= WeaponFrag->SpreadSettings.CrouchMultiplier;
	if (GetCharacterMovement()->IsFalling()) CurrentSpread *= WeaponFrag->SpreadSettings.AirMultiplier;
	else if (GetVelocity().Size() > 10.f)
	{
		if (CharacterGait == ECharacterGait::Walk) CurrentSpread *= WeaponFrag->SpreadSettings.WalkMultiplier;
		else CurrentSpread *= WeaponFrag->SpreadSettings.MoveMultiplier;
	}
	if (bIsAiming) CurrentSpread *= WeaponFrag->SpreadSettings.ADSSpreadMultiplier;

	CurrentSpread += CurrentRecoilSpread;
	CurrentSpread = FMath::Min(CurrentSpread, WeaponFrag->SpreadSettings.MaxSpreadAngle);

	FVector SpreadDirection = FMath::VRandCone(CamRot.Vector(), FMath::DegreesToRadians(CurrentSpread));
	float MaxTrace = WeaponFrag->MaxRange > 0.f ? WeaponFrag->MaxRange : 100000.f;
	FHitResult ViewHit;
	FCollisionQueryParams QueryParams;
	QueryParams.AddIgnoredActor(this);
	bool bViewHit = GetWorld()->LineTraceSingleByChannel(ViewHit, CamLoc, CamLoc + SpreadDirection * MaxTrace, ECC_Visibility, QueryParams);
	FVector AimPoint = bViewHit ? ViewHit.ImpactPoint : (CamLoc + SpreadDirection * MaxTrace);

	USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp();
	FVector MuzzleLoc = (WeaponMesh && WeaponFrag->MuzzleSocketName != NAME_None && WeaponMesh->DoesSocketExist(WeaponFrag->MuzzleSocketName)) ? WeaponMesh->GetSocketLocation(WeaponFrag->MuzzleSocketName) : (WeaponMesh ? WeaponMesh->GetComponentLocation() : CamLoc);

	Server_Fire(MuzzleLoc, AimPoint);

	if (CurrentAmmo > 0)
	{
		float StanceMultiplier = 1.0f;
		if (CharacterStance == ECharacterStance::Crouch) StanceMultiplier *= WeaponFrag->RecoilSettings.CrouchMultiplier;
		if (bIsAiming) StanceMultiplier *= WeaponFrag->RecoilSettings.ADSRecoilMultiplier;
		
		const float Now = GetWorld()->GetTimeSeconds();
		if (Now - LastFireTimeForRecoil > WeaponFrag->RecoilSettings.RecoilResetWindow) ConsecutiveShots = 0;

		ConsecutiveShots++;
		const float Decay = FMath::Max(WeaponFrag->RecoilSettings.MinDecay, 1.f - WeaponFrag->RecoilSettings.PerShotDecay * ConsecutiveShots);
		float VerticalStep = WeaponFrag->RecoilSettings.VerticalRecoil * Decay * StanceMultiplier;
		float HorizontalStep = FMath::FRandRange(-WeaponFrag->RecoilSettings.HorizontalRecoil, WeaponFrag->RecoilSettings.HorizontalRecoil) * StanceMultiplier;
		CachedRecoilRecoveryRatio = WeaponFrag->RecoilSettings.RecoveryRatio;

		TargetRecoilPitch = FMath::Min(TargetRecoilPitch + VerticalStep, WeaponFrag->RecoilSettings.MaxVerticalRecoil);
		TargetRecoilYaw += HorizontalStep;
		LastFireTimeForRecoil = Now;

		CurrentRecoilSpread = FMath::Min(CurrentRecoilSpread + WeaponFrag->SpreadSettings.SpreadPerShot, WeaponFrag->SpreadSettings.MaxSpreadAngle);
		LastFireTimeForSpread = Now;
	}
}

void APlayerCharacter::FireBurstShot()
{
	if (BurstShotsRemaining > 0)
	{
		FireOneShot();
		BurstShotsRemaining--;
		if (BurstShotsRemaining > 0)
		{
			float FireInterval = 0.1f;
			if (CurrentHeldWeaponInstance && CurrentHeldWeaponInstance->Definition)
			{
				UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentHeldWeaponInstance->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
				if (WeaponFrag) FireInterval = 60.f / FMath::Max(WeaponFrag->RoundsPerMinute, 1.f);
			}
			GetWorldTimerManager().SetTimer(FireTimerHandle, this, &APlayerCharacter::FireBurstShot, FireInterval, false);
		}
	}
}

EWeaponFireMode APlayerCharacter::GetCurrentFireMode(UBackpackItemInstance* WeaponItem, UBackpackItemFragment_Weapon* WeaponFrag) const
{
	if (!WeaponItem || !WeaponFrag) return EWeaponFireMode::SemiAuto;
	for (const FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentFireMode)
			return static_cast<EWeaponFireMode>(FMath::RoundToInt(Attr.Value));
	}
	if (WeaponFrag->SupportedFireModes.Num() > 0) return WeaponFrag->SupportedFireModes[0];
	return EWeaponFireMode::SemiAuto;
}

USkeletalMeshComponent* APlayerCharacter::GetHeldWeaponComp() const
{
	int32 HeldIndex = -1;
	switch (CharacterHeldSlot)
	{
	case ECharacterHeldSlot::Primary1:  HeldIndex = 0; break;
	case ECharacterHeldSlot::Primary2:  HeldIndex = 1; break;
	case ECharacterHeldSlot::Secondary: HeldIndex = 2; break;
	case ECharacterHeldSlot::Melee:     HeldIndex = 3; break;
	case ECharacterHeldSlot::Throwable: HeldIndex = 4; break;
	default: break;
	}
	if (WeaponMeshComponents.IsValidIndex(HeldIndex)) return WeaponMeshComponents[HeldIndex];
	return nullptr;
}

void APlayerCharacter::OnRep_CharacterGait() { ApplyCharacterGait(); }
void APlayerCharacter::OnRep_CharacterStance() { ApplyCharacterGait(); }

void APlayerCharacter::OnInventoryChangedHandler()
{
	RefreshEquipmentVisuals();

	APlayerState* DropPS = GetPlayerState();
	UBackpackManagerComponent* DropComp = DropPS ? DropPS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (DropComp)
	{
		auto SlotToIndex = [](ECharacterHeldSlot Slot) -> int32
		{
			switch (Slot)
			{
			case ECharacterHeldSlot::Primary1:  return 0;
			case ECharacterHeldSlot::Primary2:  return 1;
			case ECharacterHeldSlot::Secondary: return 2;
			case ECharacterHeldSlot::Melee:     return 3;
			case ECharacterHeldSlot::Throwable: return 4;
			default: return -1;
			}
		};

		const int32 HeldIdx = SlotToIndex(CharacterHeldSlot);
		const bool bHeldDropped = HeldIdx != -1 && !DropComp->GetWeaponSlotItem(HeldIdx);

		const int32 PendIdx = PendingHeldSlotProcessing ? SlotToIndex(PendingTargetSlot) : -1;
		const bool bPendingDropped = PendIdx != -1 && !DropComp->GetWeaponSlotItem(PendIdx);

		if (bHeldDropped || bPendingDropped)
		{
			ResetWeaponRuntimeState();
			PendingHeldSlotProcessing = false;
			bIsSwitchingWeapon = false;
			CurrentSwitchWeaponMontage = nullptr;
			GetWorldTimerManager().ClearTimer(WeaponSwitchSafetyTimerHandle);
			if (HandMagMeshComp) { HandMagMeshComp->DestroyComponent(); HandMagMeshComp = nullptr; }
			bReloadMagOut = false;
			ReloadingMagSlotIndex = -1;
			bIsADS = false;
			bIsSoftAiming = false;
			bIsAiming = false;
			ApplyCameraState();

			if (UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr)
			{
				AnimInst->Montage_Stop(0.1f);
			}

			CharacterHeldSlot = ECharacterHeldSlot::Unarmed;
			CurrentHeldWeaponInstance = nullptr;
			if (IsLocallyControlled() && !HasAuthority())
			{
				Server_SetCharacterHeldSlot(ECharacterHeldSlot::Unarmed);
			}

			RefreshWeaponVisuals();
			UpdateCharacterHeldSlotAnimLayer();
		}
	}

	if (CurrentHeldWeaponInstance && IsHoldingFireArm())
	{
		APlayerState* PS = GetPlayerState();
		UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
		if (Comp)
		{
			int32 NewIndex = -1;
			for (int32 i = 0; i < 5; ++i)
			{
				if (Comp->GetWeaponSlotItem(i) == CurrentHeldWeaponInstance) { NewIndex = i; break; }
			}

			const int32 OldIndex = GetCurrentWeaponSlotIndex();
			if (NewIndex != -1 && NewIndex != OldIndex)
			{
				if (WeaponMeshComponents.Num() < 5) WeaponMeshComponents.SetNum(5);
				USkeletalMeshComponent* HandMesh = WeaponMeshComponents.IsValidIndex(OldIndex) ? WeaponMeshComponents[OldIndex] : nullptr;
				USkeletalMeshComponent* OtherMesh = WeaponMeshComponents[NewIndex];
				WeaponMeshComponents[NewIndex] = HandMesh;
				WeaponMeshComponents[OldIndex] = OtherMesh;

				switch (NewIndex)
				{
				case 0: CharacterHeldSlot = ECharacterHeldSlot::Primary1; break;
				case 1: CharacterHeldSlot = ECharacterHeldSlot::Primary2; break;
				case 2: CharacterHeldSlot = ECharacterHeldSlot::Secondary; break;
				default: break;
				}

				if (IsLocallyControlled() && !HasAuthority())
				{
					Server_SetCharacterHeldSlot(CharacterHeldSlot);
				}

				UpdateCharacterHeldSlotAnimLayer();
			}
		}
	}

	GetWorldTimerManager().ClearTimer(AttachmentRefreshTimer);
	GetWorldTimerManager().SetTimer(AttachmentRefreshTimer, this, &APlayerCharacter::RefreshWeaponVisuals, 0.2f, false);
}

void APlayerCharacter::OnRep_CharacterHeldSlot()
{
	if (bIsSwitchingWeapon || PendingHeldSlotProcessing) return;

	int32 HeldIndex = GetCurrentWeaponSlotIndex();
	if (HeldIndex != -1 && CurrentHeldWeaponInstance && CurrentHeldWeaponInstance->Definition)
	{
		UBackpackItemFragment_Mount* MountFrag = Cast<UBackpackItemFragment_Mount>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentHeldWeaponInstance->Definition->GetClass(), UBackpackItemFragment_Mount::StaticClass()));
		if (MountFrag)
		{
			if (WeaponMeshComponents.Num() < 5) WeaponMeshComponents.SetNum(5);
			for (int32 i = 0; i < 5; ++i)
			{
				USkeletalMeshComponent* HeldMesh = WeaponMeshComponents[i];
				if (IsValid(HeldMesh) && HeldMesh->GetAttachSocketName() == MountFrag->HeldSocketName && i != HeldIndex)
				{
					USkeletalMeshComponent* Tmp = WeaponMeshComponents[HeldIndex];
					WeaponMeshComponents[HeldIndex] = HeldMesh;
					WeaponMeshComponents[i] = Tmp;
					break;
				}
			}
		}
	}

	RefreshWeaponVisuals();
	UpdateCharacterHeldSlotAnimLayer();
}

void APlayerCharacter::OnRep_ClimbWarpTarget()
{
	if (MotionWarpingComp)
	{
		MotionWarpingComp->AddOrUpdateWarpTargetFromLocation(TEXT("ClimbTop"), ClimbTopTarget);
		MotionWarpingComp->AddOrUpdateWarpTargetFromLocation(TEXT("ClimbTarget"), ClimbWarpTarget);
	}
}

void APlayerCharacter::OnReloadMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bIsReloading) return;

	bIsReloading = false;
	const bool bWasMagOut = bReloadMagOut;
	bReloadMagOut = false;
	ReloadingMagSlotIndex = -1;

	if (bWasMagOut) RefreshAttachmentsOnly();

	if (HandMagMeshComp != nullptr)
	{
		HandMagMeshComp->DestroyComponent();
		HandMagMeshComp = nullptr;
	}

	if (bInterrupted || !HasAuthority()) return;

	const int32 SlotIndex = GetCurrentWeaponSlotIndex();
	if (SlotIndex == -1) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;

	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag) return;
	if (Montage != WeaponFrag->ReloadMontage && Montage != WeaponFrag->ReloadEmptyMontage) return;

	Server_FinishReload();
}

void APlayerCharacter::OnSwitchFireModeMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (CurrentHeldWeaponInstance && CurrentHeldWeaponInstance->Definition)
	{
		UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentHeldWeaponInstance->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
		if (WeaponFrag && Montage == WeaponFrag->SwitchFireModeMontage)
		{
			bIsTogglingFireMode = false;
		}
	}
}

void APlayerCharacter::OnSwitchWeaponMontageEnded(UAnimMontage* Montage, bool bInterrupted)
{
	if (Montage != CurrentSwitchWeaponMontage)
	{
		if (!IsLocallyControlled())
		{
			bIsSwitchingWeapon = false;
			RefreshWeaponVisuals();
			UpdateCharacterHeldSlotAnimLayer();
		}
		return;
	}

	if (PendingHeldSlotProcessing)
	{
		PendingHeldSlotProcessing = false;
		PlayPendingEquip();
		return;
	}

	GetWorldTimerManager().ClearTimer(WeaponSwitchSafetyTimerHandle);
	bIsSwitchingWeapon = false;
	CurrentSwitchWeaponMontage = nullptr;

	RefreshWeaponVisuals();
	UpdateCharacterHeldSlotAnimLayer();
}

void APlayerCharacter::OnSwitchWeaponMontageBlendOut(UAnimMontage* Montage, bool bInterrupted)
{
	if (!bInterrupted && IsLocallyControlled() && bIsSwitchingWeapon && Montage == CurrentSwitchWeaponMontage)
	{
		if (PendingHeldSlotProcessing)
		{
			UAnimMontage* NextMontage = ResolveEquipMontage(PendingTargetSlot);
			if (PendingTargetSlot == ECharacterHeldSlot::Unarmed || NextMontage != Montage)
			{
				PendingHeldSlotProcessing = false;
				PlayPendingEquip();
			}
			return;
		}

		UpdateCharacterHeldSlotAnimLayer();
		return;
	}

	if (bInterrupted && IsLocallyControlled() && bIsSwitchingWeapon && Montage == CurrentSwitchWeaponMontage)
	{
		if (PendingHeldSlotProcessing)
		{
			PendingHeldSlotProcessing = false;
			PlayPendingEquip();
			return;
		}
		OnSwitchWeaponMontageEnded(Montage, true);
	}
}

void APlayerCharacter::OnRep_IsClimbing()
{
	if (HasAuthority() || IsLocallyControlled()) return;
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, bIsClimbing ? ECR_Ignore : ECR_Block);
}

void APlayerCharacter::OnRep_ThrowMode()
{
	UpdateCharacterHeldSlotAnimLayer();
}

void APlayerCharacter::Server_SetCharacterStance_Implementation(ECharacterStance NewCharacterStance)
{
	CharacterStance = NewCharacterStance;
	if (CharacterStance == ECharacterStance::Crouch) Crouch();
	else UnCrouch();
	ApplyCharacterGait();
}

void APlayerCharacter::Server_SetCharacterGait_Implementation(ECharacterGait NewCharacterGait)
{
	CharacterGait = NewCharacterGait;
	ApplyCharacterGait();
}

void APlayerCharacter::Server_SetControllerRotator_Implementation(float NewYaw, float NewPitch)
{
	ControllerRotator_Yaw = NewYaw;
	ControllerRotator_Pitch = NewPitch;
}

void APlayerCharacter::Server_SetActorYaw_Implementation(float NewYaw)
{
	FRotator Rotator = GetActorRotation();
	Rotator.Yaw = FRotator::NormalizeAxis(NewYaw);
	SetActorRotation(Rotator);
}

void APlayerCharacter::Server_SetCharacterHeldSlot_Implementation(ECharacterHeldSlot NewSlot)
{
	if (NewSlot == ECharacterHeldSlot::Unarmed)
	{
		CharacterHeldSlot = NewSlot;
		CurrentHeldWeaponInstance = nullptr;
		return;
	}

	int32 SlotIndex = -1;
	if (NewSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (NewSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (NewSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	else if (NewSlot == ECharacterHeldSlot::Melee) SlotIndex = 3;
	else if (NewSlot == ECharacterHeldSlot::Throwable) SlotIndex = 4;

	if (SlotIndex != -1)
	{
		APlayerState* PS = GetPlayerState();
		UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
		if (Comp && Comp->GetWeaponSlotItem(SlotIndex))
		{
			CharacterHeldSlot = NewSlot;
			CurrentHeldWeaponInstance = Comp->GetWeaponSlotItem(SlotIndex);
		}
	}
}

void APlayerCharacter::Multicast_PlayReloadMontage_Implementation(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;
	UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
	if (!AnimInst) return;
	if (bIsReloading && AnimInst->Montage_IsPlaying(MontageToPlay)) return;

	const bool bWasMagOut = bReloadMagOut;
	bReloadMagOut = false;
	ReloadingMagSlotIndex = -1;
	bIsReloading = true;

	if (bWasMagOut) RefreshAttachmentsOnly();

	AnimInst->Montage_Play(MontageToPlay);
	AnimInst->OnMontageEnded.RemoveDynamic(this, &APlayerCharacter::OnReloadMontageEnded);
	AnimInst->OnMontageEnded.AddDynamic(this, &APlayerCharacter::OnReloadMontageEnded);
}

void APlayerCharacter::Server_FinishReload_Implementation()
{
	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	if (SlotIndex == -1) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;
	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag) return;

	int32 CurrentAmmo = 0;
	int32 MaxMagazineSize = WeaponFrag->MagazineSize;
	for (const FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo) CurrentAmmo = FMath::RoundToInt(Attr.Value);
		else if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_MagazineSize) MaxMagazineSize = FMath::RoundToInt(Attr.Value);
	}
	int32 NeededAmmo = MaxMagazineSize - CurrentAmmo;
	if (NeededAmmo <= 0) return;

	TArray<UBackpackItemInstance*> BackpackItems = Comp->GetBackpackItems();
	int32 AmmoLoaded = 0;
	for (int32 i = BackpackItems.Num() - 1; i >= 0; --i)
	{
		UBackpackItemInstance* Item = BackpackItems[i];
		if (!Item || !Item->Definition) continue;
		if (Item->Definition->ItemType == EItemType::Ammo)
		{
			UBackpackItemFragment_Ammo* AmmoFrag = Cast<UBackpackItemFragment_Ammo>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_Ammo::StaticClass()));
			if (!AmmoFrag || AmmoFrag->AmmoType != WeaponFrag->WeaponAmmoType) continue;
			int32 TakeAmount = FMath::Min(NeededAmmo - AmmoLoaded, Item->Quantity);
			if (TakeAmount > 0)
			{
				Comp->ConsumeBackpackItem(Item, TakeAmount);
				AmmoLoaded += TakeAmount;
				if (AmmoLoaded >= NeededAmmo) break;
			}
		}
	}

	if (AmmoLoaded > 0)
	{
		bool bFoundAmmoTag = false;
		for (FItemAttribute& Attr : WeaponItem->ItemAttributes)
		{
			if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
			{
				Attr.Value += AmmoLoaded;
				bFoundAmmoTag = true;
				break;
			}
		}
		if (!bFoundAmmoTag)
		{
			FItemAttribute NewAmmoAttr;
			NewAmmoAttr.Tag = PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo;
			NewAmmoAttr.Value = AmmoLoaded;
			WeaponItem->ItemAttributes.Add(NewAmmoAttr);
		}
		WeaponItem->ItemAttributes = WeaponItem->ItemAttributes;
		Comp->OnInventoryChanged.Broadcast();
	}
}

void APlayerCharacter::Server_Fire_Implementation(const FVector_NetQuantize& MuzzleLocation, const FVector_NetQuantize& AimPoint)
{
	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	if (SlotIndex == -1) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag || !WeaponFrag->BulletClass) return;

	const float FireInterval = 60.f / FMath::Max(WeaponFrag->RoundsPerMinute, 1.f);
	const float Now = GetWorld()->GetTimeSeconds();
	if (Now - LastFireTime < FireInterval * 0.9f) return;

	bool bAmmoDeducted = false;
	for (FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
		{
			if (Attr.Value > 0)
			{
				Attr.Value -= 1.f;
				bAmmoDeducted = true;
				WeaponItem->ItemAttributes = WeaponItem->ItemAttributes;
			}
			break;
		}
	}
	if (!bAmmoDeducted)
	{
		Client_FireRejected();
		return;
	}

	LastFireTime = Now;

	if (Comp && Comp->WeaponSlots.Entries.IsValidIndex(SlotIndex))
	{
		Comp->WeaponSlots.MarkItemDirty(Comp->WeaponSlots.Entries[SlotIndex]);
	}

	Comp->OnInventoryChanged.Broadcast();

	FVector FireDirection = AimPoint - MuzzleLocation;
	if (FireDirection.IsNearlyZero()) return;

	FActorSpawnParameters SpawnParams;
	SpawnParams.Owner = this;
	SpawnParams.Instigator = this;
	SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	ABulletProjectile* Bullet = GetWorld()->SpawnActor<ABulletProjectile>(WeaponFrag->BulletClass, MuzzleLocation, FireDirection.Rotation(), SpawnParams);
	if (Bullet)
	{
		Bullet->InitBullet(FireDirection.GetSafeNormal(), WeaponFrag->MuzzleVelocity,
			WeaponFrag->BallisticGravityScale, MuzzleLocation, WeaponFrag->BaseDamage,
			WeaponFrag->FalloffStartDistance, WeaponFrag->FalloffEndDistance,
			WeaponFrag->MinDamageMultiplier, WeaponFrag->HeadshotMultiplier,
			WeaponFrag->ChestMultiplier, GetController());
	}
	Multicast_FireEffect(MuzzleLocation);
}

void APlayerCharacter::Multicast_FireEffect_Implementation(const FVector_NetQuantize& MuzzleLocation)
{
	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	if (SlotIndex == -1) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag) return;

	if (WeaponFrag->FireSound) UGameplayStatics::PlaySoundAtLocation(this, WeaponFrag->FireSound, MuzzleLocation, FRotator::ZeroRotator, 1.f, 1.f, 0.f, GunFireAttenuation);

	USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp();

	if (WeaponFrag->CharacterFireMontage)
	{
		if (UAnimInstance* CharAnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr)
		{
			const float FireInterval = 60.f / FMath::Max(WeaponFrag->RoundsPerMinute, 1.f);
			const float MontageLength = WeaponFrag->CharacterFireMontage->GetPlayLength();
			float PlayRate = MontageLength / FMath::Max(FireInterval, KINDA_SMALL_NUMBER);
			PlayRate = FMath::Clamp(PlayRate, 1.f, 3.f);

			CharAnimInst->Montage_Play(WeaponFrag->CharacterFireMontage, PlayRate);
		}
	}
	
	if (WeaponFrag->WeaponFireMontage && WeaponMesh)
	{
		if (UAnimInstance* WeaponAnimInst = WeaponMesh->GetAnimInstance())
		{
			const float FireInterval = 60.f / FMath::Max(WeaponFrag->RoundsPerMinute, 1.f);
			const float MontageLength = WeaponFrag->WeaponFireMontage->GetPlayLength();
			float PlayRate = MontageLength / FMath::Max(FireInterval, KINDA_SMALL_NUMBER);
			PlayRate = FMath::Clamp(PlayRate, 1.f, 3.f);

			WeaponAnimInst->Montage_Play(WeaponFrag->WeaponFireMontage, PlayRate);
		}
	}

	if (WeaponFrag->MuzzleFlashFX && WeaponMesh && WeaponFrag->MuzzleSocketName != NAME_None)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(WeaponFrag->MuzzleFlashFX, WeaponMesh, WeaponFrag->MuzzleSocketName, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::SnapToTarget, true);
	}
	
	if (WeaponFrag->ShellEjectFX && WeaponMesh
		&& WeaponFrag->ShellEjectSocketName != NAME_None
		&& WeaponMesh->DoesSocketExist(WeaponFrag->ShellEjectSocketName))
	{
		const FTransform EjectXf = WeaponMesh->GetSocketTransform(WeaponFrag->ShellEjectSocketName);

		UNiagaraComponent* ShellComp = UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), WeaponFrag->ShellEjectFX, EjectXf.GetLocation(), EjectXf.Rotator(), FVector::OneVector, true, false);

		if (ShellComp)
		{
			if (WeaponFrag->ShellEjectMesh)
			{
				ShellComp->SetVariableStaticMesh(TEXT("ShellEjectStaticMesh"), WeaponFrag->ShellEjectMesh);
			}
			ShellComp->Activate(true);
		}
	}
}

void APlayerCharacter::Multicast_PlayImpactFX_Implementation(FVector ImpactPoint, FVector ImpactNormal, UNiagaraSystem* ImpactFX)
{
	if (ImpactFX)
	{
		FRotator SpawnRotation = (-ImpactNormal).Rotation();
		UNiagaraFunctionLibrary::SpawnSystemAtLocation(GetWorld(), ImpactFX, ImpactPoint, SpawnRotation);
	}
}

void APlayerCharacter::Multicast_PlaySwitchWeaponMontage_Implementation(UAnimMontage* MontageToPlay, float PlayRate)
{
	UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
	if (!MontageToPlay || !AnimInst) return;
	
	const float SafetyTime = FMath::Max(MontageToPlay->GetPlayLength(), 0.5f) + 0.5f;
	GetWorldTimerManager().ClearTimer(WeaponSwitchSafetyTimerHandle);
	GetWorldTimerManager().SetTimer(WeaponSwitchSafetyTimerHandle, [this]()
	{
		if (bIsSwitchingWeapon)
		{
			PendingHeldSlotProcessing = false;
			bIsSwitchingWeapon = false;
			CurrentSwitchWeaponMontage = nullptr;
			RefreshWeaponVisuals();
			UpdateCharacterHeldSlotAnimLayer();
		}
	}, SafetyTime, false);

	if (AnimInst->Montage_IsPlaying(MontageToPlay))
	{
		return;
	}

	if (PlayRate >= 0.f) AnimInst->Montage_Play(MontageToPlay, PlayRate);
	else
	{
		const float Len = MontageToPlay->GetPlayLength();
		AnimInst->Montage_Play(MontageToPlay, PlayRate, EMontagePlayReturnType::MontageLength, FMath::Max(Len - 0.01f, 0.f));
	}

	AnimInst->OnMontageBlendingOut.RemoveDynamic(this, &APlayerCharacter::OnSwitchWeaponMontageBlendOut);
	AnimInst->OnMontageBlendingOut.AddDynamic(this, &APlayerCharacter::OnSwitchWeaponMontageBlendOut);
	AnimInst->OnMontageEnded.RemoveDynamic(this, &APlayerCharacter::OnSwitchWeaponMontageEnded);
	AnimInst->OnMontageEnded.AddDynamic(this, &APlayerCharacter::OnSwitchWeaponMontageEnded);
}

void APlayerCharacter::Server_StartReload_Implementation(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;

	int32 SlotIndex = GetCurrentWeaponSlotIndex();
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	UBackpackItemInstance* WeaponItem = (Comp && SlotIndex != -1) ? Comp->GetWeaponSlotItem(SlotIndex) : nullptr;
	if (!Comp || !WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag) return;

	bool bHasAmmo = false;
	for (UBackpackItemInstance* Item : Comp->GetBackpackItems())
	{
		if (!Item || !Item->Definition || Item->Definition->ItemType != EItemType::Ammo) continue;
		UBackpackItemFragment_Ammo* AmmoFrag = Cast<UBackpackItemFragment_Ammo>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_Ammo::StaticClass()));
		if (AmmoFrag && AmmoFrag->AmmoType == WeaponFrag->WeaponAmmoType && Item->Quantity > 0) { bHasAmmo = true; break; }
	}
	if (!bHasAmmo) return;

	Multicast_PlayReloadMontage(MontageToPlay);
}

void APlayerCharacter::Server_ToggleFireMode_Implementation()
{
	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	if (SlotIndex == -1) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag || WeaponFrag->SupportedFireModes.Num() <= 1) return;

	EWeaponFireMode CurrentMode = GetCurrentFireMode(WeaponItem, WeaponFrag);
	int32 CurrentIndex = WeaponFrag->SupportedFireModes.IndexOfByKey(CurrentMode);
	if (CurrentIndex == INDEX_NONE) CurrentIndex = 0;
	int32 NextIndex = (CurrentIndex + 1) % WeaponFrag->SupportedFireModes.Num();
	EWeaponFireMode NextMode = WeaponFrag->SupportedFireModes[NextIndex];

	bool bFoundTag = false;
	for (FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentFireMode)
		{
			Attr.Value = static_cast<float>(NextMode);
			bFoundTag = true;
			break;
		}
	}
	if (!bFoundTag)
	{
		FItemAttribute NewAttr;
		NewAttr.Tag = PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentFireMode;
		NewAttr.Value = static_cast<float>(NextMode);
		WeaponItem->ItemAttributes.Add(NewAttr);
	}
	WeaponItem->ItemAttributes = WeaponItem->ItemAttributes;
	Comp->OnInventoryChanged.Broadcast();
	if (WeaponFrag->SwitchFireModeMontage) Multicast_PlaySwitchFireModeMontage(WeaponFrag->SwitchFireModeMontage);
}

void APlayerCharacter::Multicast_PlaySwitchFireModeMontage_Implementation(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;

	UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
	if (!AnimInst)
	{
		bIsTogglingFireMode = false;
		return;
	}

	GetWorldTimerManager().ClearTimer(FireModeLockTimerHandle);
	bIsTogglingFireMode = true;
	AnimInst->Montage_Play(MontageToPlay);
	AnimInst->OnMontageEnded.RemoveDynamic(this, &APlayerCharacter::OnSwitchFireModeMontageEnded);
	AnimInst->OnMontageEnded.AddDynamic(this, &APlayerCharacter::OnSwitchFireModeMontageEnded);
}

void APlayerCharacter::Server_SetLeanDirection_Implementation(float NewLeanDirection)
{
	CurrentLeanDirection = NewLeanDirection;
}

void APlayerCharacter::Server_PlaySwitchWeaponMontage_Implementation(UAnimMontage* MontageToPlay, float PlayRate)
{
	Multicast_PlaySwitchWeaponMontage(MontageToPlay, PlayRate);
}

void APlayerCharacter::Client_FireRejected_Implementation()
{
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	BurstShotsRemaining = 0;

	int32 SlotIndex = GetCurrentWeaponSlotIndex();
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	UBackpackItemInstance* WeaponItem = (Comp && SlotIndex != -1) ? Comp->GetWeaponSlotItem(SlotIndex) : nullptr;
	if (WeaponItem)
	{
		for (FItemAttribute& Attr : WeaponItem->ItemAttributes)
		{
			if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
			{
				Attr.Value = 0.f;
				break;
			}
		}
		if (Comp) Comp->OnInventoryChanged.Broadcast();
	}

	UBackpackItemFragment_Weapon* WeaponFrag = (WeaponItem && WeaponItem->Definition)
		? Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()))
		: nullptr;
	if (WeaponFrag && WeaponFrag->EmptySound)
	{
		USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp();
		FVector MuzzleLoc = (WeaponMesh && WeaponFrag->MuzzleSocketName != NAME_None && WeaponMesh->DoesSocketExist(WeaponFrag->MuzzleSocketName)) ? WeaponMesh->GetSocketLocation(WeaponFrag->MuzzleSocketName) : (WeaponMesh ? WeaponMesh->GetComponentLocation() : GetActorLocation());
		UGameplayStatics::PlaySoundAtLocation(this, WeaponFrag->EmptySound, MuzzleLoc, FRotator::ZeroRotator, 1.f, 1.f, 0.f, GunFireAttenuation);
	}
}

void APlayerCharacter::Multicast_PlayHitReaction_Implementation(const FVector_NetQuantize& DamageSourceLocation)
{
	if (!GetMesh()) return;
	
	const float Now = GetWorld() ? GetWorld()->GetTimeSeconds() : 0.f;
	if (Now - LastHitReactionTime < HitReactionCooldown) return;

	FVector ToSource = FVector(DamageSourceLocation) - GetActorLocation();
	ToSource.Z = 0.f;
	if (ToSource.IsNearlyZero()) return;
	ToSource.Normalize();

	const float ForwardDot = FVector::DotProduct(GetActorForwardVector(), ToSource);
	const float RightDot   = FVector::DotProduct(GetActorRightVector(), ToSource);

	UAnimMontage* MontageToPlay = nullptr;
	if (ForwardDot > 0.5f)       MontageToPlay = HitReactMontage_Front;
	else if (ForwardDot < -0.5f) MontageToPlay = HitReactMontage_Back;
	else if (RightDot > 0.f)     MontageToPlay = HitReactMontage_Right;
	else                         MontageToPlay = HitReactMontage_Left;

	if (!MontageToPlay) return;

	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->Montage_Play(MontageToPlay);
		LastHitReactionTime = Now;
	}
	
	if (IsLocallyControlled() && HitCameraShakeClass)
	{
		if (APlayerController* PC = Cast<APlayerController>(GetController()))
		{
			PC->ClientStartCameraShake(HitCameraShakeClass);
		}
	}
}

void APlayerCharacter::OnCrouch(const FInputActionValue& Value)
{
	if (CharacterStance == ECharacterStance::Crouch) { CharacterStance = ECharacterStance::Stand; UnCrouch(); }
	else { CharacterStance = ECharacterStance::Crouch; Crouch(); }
	Server_SetCharacterStance(CharacterStance);
	ApplyCharacterGait();
}

void APlayerCharacter::OnJump(const FInputActionValue& Value)
{
	if (CharacterStance == ECharacterStance::Crouch)
	{
		CharacterStance = ECharacterStance::Stand;
		Server_SetCharacterStance(CharacterStance);
		ApplyCharacterGait();
		UnCrouch();
		return;
	}
	UAbilitySystemComponent* ASC = GetAbilitySystemComponent();
	if (ASC && ASC->TryActivateAbilitiesByTag(FGameplayTagContainer(PUBGGameplayTag::PUBG_Ability_Movement_ClimbVault))) return;
	Jump();
}

void APlayerCharacter::OnLook(const FInputActionValue& Value)
{
	FVector2D Vector = Value.Get<FVector2D>();
	AddControllerPitchInput(-Vector.Y * 0.5f);
	AddControllerYawInput(Vector.X * 0.5f);
}

void APlayerCharacter::OnMove(const FInputActionValue& Value)
{
	FVector2D Vector = Value.Get<FVector2D>();
	if (Vector.SizeSquared() > 1.f) Vector.Normalize();
	AddMovementInput(GetActorForwardVector(), Vector.Y);
	AddMovementInput(GetActorRightVector(), Vector.X);
}

void APlayerCharacter::OnSprint(const FInputActionInstance& Value)
{
	if (CharacterGait == ECharacterGait::Walk) return;
	if (Value.GetTriggerEvent() == ETriggerEvent::Started) bWantsToSprint = true;
	else if (Value.GetTriggerEvent() == ETriggerEvent::Completed || Value.GetTriggerEvent() == ETriggerEvent::Canceled)
	{
		bWantsToSprint = false;
		if (CharacterGait == ECharacterGait::Sprint)
		{
			CharacterGait = ECharacterGait::Jog;
			Server_SetCharacterGait(CharacterGait);
			ApplyCharacterGait();
		}
	}
}

void APlayerCharacter::OnSwitchHeld(const FInputActionValue& Value)
{
	if (LifeState != ECharacterLifeState::Alive) return;
	
	float Number = Value.Get<float>();

	ECharacterHeldSlot NewSlot = ECharacterHeldSlot::Unarmed;
	int32 SlotIndex = -1;
	if (Number == 1.f) { NewSlot = ECharacterHeldSlot::Primary1;  SlotIndex = 0; }
	else if (Number == 2.f) { NewSlot = ECharacterHeldSlot::Primary2;  SlotIndex = 1; }
	else if (Number == 3.f) { NewSlot = ECharacterHeldSlot::Secondary; SlotIndex = 2; }
	else if (Number == 4.f) { NewSlot = ECharacterHeldSlot::Melee;     SlotIndex = 3; }
	else if (Number == 5.f) { NewSlot = ECharacterHeldSlot::Throwable; SlotIndex = 4; }

	if (SlotIndex == -1) return;
	if (CharacterHeldSlot == NewSlot) return;
	if (bIsSwitchingWeapon) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	if (!Comp->GetWeaponSlotItem(SlotIndex)) return;

	ResetWeaponRuntimeState();
	if (GetMesh() && GetMesh()->GetAnimInstance())
	{
		GetMesh()->GetAnimInstance()->Montage_Stop(0.2f);
	}

	BeginSwitchWeapon(NewSlot);
}

void APlayerCharacter::OnTogglePerspective(const FInputActionValue& Value)
{
	if (bIsADS) return;

	if (FirstPersonCamera->IsActive()) { FirstPersonCamera->SetActive(false); ThirdPersonCamera->SetActive(true); PersonHead->SetOwnerNoSee(false); }
	else { FirstPersonCamera->SetActive(true); ThirdPersonCamera->SetActive(false); PersonHead->SetOwnerNoSee(true); }
}

void APlayerCharacter::OnToggleBackpack(const FInputActionValue& Value)
{
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC || !PC->IsLocalController()) return;
	UUIGameInstanceSubsystem* UISub = UUIGameInstanceSubsystem::Get(this);
	if (!UISub || BackpackWidgetClass.IsNull()) return;
	FGameplayTag MenuTag = PUBGGameplayTag::PUBG_UI_Stack_Menu;
	TSubclassOf<UBaseCommonActivatableWidget> BackpackClass = BackpackWidgetClass.LoadSynchronous();
	if (UISub->IsWidgetActiveInStack(MenuTag, BackpackClass)) { if (UBaseCommonActivatableWidget* TopWidget = UISub->GetTopWidgetInStack(MenuTag)) TopWidget->DeactivateWidget(); }
	else UISub->PushSoftWidgetToStackAsync(MenuTag, BackpackWidgetClass, [](EAsyncPushWidgetState State, UBaseCommonActivatableWidget* Widget){});
}

void APlayerCharacter::OnWalk(const FInputActionInstance& Value)
{
	if (Value.GetTriggerEvent() == ETriggerEvent::Started) { CharacterGait = ECharacterGait::Walk; Server_SetCharacterGait(CharacterGait); ApplyCharacterGait(); }
	else if (Value.GetTriggerEvent() == ETriggerEvent::Canceled || Value.GetTriggerEvent() == ETriggerEvent::Completed)
	{
		if (CharacterGait == ECharacterGait::Walk) { CharacterGait = ECharacterGait::Jog; Server_SetCharacterGait(CharacterGait); ApplyCharacterGait(); }
	}
}

void APlayerCharacter::OnFire(const FInputActionInstance& Value)
{
	if (LifeState != ECharacterLifeState::Alive) return;
	
	ETriggerEvent Event = Value.GetTriggerEvent();

	if (Event == ETriggerEvent::Started)
	{
		if (CharacterHeldSlot == ECharacterHeldSlot::Throwable)
		{
			BeginCookGrenade();
			return;
		}

		if (bIsClimbing || bIsReloading || bIsTogglingFireMode || bIsSwitchingWeapon || !IsHoldingFireArm()) return;
		if (CharacterGait == ECharacterGait::Sprint) { CharacterGait = ECharacterGait::Jog; Server_SetCharacterGait(CharacterGait); ApplyCharacterGait(); }

		bIsHoldingFire = true;

		int32 SlotIndex = -1;
		if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
		else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
		else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
		if (SlotIndex == -1) return;

		APlayerState* PS = GetPlayerState();
		UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
		if (!Comp) return;
		UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
		if (!WeaponItem || !WeaponItem->Definition) return;

		UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
		if (!WeaponFrag) return;

		EWeaponFireMode CurrentMode = GetCurrentFireMode(WeaponItem, WeaponFrag);
		float FireInterval = 60.f / FMath::Max(WeaponFrag->RoundsPerMinute, 1.f);

		if (CurrentMode == EWeaponFireMode::SemiAuto)
		{
			FireOneShot();
		}
		else if (CurrentMode == EWeaponFireMode::FullAuto)
		{
			FireOneShot();
			GetWorldTimerManager().SetTimer(FireTimerHandle, this, &APlayerCharacter::FireOneShot, FireInterval, true);
		}
		else if (CurrentMode == EWeaponFireMode::Burst)
		{
			if (BurstShotsRemaining <= 0)
			{
				BurstShotsRemaining = 3;
				FireOneShot();
				BurstShotsRemaining--;
				GetWorldTimerManager().SetTimer(FireTimerHandle, this, &APlayerCharacter::FireBurstShot, FireInterval, false);
			}
		}
	}
	else if (Event == ETriggerEvent::Completed || Event == ETriggerEvent::Canceled)
	{
		if (bIsCookingGrenade)
		{
			ReleaseGrenade();
		}

		bIsHoldingFire = false;
		GetWorldTimerManager().ClearTimer(FireTimerHandle);
	}
}

void APlayerCharacter::OnAim(const FInputActionInstance& Value)
{
	if (LifeState != ECharacterLifeState::Alive) return;
	
	if (CharacterHeldSlot == ECharacterHeldSlot::Throwable)
	{
		if (Value.GetTriggerEvent() == ETriggerEvent::Started)
		{
			ToggleThrowMode();
		}
		return;
	}

	if (!IsHoldingFireArm()) return;

	const ETriggerEvent Event = Value.GetTriggerEvent();
	if (Event == ETriggerEvent::Started)
	{
		if (bIsClimbing || bIsReloading || bIsSwitchingWeapon || bIsTogglingFireMode) return;
		
		GetWorldTimerManager().SetTimer(AimHoldTimer, [this]()
		{
			if (bIsClimbing || bIsReloading || bIsSwitchingWeapon || bIsTogglingFireMode) return;
			if (!bIsADS)
			{
				bIsSoftAiming = true;
				bIsAiming = true;
				ApplyCameraState();
			}
		}, 0.2f, false);
	}
	else if (Event == ETriggerEvent::Completed || Event == ETriggerEvent::Canceled)
	{
		const bool bWasSoftAiming = bIsSoftAiming;
		GetWorldTimerManager().ClearTimer(AimHoldTimer);
		bIsSoftAiming = false;

		if (!bWasSoftAiming && !bIsClimbing && !bIsReloading && !bIsSwitchingWeapon && !bIsTogglingFireMode)
		{
			bIsADS = !bIsADS;
			if (bIsADS) bPreADSFirstPerson = FirstPersonCamera->IsActive();
		}

		bIsAiming = bIsADS;
		ApplyCameraState();
	}
}

void APlayerCharacter::OnReload(const FInputActionValue& Value)
{
	if (LifeState != ECharacterLifeState::Alive) return;
	
	if (!IsHoldingFireArm()) return;
	if (bIsClimbing || bIsReloading || bIsTogglingFireMode || bIsSwitchingWeapon) return;

	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;

	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag || (!WeaponFrag->ReloadMontage && !WeaponFrag->ReloadEmptyMontage)) return;

	int32 CurrentAmmo = 0, MaxMagazineSize = WeaponFrag->MagazineSize;
	for (const FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo) CurrentAmmo = FMath::RoundToInt(Attr.Value);
		else if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_MagazineSize) MaxMagazineSize = FMath::RoundToInt(Attr.Value);
	}
	if (CurrentAmmo >= MaxMagazineSize) return;

	bool bHasAmmo = false;
	for (UBackpackItemInstance* Item : Comp->GetBackpackItems())
	{
		if (!Item || !Item->Definition || Item->Definition->ItemType != EItemType::Ammo) continue;
		UBackpackItemFragment_Ammo* AmmoFrag = Cast<UBackpackItemFragment_Ammo>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_Ammo::StaticClass()));
		if (AmmoFrag && AmmoFrag->AmmoType == WeaponFrag->WeaponAmmoType && Item->Quantity > 0) { bHasAmmo = true; break; }
	}
	if (!bHasAmmo) return;
	
	UAnimMontage* MontageToPlay = (CurrentAmmo <= 0 && WeaponFrag->ReloadEmptyMontage)
		? WeaponFrag->ReloadEmptyMontage
		: WeaponFrag->ReloadMontage;

	if (bIsADS) { bIsADS = false; bIsAiming = false; ApplyCameraState(); }
	Server_StartReload(MontageToPlay);
}

void APlayerCharacter::OnHolster(const FInputActionValue& Value)
{
	if (LifeState != ECharacterLifeState::Alive) return;
	
	if (bIsSwitchingWeapon) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;

	ECharacterHeldSlot TargetSlot = ECharacterHeldSlot::Unarmed;

	if (CharacterHeldSlot != ECharacterHeldSlot::Unarmed)
	{
		ResetWeaponRuntimeState();
		if (GetMesh() && GetMesh()->GetAnimInstance())
		{
			GetMesh()->GetAnimInstance()->Montage_Stop(0.2f);
		}

		BeginSwitchWeapon(ECharacterHeldSlot::Unarmed);
	}
	else
	{
		if (!IsSlotOccupied(LastHeldSlot)) return;
		if (LastHeldSlot == ECharacterHeldSlot::Unarmed) return;

		ResetWeaponRuntimeState();
		if (GetMesh() && GetMesh()->GetAnimInstance())
		{
			GetMesh()->GetAnimInstance()->Montage_Stop(0.2f);
		}

		BeginSwitchWeapon(LastHeldSlot);
	}
}

void APlayerCharacter::OnToggleFireMode(const FInputActionValue& Value)
{
	if (CharacterHeldSlot != ECharacterHeldSlot::Primary1 && CharacterHeldSlot != ECharacterHeldSlot::Primary2 && CharacterHeldSlot != ECharacterHeldSlot::Secondary) return;
	if (bIsClimbing || bIsReloading || bIsTogglingFireMode || bIsSwitchingWeapon) return;

	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	if (!WeaponFrag || WeaponFrag->SupportedFireModes.Num() <= 1) return;

	bIsTogglingFireMode = true;
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	GetWorldTimerManager().SetTimer(FireModeLockTimerHandle, [this]() { bIsTogglingFireMode = false; }, 2.0f, false);
	Server_ToggleFireMode();
}

void APlayerCharacter::OnLean(const FInputActionInstance& Value)
{
	float AxisValue = Value.GetValue().Get<float>();

	if (Value.GetTriggerEvent() == ETriggerEvent::Completed)
	{
		AxisValue = 0.f;
	}

	CurrentLeanDirection = AxisValue;

	if (IsLocallyControlled())
	{
		Server_SetLeanDirection(AxisValue);
	}
}

void APlayerCharacter::OnPickup(const FInputActionValue& Value)
{
	if (LifeState != ECharacterLifeState::Alive) return;
	
	APlayerController* PC = Cast<APlayerController>(GetController());
	if (!PC || !PC->IsLocalController()) return;

	APickupItem* HitItem = TracePickupItem();
	if (!HitItem) return;

	AGlobalPlayerState* PS = GetPlayerState<AGlobalPlayerState>();
	if (!PS) return;

	if (UBackpackManagerComponent* Manager = PS->FindComponentByClass<UBackpackManagerComponent>())
	{
		Manager->Server_QuickPickupItem(HitItem);
	}
}

void APlayerCharacter::ApplyCharacterGait()
{
	if (!DT_CharacterGaitSettings) return;
	FCharacterGaitSettings* Settings = nullptr;
	if (CharacterStance == ECharacterStance::Stand)
	{
		switch (CharacterGait)
		{
		case ECharacterGait::Sprint: Settings = DT_CharacterGaitSettings->FindRow<FCharacterGaitSettings>(TEXT("StandSprint"), TEXT("")); break;
		case ECharacterGait::Jog: Settings = DT_CharacterGaitSettings->FindRow<FCharacterGaitSettings>(TEXT("StandJog"), TEXT("")); break;
		case ECharacterGait::Walk: Settings = DT_CharacterGaitSettings->FindRow<FCharacterGaitSettings>(TEXT("StandWalk"), TEXT("")); break;
		}
		if (!Settings) return;
		GetCharacterMovement()->MaxWalkSpeed = Settings->MaxWalkSpeed;
	}
	else
	{
		switch (CharacterGait)
		{
		case ECharacterGait::Sprint: Settings = DT_CharacterGaitSettings->FindRow<FCharacterGaitSettings>(TEXT("CrouchSprint"), TEXT("")); break;
		case ECharacterGait::Jog: Settings = DT_CharacterGaitSettings->FindRow<FCharacterGaitSettings>(TEXT("CrouchJog"), TEXT("")); break;
		case ECharacterGait::Walk: Settings = DT_CharacterGaitSettings->FindRow<FCharacterGaitSettings>(TEXT("CrouchWalk"), TEXT("")); break;
		}
		if (!Settings) return;
		GetCharacterMovement()->MaxWalkSpeedCrouched = Settings->MaxWalkSpeed;
	}
}

void APlayerCharacter::UpdateCharacterHeldSlotAnimLayer()
{
	if (!CharacterAnimInstance && GetMesh()) CharacterAnimInstance = Cast<UCharacterAnimInstance>(GetMesh()->GetAnimInstance());
	if (!CharacterAnimInstance) return;

	switch (CharacterHeldSlot)
	{
	case ECharacterHeldSlot::Melee: if (CharacterAnimLayerInstance_Melee) CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Melee); break;
	case ECharacterHeldSlot::Primary1: if (CharacterAnimLayerInstance_Rifle) CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Rifle); break;
	case ECharacterHeldSlot::Primary2: if (CharacterAnimLayerInstance_Rifle) CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Rifle); break;
	case ECharacterHeldSlot::Secondary: if (CharacterAnimLayerInstance_Pistol) CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Pistol); break;
	case ECharacterHeldSlot::Throwable:
		if (ThrowMode == EThrowMode::Overhand && CharacterAnimLayerInstance_ThrowableOverhand)
			CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_ThrowableOverhand);
		else if (ThrowMode == EThrowMode::Underhand && CharacterAnimLayerInstance_ThrowableUnderhand)
			CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_ThrowableUnderhand);
		else if (CharacterAnimLayerInstance_Throwable)
			CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Throwable);
		break;
	case ECharacterHeldSlot::Unarmed: if (CharacterAnimLayerInstance_Unarmed && CharacterAnimInstance) CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Unarmed); break;
	}
}

void APlayerCharacter::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (APickupItem* Item = Cast<APickupItem>(OtherActor))
	{
		if (GetCapsuleComponent())
		{
			const float FootZ = GetActorLocation().Z - GetCapsuleComponent()->GetScaledCapsuleHalfHeight();
			const float ItemZ = Item->GetActorLocation().Z;
			if (ItemZ - FootZ > 120.f || ItemZ - FootZ < -20.f) return;
		}
		if (AGlobalPlayerState* PS = GetPlayerState<AGlobalPlayerState>())
		{
			if (UBackpackManagerComponent* Manager = PS->FindComponentByClass<UBackpackManagerComponent>()) Manager->AddItemToNearbyPickupItems(Item);
		}
	}
}

void APlayerCharacter::OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	if (APickupItem* Item = Cast<APickupItem>(OtherActor))
	{
		if (AGlobalPlayerState* PS = GetPlayerState<AGlobalPlayerState>())
		{
			if (UBackpackManagerComponent* Manager = PS->FindComponentByClass<UBackpackManagerComponent>()) Manager->RemoveItemFromNearbyPickupItems(Item);
		}
	}
}

void APlayerCharacter::ResetWeaponRuntimeState()
{
	if (IsLocallyControlled())
	{
		if (FMath::Abs(AccumulatedRecoilPitch) > 0.01f) AddControllerPitchInput(AccumulatedRecoilPitch);
		if (FMath::Abs(AccumulatedRecoilYaw) > 0.01f) AddControllerYawInput(-AccumulatedRecoilYaw);
	}

	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	BurstShotsRemaining = 0;
	bIsReloading = false;
	bIsTogglingFireMode = false;
	GetWorldTimerManager().ClearTimer(FireModeLockTimerHandle);
	CurrentRecoilSpread = 0.f;
	LastFireTimeForSpread = -100.f;
	TargetRecoilPitch = 0.f;
	TargetRecoilYaw = 0.f;
	AccumulatedRecoilPitch = 0.f;
	AccumulatedRecoilYaw = 0.f;
	ConsecutiveShots = 0;
	bIsHoldingFire = false;
	bReloadMagOut = false;
	ReloadingMagSlotIndex = -1;
	
	if (HandMagMeshComp != nullptr)
	{
		HandMagMeshComp->DestroyComponent();
		HandMagMeshComp = nullptr;
	}
	
	if (USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp())
	{
		if (UAnimInstance* WeaponAnimInst = WeaponMesh->GetAnimInstance())
		{
			WeaponAnimInst->Montage_Stop(0.1f);
		}
	}
}

void APlayerCharacter::PlayPendingEquip()
{
	PendingHeldSlotProcessing = false;

	const ECharacterHeldSlot NewSlot = PendingTargetSlot;
	if (CharacterHeldSlot != NewSlot)
	{
		LastHeldSlot = CharacterHeldSlot;
		CharacterHeldSlot = NewSlot;
	}

	Server_SetCharacterHeldSlot(NewSlot);
	RefreshWeaponVisuals();
	OnWeaponSlotChanged.Broadcast();

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (Comp)
	{
		int32 SlotIndex = -1;
		switch (NewSlot)
		{
		case ECharacterHeldSlot::Primary1:  SlotIndex = 0; break;
		case ECharacterHeldSlot::Primary2:  SlotIndex = 1; break;
		case ECharacterHeldSlot::Secondary: SlotIndex = 2; break;
		case ECharacterHeldSlot::Melee:     SlotIndex = 3; break;
		case ECharacterHeldSlot::Throwable: SlotIndex = 4; break;
		default: break;
		}
		CurrentHeldWeaponInstance = (SlotIndex != -1) ? Comp->GetWeaponSlotItem(SlotIndex) : nullptr;
	}

	if (UAnimMontage* EquipMontage = ResolveEquipMontage(NewSlot))
	{
		CurrentSwitchWeaponMontage = EquipMontage;
		bAttachToHandWhenNotifyFires = true;

		const float PlayRate = (NewSlot == ECharacterHeldSlot::Primary1 || NewSlot == ECharacterHeldSlot::Primary2 || NewSlot == ECharacterHeldSlot::Secondary) ? -1.f : 1.f;

		Multicast_PlaySwitchWeaponMontage(EquipMontage, PlayRate);
		Server_PlaySwitchWeaponMontage(EquipMontage, PlayRate);
	}
	else
	{
		bIsSwitchingWeapon = false;
		CurrentSwitchWeaponMontage = nullptr;
		UpdateCharacterHeldSlotAnimLayer();
	}
}

void APlayerCharacter::BeginSwitchWeapon(ECharacterHeldSlot NewSlot)
{
	if (bIsADS) { bIsADS = false; bIsAiming = false; ApplyCameraState(); }
	
	PendingTargetSlot = NewSlot;
	PendingHeldSlotProcessing = true;
	bIsSwitchingWeapon = true;

	const bool bCurrentHasWeapon = (CharacterHeldSlot != ECharacterHeldSlot::Unarmed);
	UAnimMontage* HolsterMontage = bCurrentHasWeapon ? ResolveEquipMontage(CharacterHeldSlot) : nullptr;

	if (HolsterMontage)
	{
		CurrentSwitchWeaponMontage = HolsterMontage;
		bAttachToHandWhenNotifyFires = false;

		const float HolsterPlayRate = (CharacterHeldSlot == ECharacterHeldSlot::Primary1
			|| CharacterHeldSlot == ECharacterHeldSlot::Primary2
			|| CharacterHeldSlot == ECharacterHeldSlot::Secondary) ? 1.f : -1.f;

		Server_PlaySwitchWeaponMontage(HolsterMontage, HolsterPlayRate);
	}
	else
	{
		PlayPendingEquip();
	}
}

bool APlayerCharacter::IsSlotOccupied(ECharacterHeldSlot Slot) const
{
	if (Slot == ECharacterHeldSlot::Unarmed) return false;

	int32 SlotIndex = -1;
	switch (Slot)
	{
	case ECharacterHeldSlot::Primary1:  SlotIndex = 0; break;
	case ECharacterHeldSlot::Primary2:  SlotIndex = 1; break;
	case ECharacterHeldSlot::Secondary: SlotIndex = 2; break;
	case ECharacterHeldSlot::Melee:     SlotIndex = 3; break;
	case ECharacterHeldSlot::Throwable: SlotIndex = 4; break;
	default: return false;
	}

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	return Comp && Comp->GetWeaponSlotItem(SlotIndex) != nullptr;
}

UStaticMeshComponent* APlayerCharacter::SpawnHandMagMesh(UStaticMesh* MagMesh)
{
	if (!MagMesh || !GetMesh()) return nullptr;
	if (HandMagMeshComp != nullptr) return HandMagMeshComp.Get();

	UStaticMeshComponent* NewComp = NewObject<UStaticMeshComponent>(this);
	NewComp->RegisterComponent();
	NewComp->SetStaticMesh(MagMesh);
	NewComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
	NewComp->AttachToComponent(GetMesh(), FAttachmentTransformRules::SnapToTargetNotIncludingScale, TEXT("hand_l_socket"));
	HandMagMeshComp = NewComp;
	return NewComp;
}

UStaticMesh* APlayerCharacter::GetHeldMagazineMesh() const
{
	int32 SlotIndex = GetCurrentWeaponSlotIndex();
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	UBackpackItemInstance* WeaponItem = (Comp && SlotIndex != -1) ? Comp->GetWeaponSlotItem(SlotIndex) : nullptr;
	if (!WeaponItem) return nullptr;

	UBackpackItemInstance* MagInst = WeaponItem->GetItemAttachment(EAttachmentSlot::Magazine);
	return (MagInst && MagInst->Definition) ? MagInst->Definition->WorldMesh : nullptr;
}

int32 APlayerCharacter::GetHeldCurrentAmmo() const
{
	int32 SlotIndex = GetCurrentWeaponSlotIndex();
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	UBackpackItemInstance* WeaponItem = (Comp && SlotIndex != -1) ? Comp->GetWeaponSlotItem(SlotIndex) : nullptr;
	if (!WeaponItem) return 0;

	return FMath::RoundToInt(WeaponItem->GetItemAttribute(PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo));
}

void APlayerCharacter::ClearAttachmentsFromWeaponMesh(USkeletalMeshComponent* WeaponMesh)
{
	if (!IsValid(WeaponMesh)) return;

	TArray<USceneComponent*> AttachedChildren;
	WeaponMesh->GetChildrenComponents(true, AttachedChildren);
	for (USceneComponent* Child : AttachedChildren)
	{
		if (UStaticMeshComponent* SM = Cast<UStaticMeshComponent>(Child))
		{
			SM->DestroyComponent();
		}
	}
}

void APlayerCharacter::ApplyCameraState()
{
	if (bIsADS)
	{
		if (USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp())
		{
			if (WeaponMesh->DoesSocketExist(AimCameraSocketName))
			{
				FirstPersonCamera->AttachToComponent(WeaponMesh, FAttachmentTransformRules::KeepWorldTransform, AimCameraSocketName);
			}
		}
		FirstPersonCamera->SetActive(true);
		ThirdPersonCamera->SetActive(false);
		PersonHead->SetOwnerNoSee(true);
	}
	else
	{
		if (FirstPersonCamera->GetAttachParent() != GetMesh())
		{
			FirstPersonCamera->AttachToComponent(GetMesh(), FAttachmentTransformRules::KeepWorldTransform, TEXT("Socket_FirstPersonCamera"));
		}
		FirstPersonCamera->SetActive(bPreADSFirstPerson);
		ThirdPersonCamera->SetActive(!bPreADSFirstPerson);
		PersonHead->SetOwnerNoSee(bPreADSFirstPerson);
	}
	
	FName RowName = TEXT("TPP");
	if (bIsADS) RowName = TEXT("ADS");
	else if (bIsSoftAiming) RowName = TEXT("HipFire");

	if (!DT_TPPCameraSettings) return;
	if (FTPPCameraSettings* Settings = DT_TPPCameraSettings->FindRow<FTPPCameraSettings>(RowName, TEXT("")))
	{
		TargetArmLength = Settings->TargetArmLength;
		TargetSocketOffset = Settings->SocketOffset;
		TargetFOV = Settings->FOV;
	}
}

APickupItem* APlayerCharacter::TracePickupItem() const
{
	UCameraComponent* ActiveCam = FirstPersonCamera->IsActive() ? FirstPersonCamera : ThirdPersonCamera;
	if (!ActiveCam) return nullptr;

	const FVector Start = ActiveCam->GetComponentLocation();
	const FVector End = Start + ActiveCam->GetForwardVector() * PickupTraceDistance;

	FHitResult Hit;
	FCollisionQueryParams Params;
	Params.AddIgnoredActor(this);

	if (GetWorld()->LineTraceSingleByChannel(Hit, Start, End, ECC_Visibility, Params))
	{
		return Cast<APickupItem>(Hit.GetActor());
	}
	return nullptr;
}

void APlayerCharacter::ToggleThrowMode()
{
	const EThrowMode NewMode = (ThrowMode == EThrowMode::Overhand) ? EThrowMode::Underhand : EThrowMode::Overhand;

	ThrowMode = NewMode;
	UpdateCharacterHeldSlotAnimLayer();
	Server_SetThrowMode(NewMode);
}

void APlayerCharacter::BeginCookGrenade()
{
	if (bIsCookingGrenade || bIsClimbing || bIsReloading || bIsSwitchingWeapon) return;

	UBackpackItemFragment_Throwable* Frag = GetThrowableFrag();
	if (!Frag) return;

	bIsCookingGrenade = true;
	GrenadeCookStartTime = GetWorld()->GetTimeSeconds();

	UAnimMontage* CookMontage = (ThrowMode == EThrowMode::Overhand) ? Frag->CookMontage_Overhand : Frag->CookMontage_Underhand;
	if (CookMontage && GetMesh() && GetMesh()->GetAnimInstance())
	{
		GetMesh()->GetAnimInstance()->Montage_Play(CookMontage);
	}
	Server_PlayGrenadeMontage(CookMontage);
}

void APlayerCharacter::ReleaseGrenade()
{
	if (!bIsCookingGrenade) return;
	bIsCookingGrenade = false;

	UBackpackItemFragment_Throwable* Frag = GetThrowableFrag();
	if (!Frag) return;

	UAnimMontage* ThrowMontage = (ThrowMode == EThrowMode::Overhand) ? Frag->ThrowMontage_Overhand : Frag->ThrowMontage_Underhand;
	if (ThrowMontage && GetMesh() && GetMesh()->GetAnimInstance())
	{
		GetMesh()->GetAnimInstance()->Montage_Play(ThrowMontage);
	}
	Server_PlayGrenadeMontage(ThrowMontage);
	
	const FVector Dir = FRotationMatrix(FRotator(GetControlRotation().Pitch, GetActorRotation().Yaw, 0.f)).GetUnitAxis(EAxis::X);
	Server_ThrowGrenade(Dir, Frag->FuseTime);
}

UBackpackItemFragment_Throwable* APlayerCharacter::GetThrowableFrag() const
{
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return nullptr;

	UBackpackItemInstance* Item = Comp->GetWeaponSlotItem(4);
	if (!Item || !Item->Definition) return nullptr;

	return Cast<UBackpackItemFragment_Throwable>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_Throwable::StaticClass()));
}

void APlayerCharacter::UpdateGrenadeTrajectory()
{
	if (!IsLocallyControlled()) return;

	UBackpackItemFragment_Throwable* Frag = GetThrowableFrag();
	if (!Frag) return;

	const FVector Dir = FRotationMatrix(FRotator(GetControlRotation().Pitch, GetActorRotation().Yaw, 0.f)).GetUnitAxis(EAxis::X);
	const float SpeedCm = ((ThrowMode == EThrowMode::Overhand) ? Frag->ThrowSpeed_Overhand : Frag->ThrowSpeed_Underhand) * 100.f;
	const FVector StartLoc = GetGrenadeStartLocation(Dir);

	FPredictProjectilePathParams Params;
	Params.StartLocation = StartLoc;
	Params.LaunchVelocity = Dir * SpeedCm;
	Params.bTraceWithCollision = true;
	Params.ProjectileRadius = 3.f;
	Params.MaxSimTime = Frag->FuseTime;
	Params.SimFrequency = 30.f;
	Params.TraceChannel = ECC_Visibility;
	Params.ActorsToIgnore.Add(this);
	Params.DrawDebugType = EDrawDebugTrace::None;

	FPredictProjectilePathResult Result;
	UGameplayStatics::PredictProjectilePath(this, Params, Result);

	UWorld* World = GetWorld();
	if (!World) return;
	
	const FColor LineColor = FColor::Green;

	const TArray<FPredictProjectilePathPointData>& Path = Result.PathData;
	for (int32 i = 1; i < Path.Num(); ++i)
	{
		DrawDebugLine(World, Path[i - 1].Location, Path[i].Location, LineColor, false, -1.f, 0, 2.f);
	}

	if (Result.HitResult.bBlockingHit)
	{
		DrawDebugSphere(World, Result.HitResult.ImpactPoint, 10.f, 12, FColor::Red, false, -1.f, 0, 2.f);
		DrawDebugLine(World, Result.HitResult.ImpactPoint, Result.HitResult.ImpactPoint + FVector(0.f, 0.f, 50.f), FColor::Red, false, -1.f, 0, 2.f);
	}
}

bool APlayerCharacter::IsHoldingFireArm() const
{
	return CharacterHeldSlot == ECharacterHeldSlot::Primary1 || CharacterHeldSlot == ECharacterHeldSlot::Primary2 || CharacterHeldSlot == ECharacterHeldSlot::Secondary;
}

EWeaponFireMode APlayerCharacter::GetCurrentFireModeEnum() const
{
	int32 SlotIndex = -1;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) SlotIndex = 0;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) SlotIndex = 1;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Secondary) SlotIndex = 2;
	if (SlotIndex == -1) return EWeaponFireMode::SemiAuto;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return EWeaponFireMode::SemiAuto;

	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return EWeaponFireMode::SemiAuto;

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
	return GetCurrentFireMode(WeaponItem, WeaponFrag);
}

UAnimMontage* APlayerCharacter::ResolveEquipMontage(ECharacterHeldSlot Slot) const
{
	switch (Slot)
	{
	case ECharacterHeldSlot::Primary1:  return EquipPrimary1Montage;
	case ECharacterHeldSlot::Primary2:  return EquipPrimary2Montage;
	case ECharacterHeldSlot::Secondary: return EquipSecondaryMontage;
	case ECharacterHeldSlot::Melee:     return EquipMeleeMontage;
	case ECharacterHeldSlot::Throwable: return EquipThrowableMontage;
	default: return nullptr;
	}
}

int32 APlayerCharacter::GetCurrentWeaponSlotIndex() const
{
	switch (CharacterHeldSlot)
	{
	case ECharacterHeldSlot::Primary1:  return 0;
	case ECharacterHeldSlot::Primary2:  return 1;
	case ECharacterHeldSlot::Secondary: return 2;
	default: return -1;
	}
}

void APlayerCharacter::BeginClimbState()
{
	if (bIsADS) { bIsADS = false; bIsAiming = false; ApplyCameraState(); }
	bIsSoftAiming = false;
	bIsClimbing = true;
	GetCharacterMovement()->StopMovementImmediately();
	GetCharacterMovement()->SetMovementMode(MOVE_Flying);
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Ignore);
}

void APlayerCharacter::EndClimbState()
{
	bIsClimbing = false;
	GetCapsuleComponent()->SetCollisionResponseToChannel(ECC_WorldStatic, ECR_Block);
	if (GetCharacterMovement()->MovementMode == MOVE_Flying)
	{
		GetCharacterMovement()->SetMovementMode(MOVE_Walking);
	}
}

bool APlayerCharacter::ShouldEnableUpperBodyAim() const
{
	return CharacterHeldSlot == ECharacterHeldSlot::Throwable;
}

FString APlayerCharacter::GetCurrentWeaponName() const
{
	return (CurrentHeldWeaponInstance && CurrentHeldWeaponInstance->Definition) ? CurrentHeldWeaponInstance->Definition->ItemName.ToString() : FString();
}

bool APlayerCharacter::ShouldEnableWeaponIK() const
{
	if (!IsHoldingFireArm())
	{
		return false;
	}
	
	if (bIsSwitchingWeapon || bIsInterpolatingWeapon || PendingHeldSlotProcessing)
	{
		return false;
	}

	if (!GetHeldWeaponComp())
	{
		return false;
	}

	return true;
}

void APlayerCharacter::Server_SetThrowMode_Implementation(EThrowMode NewMode)
{
	ThrowMode = NewMode;
}

void APlayerCharacter::Server_PlayGrenadeMontage_Implementation(UAnimMontage* MontageToPlay)
{
	Multicast_PlayGrenadeMontage(MontageToPlay);
}

void APlayerCharacter::Multicast_PlayGrenadeMontage_Implementation(UAnimMontage* MontageToPlay)
{
	if (IsLocallyControlled()) return;
	if (!MontageToPlay || !GetMesh()) return;
	if (UAnimInstance* AnimInst = GetMesh()->GetAnimInstance())
	{
		AnimInst->Montage_Play(MontageToPlay);
	}
}

void APlayerCharacter::Server_ThrowGrenade_Implementation(FVector_NetQuantizeNormal ThrowDirection, float RemainingFuse)
{
	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;

	UBackpackItemInstance* Item = Comp->GetWeaponSlotItem(4);
	if (!Item || !Item->Definition) return;

	UBackpackItemFragment_Throwable* Frag = Cast<UBackpackItemFragment_Throwable>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_Throwable::StaticClass()));
	if (!Frag) return;

	const FVector Dir = FVector(ThrowDirection).GetSafeNormal();
	const float SpeedCm = ((ThrowMode == EThrowMode::Overhand) ? Frag->ThrowSpeed_Overhand : Frag->ThrowSpeed_Underhand) * 100.f;

	const FVector SpawnLoc = GetGrenadeStartLocation(Dir);

	FActorSpawnParameters Params;
	Params.Owner = this;
	Params.Instigator = this;
	Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if (AGrenadeProjectile* Grenade = GetWorld()->SpawnActor<AGrenadeProjectile>(AGrenadeProjectile::StaticClass(), SpawnLoc, Dir.Rotation(), Params))
	{
		Grenade->InitGrenade(Dir, SpeedCm, Item->Definition, FMath::Clamp(RemainingFuse, 0.f, Frag->FuseTime));
	}

	if (Comp->ConsumeWeaponSlotItem(4, 1) && !Comp->GetWeaponSlotItem(4))
	{
		Server_SetCharacterHeldSlot(ECharacterHeldSlot::Unarmed);
	}
}

void APlayerCharacter::AnimNotify_AttachWeaponToHand()
{
	if (!bAttachToHandWhenNotifyFires) return;

	USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp();
	if (!WeaponMesh) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp || !CurrentHeldWeaponInstance || !CurrentHeldWeaponInstance->Definition) return;

	UBackpackItemFragment_Mount* MountFrag = Cast<UBackpackItemFragment_Mount>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentHeldWeaponInstance->Definition->GetClass(), UBackpackItemFragment_Mount::StaticClass()));
	if (!MountFrag || !GetMesh()) return;

	InterpWeaponMesh = WeaponMesh;
	InterpStartLoc = WeaponMesh->GetComponentLocation();
	InterpStartRot = WeaponMesh->GetComponentRotation();
	InterpTargetSocket = MountFrag->HeldSocketName;

	WeaponMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

	InterpAlpha = 0.f;
	bIsInterpolatingWeapon = true;
}

void APlayerCharacter::AnimNotify_AttachWeaponToBack()
{
	if (bAttachToHandWhenNotifyFires) return;

	int32 LastIndex = -1;
	switch (CharacterHeldSlot)
	{
	case ECharacterHeldSlot::Primary1:  LastIndex = 0; break;
	case ECharacterHeldSlot::Primary2:  LastIndex = 1; break;
	case ECharacterHeldSlot::Secondary: LastIndex = 2; break;
	case ECharacterHeldSlot::Melee:     LastIndex = 3; break;
	case ECharacterHeldSlot::Throwable: LastIndex = 4; break;
	default: break;
	}

	if (!WeaponMeshComponents.IsValidIndex(LastIndex)) return;
	USkeletalMeshComponent* WeaponMesh = WeaponMeshComponents[LastIndex];
	if (!WeaponMesh) return;

	InterpWeaponMesh = WeaponMesh;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp || !GetMesh()) return;

	UBackpackItemInstance* LastWeaponItem = Comp->GetWeaponSlotItem(LastIndex);
	if (!LastWeaponItem || !LastWeaponItem->Definition) return;

	UBackpackItemFragment_Mount* MountFrag = Cast<UBackpackItemFragment_Mount>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(LastWeaponItem->Definition->GetClass(), UBackpackItemFragment_Mount::StaticClass()));
	if (!MountFrag) return;

	FName TargetSocketName = MountFrag->AttachSocketName;
	if (CharacterHeldSlot == ECharacterHeldSlot::Primary1) TargetSocketName = Primary1Socket_Character;
	else if (CharacterHeldSlot == ECharacterHeldSlot::Primary2) TargetSocketName = Primary2Socket_Character;

	if (TargetSocketName == NAME_None) return;

	InterpStartLoc = WeaponMesh->GetComponentLocation();
	InterpStartRot = WeaponMesh->GetComponentRotation();
	InterpTargetSocket = TargetSocketName;

	InterpAlpha = 0.f;
	bIsInterpolatingWeapon = true;
}