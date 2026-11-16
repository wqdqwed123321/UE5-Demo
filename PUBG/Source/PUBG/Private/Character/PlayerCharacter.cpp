// Fill out your copyright notice in the Description page of Project Settings.

#include "Character/PlayerCharacter.h"

#include "EnhancedInputComponent.h"
#include "NiagaraFunctionLibrary.h"
#include "PUBGGameplayTag.h"
#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"
#include "Actor/BulletProjectile.h"
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
#include "Object/BackpackItemFragment_Attachment.h"

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
	
	if (DT_TPPCameraSettings)
	{
		FTPPCameraSettings* Settings = DT_TPPCameraSettings->FindRow<FTPPCameraSettings>(TEXT("TPP"), TEXT(""));
		if (Settings)
		{
			TargetArmLength = Settings->TargetArmLength;
			TargetSocketOffset = Settings->SocketOffset;
		}
	}
	
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
	}
	
	if (HasAuthority() || IsLocallyControlled())
	{
		if (GetVelocity().Size() > 0.f)
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
			if (Now - LastFireTimeForRecoil > 0.5f)
			{
				ConsecutiveShots = 0;
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

			WeaponMesh->SetWorldLocationAndRotation(FMath::Lerp(InterpStartLoc, TargetLoc, SmoothAlpha),FMath::Lerp(InterpStartRot, TargetRot, SmoothAlpha));

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
		EnhancedInputComponent->BindAction(IA_Reload, ETriggerEvent::Started, this, &APlayerCharacter::OnReload);
		EnhancedInputComponent->BindAction(IA_Holster, ETriggerEvent::Started, this, &APlayerCharacter::OnHolster);
		EnhancedInputComponent->BindAction(IA_ToggleFireMode, ETriggerEvent::Started, this, &APlayerCharacter::OnToggleFireMode);
		EnhancedInputComponent->BindAction(IA_Lean, ETriggerEvent::Triggered, this, &APlayerCharacter::OnLean);
		EnhancedInputComponent->BindAction(IA_Lean, ETriggerEvent::Completed, this, &APlayerCharacter::OnLean);
	}
}

UAbilitySystemComponent* APlayerCharacter::GetAbilitySystemComponent() const
{
	if (AGlobalPlayerState* PS = GetPlayerState<AGlobalPlayerState>()) return PS->GetAbilitySystemComponent();
	return nullptr;
}

bool APlayerCharacter::ShouldShowCrosshairBars() const
{
	if (CharacterGait == ECharacterGait::Sprint) return false;
	if (!IsHoldingFireArm()) return false;
	return true;
}

bool APlayerCharacter::ShouldShowCrosshairCenter() const
{
	if (CharacterGait == ECharacterGait::Sprint) return false;
	return true;
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
					WeaponMeshComponents[i]->DestroyComponent();
					WeaponMeshComponents[i] = nullptr;
				}
				continue;
			}

			UBackpackItemFragment_Mount* MountFrag = Cast<UBackpackItemFragment_Mount>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Mount::StaticClass()));
			if (!MountFrag || !MountFrag->EquipmentMesh) continue;

			USceneComponent* TargetParent = GetMesh();
			FName TargetSocket = NAME_None;
			if (i == HeldIndex) TargetSocket = MountFrag->HeldSocketName; 
			else if (i == 0) TargetSocket = Primary1Socket_Character;
			else if (i == 1) TargetSocket = Primary2Socket_Character;
			else TargetSocket = MountFrag->AttachSocketName;

			if (TargetSocket == NAME_None) continue;

			bool bAlreadySpawned = IsValid(WeaponMeshComponents[i]) 
				&& WeaponMeshComponents[i]->GetSkeletalMeshAsset() == MountFrag->EquipmentMesh 
				&& WeaponMeshComponents[i]->GetAttachSocketName() == TargetSocket;

			if (!bAlreadySpawned)
			{
				if (IsValid(WeaponMeshComponents[i]))
				{
					WeaponMeshComponents[i]->DestroyComponent();
				}

				USkeletalMeshComponent* NewMeshComp = NewObject<USkeletalMeshComponent>(this);
				NewMeshComp->RegisterComponent();
				NewMeshComp->SetSkeletalMesh(MountFrag->EquipmentMesh);
				NewMeshComp->AttachToComponent(TargetParent, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TargetSocket);
				NewMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
				NewMeshComp->SetVisibility(true);
				WeaponMeshComponents[i] = NewMeshComp;
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
		USkeletalMeshComponent* WeaponMesh = WeaponMeshComponents.IsValidIndex(i) ? WeaponMeshComponents[i] : nullptr;
		if (!IsValid(WeaponMesh)) continue;

		TArray<USceneComponent*> AttachedChildren;
		WeaponMesh->GetChildrenComponents(false, AttachedChildren);
		for (USceneComponent* Child : AttachedChildren)
		{
			if (Child->IsA<UStaticMeshComponent>())
			{
				Child->DestroyComponent();
			}
		}

		UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(i);
		if (!WeaponItem || !WeaponItem->Definition) continue;

		TSet<EAttachmentSlot> ProcessedSlots;

		for (const FItemAttachment& Attach : WeaponItem->ItemAttachments)
		{
			if (Attach.ItemInstance && Attach.ItemInstance->Definition)
			{
				if (ProcessedSlots.Contains(Attach.Slot)) continue;
				ProcessedSlots.Add(Attach.Slot);

				UBackpackItemDefinition* AttachDef = Attach.ItemInstance->Definition;
				UStaticMesh* AttachMesh = AttachDef->WorldMesh; 

				UBackpackItemFragment_Attachment* AttachFrag = Cast<UBackpackItemFragment_Attachment>(
					UBackpackItemDefinition::FindBackpackItemFragmentByClass(AttachDef->GetClass(), UBackpackItemFragment_Attachment::StaticClass())
				);

				if (AttachMesh && AttachFrag)
				{
					FName TargetAttachSocket = NAME_None;
					switch (AttachFrag->TargetSlot)
					{
					case EAttachmentSlot::Scope:     TargetAttachSocket = TEXT("Scope_Socket"); break;
					case EAttachmentSlot::Muzzle:    TargetAttachSocket = TEXT("Muzzle_Socket"); break;
					case EAttachmentSlot::Grip:      TargetAttachSocket = TEXT("Grip_Socket"); break;
					case EAttachmentSlot::Magazine:  TargetAttachSocket = TEXT("Gun_Mag_Socket"); break;
					case EAttachmentSlot::Stock:     TargetAttachSocket = TEXT("Gun_Stock_Socket"); break;
					default: break;
					}

					if (TargetAttachSocket != NAME_None)
					{
						UStaticMeshComponent* AttachMeshComp = NewObject<UStaticMeshComponent>(WeaponMesh);
						AttachMeshComp->RegisterComponent();
						AttachMeshComp->SetStaticMesh(AttachMesh);
						AttachMeshComp->SetCollisionEnabled(ECollisionEnabled::NoCollision);
						AttachMeshComp->SetVisibility(true);
						
						AttachMeshComp->AttachToComponent(WeaponMesh, FAttachmentTransformRules::SnapToTargetNotIncludingScale, TargetAttachSocket);
						AttachMeshComp->SetRelativeLocationAndRotation(FVector::ZeroVector, FRotator::ZeroRotator);
					}
				}
			}
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
	
	if (CurrentAmmo <= 0)
	{
		GetWorldTimerManager().ClearTimer(FireTimerHandle);
		BurstShotsRemaining = 0;
		if (WeaponFrag && WeaponFrag->EmptySound && IsLocallyControlled())
		{
			float CurrentTime = GetWorld()->GetTimeSeconds();
			if (CurrentTime - LastEmptySoundTime > 0.2f)
			{
				LastEmptySoundTime = CurrentTime;
				USkeletalMeshComponent* WeaponMesh = GetHeldWeaponComp();
				FVector MuzzleLoc = (WeaponMesh && WeaponFrag->MuzzleSocketName != NAME_None && WeaponMesh->DoesSocketExist(WeaponFrag->MuzzleSocketName)) ? WeaponMesh->GetSocketLocation(WeaponFrag->MuzzleSocketName) : (WeaponMesh ? WeaponMesh->GetComponentLocation() : GetActorLocation());
				UGameplayStatics::PlaySoundAtLocation(this, WeaponFrag->EmptySound, MuzzleLoc, FRotator::ZeroRotator, 1.f, 1.f, 0.f, GunFireAttenuation);
			}
		}
		return;
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

	float StanceMultiplier = 1.0f;
	if (CharacterStance == ECharacterStance::Crouch) StanceMultiplier *= WeaponFrag->RecoilSettings.CrouchMultiplier;
	if (bIsAiming) StanceMultiplier *= WeaponFrag->RecoilSettings.ADSRecoilMultiplier;

	ConsecutiveShots++;
	const float Decay = FMath::Max(0.5f, 1.f - 0.08f * ConsecutiveShots); 
	float VerticalStep = WeaponFrag->RecoilSettings.VerticalRecoil * Decay * StanceMultiplier;
	float HorizontalStep = FMath::FRandRange(-WeaponFrag->RecoilSettings.HorizontalRecoil, WeaponFrag->RecoilSettings.HorizontalRecoil) * StanceMultiplier;

	TargetRecoilPitch = FMath::Min(TargetRecoilPitch + VerticalStep, 10.0f);
	TargetRecoilYaw += HorizontalStep; 
	LastFireTimeForRecoil = GetWorld()->GetTimeSeconds();
	
	Server_Fire(MuzzleLoc, AimPoint);
	CurrentRecoilSpread = FMath::Min(CurrentRecoilSpread + WeaponFrag->SpreadSettings.SpreadPerShot, WeaponFrag->SpreadSettings.MaxSpreadAngle);
	LastFireTimeForSpread = GetWorld()->GetTimeSeconds();
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
	
	GetWorldTimerManager().ClearTimer(AttachmentRefreshTimer);
	GetWorldTimerManager().SetTimer(AttachmentRefreshTimer, this, &APlayerCharacter::RefreshWeaponVisuals, 0.2f, false);
}

void APlayerCharacter::OnRep_CharacterHeldSlot()
{
	if (bIsSwitchingWeapon || PendingHeldSlotProcessing) return;
	RefreshWeaponVisuals();
	UpdateCharacterHeldSlotAnimLayer();
}

void APlayerCharacter::OnReloadMontageEnded(UAnimMontage* Montage, bool bInterrupted)
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
	if (WeaponFrag && Montage == WeaponFrag->ReloadMontage)
	{
		bIsReloading = false;
		if (!bInterrupted && HasAuthority()) Server_FinishReload();
	}
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

	GetWorldTimerManager().ClearTimer(WeaponSwitchSafetyTimerHandle);
	bIsSwitchingWeapon = false;
	CurrentSwitchWeaponMontage = nullptr;

	RefreshWeaponVisuals();
	UpdateCharacterHeldSlotAnimLayer();
}

void APlayerCharacter::OnSwitchWeaponMontageBlendOut(UAnimMontage* Montage, bool bInterrupted)
{
	if (bInterrupted && IsLocallyControlled() && bIsSwitchingWeapon && Montage == CurrentSwitchWeaponMontage)
	{
		OnSwitchWeaponMontageEnded(Montage, true);
	}
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
		UAnimMontage* MontageToPlay = ResolveEquipMontage(NewSlot);
		if (MontageToPlay) Multicast_PlaySwitchWeaponMontage(MontageToPlay, 1.0f);
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
			
			UAnimMontage* MontageToPlay = ResolveEquipMontage(NewSlot);
			if (MontageToPlay)
			{
				float PlayRate = (NewSlot == ECharacterHeldSlot::Primary1 || NewSlot == ECharacterHeldSlot::Primary2 || NewSlot == ECharacterHeldSlot::Secondary) ? -1.0f : 1.0f;
				Multicast_PlaySwitchWeaponMontage(MontageToPlay, PlayRate);
			}
		}
	}
}

void APlayerCharacter::Multicast_PlayReloadMontage_Implementation(UAnimMontage* MontageToPlay)
{
	if (!MontageToPlay) return;
	UAnimInstance* AnimInst = GetMesh() ? GetMesh()->GetAnimInstance() : nullptr;
	if (!AnimInst) return;

	bIsReloading = true;
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
	if (!bAmmoDeducted) return;

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
	if (WeaponFrag->MuzzleFlashFX && WeaponMesh && WeaponFrag->MuzzleSocketName != NAME_None)
	{
		UNiagaraFunctionLibrary::SpawnSystemAttached(WeaponFrag->MuzzleFlashFX, WeaponMesh, WeaponFrag->MuzzleSocketName, FVector::ZeroVector, FRotator::ZeroRotator, EAttachLocation::SnapToTarget, true); 
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
	
	if (bIsSwitchingWeapon && AnimInst->Montage_IsPlaying(MontageToPlay))
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

void APlayerCharacter::Server_StartReload_Implementation(UAnimMontage* MontageToPlay) { Multicast_PlayReloadMontage(MontageToPlay); }

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
	AddControllerPitchInput(-Vector.Y);
	AddControllerYawInput(Vector.X);
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

	if (Comp->GetWeaponSlotItem(SlotIndex))
	{
		ResetWeaponRuntimeState();
		if (GetMesh() && GetMesh()->GetAnimInstance()) GetMesh()->GetAnimInstance()->Montage_Stop(0.2f);
		
		UAnimMontage* MontageToPlay = ResolveEquipMontage(NewSlot);

		Server_SetCharacterHeldSlot(NewSlot);
		LastHeldSlot = NewSlot;
		CharacterHeldSlot = NewSlot;
		OnWeaponSlotChanged.Broadcast();
		CurrentHeldWeaponInstance = Comp->GetWeaponSlotItem(SlotIndex);
		UpdateCharacterHeldSlotAnimLayer();

		if (MontageToPlay)
		{
			bIsSwitchingWeapon = true;
			CurrentSwitchWeaponMontage = MontageToPlay;
			PendingHeldSlotProcessing = false;
			bAttachToHandWhenNotifyFires = true;

			float PlayRate = (NewSlot == ECharacterHeldSlot::Primary1 || NewSlot == ECharacterHeldSlot::Primary2 || NewSlot == ECharacterHeldSlot::Secondary) ? -1.0f : 1.0f;
			
			Multicast_PlaySwitchWeaponMontage(MontageToPlay, PlayRate);
		}
	}
}

void APlayerCharacter::OnTogglePerspective(const FInputActionValue& Value)
{
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
	ETriggerEvent Event = Value.GetTriggerEvent();
	
	if (Event == ETriggerEvent::Started)
	{
		if (bIsReloading || bIsTogglingFireMode || bIsSwitchingWeapon || !IsHoldingFireArm()) return;
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
		bIsHoldingFire = false;
		GetWorldTimerManager().ClearTimer(FireTimerHandle);
	}
}

void APlayerCharacter::OnAim(const FInputActionValue& Value)
{
	if (!IsHoldingFireArm()) return;
	bIsAiming = !bIsAiming;
}

void APlayerCharacter::OnReload(const FInputActionValue& Value)
{
	if (!IsHoldingFireArm()) return;
	if (bIsReloading || bIsTogglingFireMode || bIsSwitchingWeapon) return;

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
	if (!WeaponFrag || !WeaponFrag->ReloadMontage) return;
	
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
	
	Server_StartReload(WeaponFrag->ReloadMontage);
}

void APlayerCharacter::OnHolster(const FInputActionValue& Value)
{
	if (bIsSwitchingWeapon) return;

	APlayerState* PS = GetPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;

	ECharacterHeldSlot TargetSlot = ECharacterHeldSlot::Unarmed;

	if (CharacterHeldSlot != ECharacterHeldSlot::Unarmed)
	{
		ResetWeaponRuntimeState();
		if (GetMesh() && GetMesh()->GetAnimInstance()) GetMesh()->GetAnimInstance()->Montage_Stop(0.2f);
		
		UAnimMontage* MontageToPlay = ResolveEquipMontage(CharacterHeldSlot); 
		LastHeldSlot = CharacterHeldSlot;
		
		Server_SetCharacterHeldSlot(TargetSlot);
		CharacterHeldSlot = TargetSlot;
		OnWeaponSlotChanged.Broadcast();
		CurrentHeldWeaponInstance = nullptr;
		UpdateCharacterHeldSlotAnimLayer();

		if (MontageToPlay)
		{
			bIsSwitchingWeapon = true;
			CurrentSwitchWeaponMontage = MontageToPlay;
			PendingHeldSlotProcessing = false;
			bAttachToHandWhenNotifyFires = false;

			float PlayRate = (LastHeldSlot == ECharacterHeldSlot::Primary1 || LastHeldSlot == ECharacterHeldSlot::Primary2 || LastHeldSlot == ECharacterHeldSlot::Secondary) ? 1.0f : -1.0f;
			Multicast_PlaySwitchWeaponMontage(MontageToPlay, PlayRate);
		}
	}
	else
	{
		int32 SlotIndex = -1;
		switch (LastHeldSlot)
		{
		case ECharacterHeldSlot::Primary1:  SlotIndex = 0; break;
		case ECharacterHeldSlot::Primary2:  SlotIndex = 1; break;
		case ECharacterHeldSlot::Secondary: SlotIndex = 2; break;
		case ECharacterHeldSlot::Melee:     SlotIndex = 3; break;
		case ECharacterHeldSlot::Throwable: SlotIndex = 4; break;
		default: break;
		}

		if (SlotIndex != -1 && Comp->GetWeaponSlotItem(SlotIndex))
		{
			TargetSlot = LastHeldSlot;
			ResetWeaponRuntimeState();
			if (GetMesh() && GetMesh()->GetAnimInstance()) GetMesh()->GetAnimInstance()->Montage_Stop(0.2f);

			UAnimMontage* MontageToPlay = ResolveEquipMontage(TargetSlot);

			Server_SetCharacterHeldSlot(TargetSlot);
			CharacterHeldSlot = TargetSlot;
			CurrentHeldWeaponInstance = Comp->GetWeaponSlotItem(SlotIndex); 
			UpdateCharacterHeldSlotAnimLayer();

			if (MontageToPlay)
			{
				bIsSwitchingWeapon = true;
				CurrentSwitchWeaponMontage = MontageToPlay;
				PendingHeldSlotProcessing = false;
				bAttachToHandWhenNotifyFires = true;

				float PlayRate = (TargetSlot == ECharacterHeldSlot::Primary1 || TargetSlot == ECharacterHeldSlot::Primary2 || TargetSlot == ECharacterHeldSlot::Secondary) ? -1.0f : 1.0f;
				Multicast_PlaySwitchWeaponMontage(MontageToPlay, PlayRate);
			}
		}
		else return; 
	}
}

void APlayerCharacter::OnToggleFireMode(const FInputActionValue& Value)
{
	if (CharacterHeldSlot != ECharacterHeldSlot::Primary1 && CharacterHeldSlot != ECharacterHeldSlot::Primary2 && CharacterHeldSlot != ECharacterHeldSlot::Secondary) return;
	if (bIsReloading || bIsTogglingFireMode || bIsSwitchingWeapon) return;

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
	case ECharacterHeldSlot::Throwable: if (CharacterAnimLayerInstance_Throwable) CharacterAnimInstance->LinkAnimClassLayers(CharacterAnimLayerInstance_Throwable); break;
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
	GetWorldTimerManager().ClearTimer(FireTimerHandle);
	BurstShotsRemaining = 0;
	bIsReloading = false;
	bIsTogglingFireMode = false;
	GetWorldTimerManager().ClearTimer(FireModeLockTimerHandle);
	CurrentRecoilSpread = 0.f;
	LastFireTimeForSpread = -100.f;
	TargetRecoilPitch = 0.f;
	TargetRecoilYaw = 0.f;
	ConsecutiveShots = 0;
	bIsHoldingFire = false;
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

bool APlayerCharacter::ShouldEnableWeaponIK() const
{
	if (!IsHoldingFireArm())
	{
		return false;
	}

	if (bIsSwitchingWeapon || bIsReloading || bIsInterpolatingWeapon || PendingHeldSlotProcessing)
	{
		return false;
	}

	if (!GetHeldWeaponComp())
	{
		return false;
	}

	return true;
}

void APlayerCharacter::AnimNotify_AttachWeaponToHand()
{
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
	int32 LastIndex = -1;
	switch (LastHeldSlot)
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
	if (LastHeldSlot == ECharacterHeldSlot::Primary1) TargetSocketName = Primary1Socket_Character;
	else if (LastHeldSlot == ECharacterHeldSlot::Primary2) TargetSocketName = Primary2Socket_Character;

	if (TargetSocketName == NAME_None) return;

	InterpStartLoc = WeaponMesh->GetComponentLocation();
	InterpStartRot = WeaponMesh->GetComponentRotation();
	InterpTargetSocket = TargetSocketName;
	
	WeaponMesh->DetachFromComponent(FDetachmentTransformRules::KeepWorldTransform);

	InterpAlpha = 0.f;
	bIsInterpolatingWeapon = true;
}