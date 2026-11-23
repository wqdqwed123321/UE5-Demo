#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "PUBGType.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

class UBackpackItemFragment_Throwable;
class APickupItem;
class UMotionWarpingComponent;
class UBackpackItemFragment_Weapon;
class USphereComponent;
class UBaseCommonActivatableWidget;
class UCommonActivatableWidget;
class UCharacterAnimInstance;
class USpringArmComponent;
class UCameraComponent;
class UInputAction;
class UNiagaraSystem;
class UStaticMeshComponent;
struct FInputActionInstance;
struct FInputActionValue;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponSlotChanged);

UCLASS()
class PUBG_API APlayerCharacter : public ACharacter, public IAbilitySystemInterface
{
	GENERATED_BODY()

public:
	APlayerCharacter();

protected:
	virtual void BeginPlay() override;

public:
	virtual void Tick(float DeltaTime) override;
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	virtual void PossessedBy(AController* NewController) override;
	virtual void OnRep_PlayerState() override;
	virtual void OnStartCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;
	virtual void OnEndCrouch(float HalfHeightAdjust, float ScaledHalfHeightAdjust) override;

public:
	UFUNCTION()
	void Server_InitASC();

	UFUNCTION()
	void Client_InitASC();
	
public:
	UFUNCTION(BlueprintPure)
	float GetCrosshairSpreadDegrees() const;

	UFUNCTION(BlueprintPure)
	bool ShouldShowCrosshairBars() const;

	UFUNCTION(BlueprintPure)
	bool ShouldShowCrosshairCenter() const;
	
	UFUNCTION(BlueprintCallable)
	void AnimNotify_ReloadMagOut();

	UFUNCTION(BlueprintCallable)
	void AnimNotify_ReloadMagIn();
	
	UFUNCTION(BlueprintCallable)
	void AnimNotify_ReloadMagGrab();

public:
	ECharacterGait GetCharacterGait() const { return CharacterGait; }
	ECharacterStance GetCharacterStance() const { return CharacterStance; }
	float GetControllerRotator_Yaw() const { return ControllerRotator_Yaw; }
	float GetControllerRotator_Pitch() const { return ControllerRotator_Pitch; }
	bool GetIsReloading() const { return bIsReloading; }
	USkeletalMeshComponent* GetHeldWeaponComp() const;
	bool GetAttachToHandWhenNotifyFires() const { return bAttachToHandWhenNotifyFires; }
	bool IsHoldingFireArm() const;
	EWeaponFireMode GetCurrentFireModeEnum() const;
	ECharacterHeldSlot GetCharacterHeldSlot() const { return CharacterHeldSlot; }
	bool GetIsTogglingFireMode() const { return bIsTogglingFireMode; }
	bool GetIsSwitchingWeapon() const { return bIsSwitchingWeapon; }
	int32 GetCurrentWeaponSlotIndex() const;
	float GetCurrentLeanDirection() const { return CurrentLeanDirection; }
	void BeginClimbState();
	void EndClimbState();
	void HandleHealthZero();
	ECharacterLifeState GetLifeState() const { return LifeState; }
	bool ShouldEnableUpperBodyAim() const;
	void SetLastKillerPS(APlayerState* InPS) { LastKillerPS = InPS; }
	APickupItem* GetPickupItemUnderCrosshair() const { return TracePickupItem(); }
	FString GetCurrentWeaponName() const;

public:
	UFUNCTION(BlueprintPure)
	bool ShouldEnableWeaponIK() const;

public:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlayImpactFX(FVector ImpactPoint, FVector ImpactNormal, UNiagaraSystem* ImpactFX);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlaySwitchWeaponMontage(UAnimMontage* MontageToPlay, float PlayRate);
	
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlayHitReaction(const FVector_NetQuantize& DamageSourceLocation);
	
	UFUNCTION(Server, Reliable)
	void Server_SetThrowMode(EThrowMode NewMode);

	UFUNCTION(Server, Reliable)
	void Server_ThrowGrenade(FVector_NetQuantizeNormal ThrowDirection, float RemainingFuse);

	UFUNCTION(Server, Reliable)
	void Server_PlayGrenadeMontage(UAnimMontage* MontageToPlay);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayGrenadeMontage(UAnimMontage* MontageToPlay);
	
	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayDownedMontage();
	
public:
	UFUNCTION(BlueprintCallable)
	void AnimNotify_AttachWeaponToHand();

	UFUNCTION(BlueprintCallable)
	void AnimNotify_AttachWeaponToBack();

protected:
	UFUNCTION()
	void OnRep_CharacterGait();

	UFUNCTION()
	void OnRep_CharacterStance();

	UFUNCTION()
	void OnInventoryChangedHandler();

	UFUNCTION()
	void OnWeaponAttachmentsChangedHandler();

	UFUNCTION()
	void OnRep_CharacterHeldSlot();
	
	UFUNCTION()
	void OnRep_ClimbWarpTarget();

	UFUNCTION()
	void OnReloadMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnSwitchFireModeMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnSwitchWeaponMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnSwitchWeaponMontageBlendOut(UAnimMontage* Montage, bool bInterrupted);
	
	UFUNCTION()
	void OnRep_IsClimbing();
	
	UFUNCTION()
	void OnRep_ThrowMode();
	
	UFUNCTION()
	void OnRep_LifeState();

protected:
	UFUNCTION(Server, Reliable)
	void Server_SetCharacterGait(ECharacterGait NewCharacterGait);

	UFUNCTION(Server, Reliable)
	void Server_SetCharacterStance(ECharacterStance NewCharacterStance);

	UFUNCTION(Server, Unreliable)
	void Server_SetControllerRotator(float NewYaw, float NewPitch);

	UFUNCTION(Server, Unreliable)
	void Server_SetActorYaw(float NewYaw);

	UFUNCTION(Server, Reliable)
	void Server_SetCharacterHeldSlot(ECharacterHeldSlot NewSlot);

	UFUNCTION(Server, Reliable)
	void Server_FinishReload();

	UFUNCTION(Server, Reliable)
	void Server_Fire(const FVector_NetQuantize& MuzzleLocation, const FVector_NetQuantize& AimPoint);

	UFUNCTION(Server, Reliable)
	void Server_StartReload(UAnimMontage* MontageToPlay);

	UFUNCTION(Server, Reliable)
	void Server_ToggleFireMode();

	UFUNCTION(Server, Unreliable)
	void Server_SetLeanDirection(float NewLeanDirection);

	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_FireEffect(const FVector_NetQuantize& MuzzleLocation);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlayReloadMontage(UAnimMontage* MontageToPlay);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlaySwitchFireModeMontage(UAnimMontage* MontageToPlay);

	UFUNCTION(Server, Reliable)
	void Server_PlaySwitchWeaponMontage(UAnimMontage* MontageToPlay, float PlayRate);
	
	UFUNCTION(Client, Reliable)
	void Client_FireRejected();

protected:
	void OnCrouch(const FInputActionValue& Value);
	void OnJump(const FInputActionValue& Value);
	void OnLook(const FInputActionValue& Value);
	void OnMove(const FInputActionValue& Value);
	void OnSprint(const FInputActionInstance& Value);
	void OnSwitchHeld(const FInputActionValue& Value);
	void OnTogglePerspective(const FInputActionValue& Value);
	void OnToggleBackpack(const FInputActionValue& Value);
	void OnWalk(const FInputActionInstance& Value);
	void OnFire(const FInputActionInstance& Value);
	void OnAim(const FInputActionInstance& Value);
	void OnReload(const FInputActionValue& Value);
	void OnHolster(const FInputActionValue& Value);
	void OnToggleFireMode(const FInputActionValue& Value);
	void OnLean(const FInputActionInstance& Value);
	void OnPickup(const FInputActionValue& Value);

protected:
	void ApplyCharacterGait();
	void UpdateCharacterHeldSlotAnimLayer();
	void RefreshEquipmentVisuals();
	void RefreshWeaponVisuals();
	void RefreshAttachmentsOnly();
	void FireOneShot();
	void FireBurstShot();
	EWeaponFireMode GetCurrentFireMode(UBackpackItemInstance* WeaponItem, UBackpackItemFragment_Weapon* WeaponFrag) const;
	UAnimMontage* ResolveEquipMontage(ECharacterHeldSlot Slot) const;
	void ResetWeaponRuntimeState();
	void PlayPendingEquip();
	void BeginSwitchWeapon(ECharacterHeldSlot NewSlot);
	bool IsSlotOccupied(ECharacterHeldSlot Slot) const;
	UStaticMeshComponent* SpawnHandMagMesh(UStaticMesh* MagMesh);
	UStaticMesh* GetHeldMagazineMesh() const;
	int32 GetHeldCurrentAmmo() const;
	void ClearAttachmentsFromWeaponMesh(USkeletalMeshComponent* WeaponMesh);
	void ApplyCameraState();
	APickupItem* TracePickupItem() const;
	void ToggleThrowMode();
	void BeginCookGrenade();
	void ReleaseGrenade();
	UBackpackItemFragment_Throwable* GetThrowableFrag() const;
	void UpdateGrenadeTrajectory();
	void EnterDowned();
	void EnterDead();
	void BleedTick();
	bool HasLivingTeammate() const;
	void EnableRagdoll();
	FVector GetGrenadeStartLocation(const FVector& ThrowDir) const;
	void BroadcastKillFeed(EKillFeedType FeedType);

protected:
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

public:
	UPROPERTY(BlueprintAssignable)
	FOnWeaponSlotChanged OnWeaponSlotChanged;
	
public:
	UPROPERTY(ReplicatedUsing = OnRep_ClimbWarpTarget)
	FVector_NetQuantize ClimbWarpTarget = FVector::ZeroVector;
	
	UPROPERTY(ReplicatedUsing = OnRep_ClimbWarpTarget)
	FVector_NetQuantize ClimbTopTarget = FVector::ZeroVector;
	
	UPROPERTY(ReplicatedUsing = OnRep_IsClimbing)
	bool bIsClimbing = false;

private:
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Crouch;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Jump;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Look;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Move;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Sprint;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_SwitchHeld;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_TogglePerspective;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_ToggleBackpack;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Walk;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Fire;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Aim;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Reload;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Holster;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_ToggleFireMode;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Lean;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputAction> IA_Pickup;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UDataTable> DT_CharacterGaitSettings;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UDataTable> DT_TPPCameraSettings;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_Unarmed;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_Throwable;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_Rifle;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_Pistol;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_Melee;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_ThrowableOverhand;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_ThrowableUnderhand;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UAnimInstance> CharacterAnimLayerInstance_Downed;

	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UBaseCommonActivatableWidget> BackpackWidgetClass;

	UPROPERTY(EditDefaultsOnly)
	FName Primary1Socket_Character;

	UPROPERTY(EditDefaultsOnly)
	FName Primary2Socket_Character;

	UPROPERTY(EditDefaultsOnly)
	float CameraInterpSpeed = 10.f;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<USoundAttenuation> GunFireAttenuation;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> EquipPrimary1Montage;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> EquipPrimary2Montage;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> EquipSecondaryMontage;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> EquipMeleeMontage;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> EquipThrowableMontage;

	UPROPERTY(EditDefaultsOnly)
	float LeanOffsetDistance = 50.f;

	UPROPERTY(EditDefaultsOnly)
	float LeanInterpSpeed = 10.f;
	
	UPROPERTY(EditDefaultsOnly)
	float ADSCameraInterpSpeed = 20.f;
	
	UPROPERTY(EditDefaultsOnly)
	FName AimCameraSocketName = TEXT("ScopeCamera_Socket");
	
	UPROPERTY(EditDefaultsOnly)
	float PickupTraceDistance = 500.f;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> HitReactMontage_Front;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> HitReactMontage_Back;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> HitReactMontage_Left;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> HitReactMontage_Right;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> DownedMontage;

	UPROPERTY(EditDefaultsOnly)
	float HitReactionCooldown = 0.4f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UCameraShakeBase> HitCameraShakeClass;
	
	UPROPERTY(EditDefaultsOnly)
	float DownedHealthPool = 150.f;
	
	UPROPERTY(EditDefaultsOnly)
	float BleedDamagePerSecond = 5.f;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> DeathMontage;

private:
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UCameraComponent> FirstPersonCamera;

	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UCameraComponent> ThirdPersonCamera;

	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<USpringArmComponent> ThirdPersonSpringArm;

	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<USkeletalMeshComponent> PersonHead;

	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<USphereComponent> Sphere;
	
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UMotionWarpingComponent> MotionWarpingComp;

	UPROPERTY()
	TObjectPtr<UCharacterAnimInstance> CharacterAnimInstance;

private:
	UPROPERTY(ReplicatedUsing = OnRep_CharacterGait)
	ECharacterGait CharacterGait = ECharacterGait::Jog;

	UPROPERTY(ReplicatedUsing = OnRep_CharacterStance)
	ECharacterStance CharacterStance = ECharacterStance::Stand;

	UPROPERTY(ReplicatedUsing = OnRep_CharacterHeldSlot)
	ECharacterHeldSlot CharacterHeldSlot = ECharacterHeldSlot::Unarmed;
	
	UPROPERTY(ReplicatedUsing = OnRep_ThrowMode)
	EThrowMode ThrowMode = EThrowMode::Overhand;
	
	UPROPERTY(ReplicatedUsing = OnRep_LifeState)
	ECharacterLifeState LifeState = ECharacterLifeState::Alive;

	UPROPERTY(Replicated)
	float ControllerRotator_Yaw;

	UPROPERTY(Replicated)
	float ControllerRotator_Pitch;

	UPROPERTY(Replicated)
	float CurrentLeanDirection = 0.f;
	
	UPROPERTY(EditDefaultsOnly)
	float CrouchCamInterpSpeed = 8.f; 

private:
	UPROPERTY()
	TMap<EEquipmentSlot, TObjectPtr<USkeletalMeshComponent>> EquippedMeshComponents;

	UPROPERTY()
	TArray<TObjectPtr<USkeletalMeshComponent>> WeaponMeshComponents;

	UPROPERTY()
	TObjectPtr<UBackpackItemInstance> CurrentHeldWeaponInstance;

	UPROPERTY()
	TObjectPtr<UAnimMontage> CurrentSwitchWeaponMontage;

	UPROPERTY()
	TObjectPtr<USkeletalMeshComponent> InterpWeaponMesh;
	
	UPROPERTY()
	TObjectPtr<UStaticMeshComponent> HandMagMeshComp;
	
	UPROPERTY()
	TObjectPtr<APlayerState> LastKillerPS;

private:
	float LastSentControllerYaw;
	float LastSentControllerPitch;
	float TargetArmLength;
	float LastFireTime = -100.f;
	float LastEmptySoundTime = 0.f;
	bool bIsReloading;
	FVector TargetSocketOffset;
	ECharacterHeldSlot LastHeldSlot = ECharacterHeldSlot::Unarmed;
	FTimerHandle FireTimerHandle;
	int32 BurstShotsRemaining = 0;
	float CurrentRecoilSpread = 0.f;
	float LastFireTimeForSpread = -100.f;
	bool bIsAiming = false;
	bool bIsTogglingFireMode = false;
	FTimerHandle FireModeLockTimerHandle;
	int32 ConsecutiveShots = 0;
	float TargetRecoilPitch = 0.f;
	float TargetRecoilYaw = 0.f;
	float LastFireTimeForRecoil = -100.f;
	bool bWantsToSprint = false;
	bool bIsSwitchingWeapon = false;
	bool PendingHeldSlotProcessing = false;
	ECharacterHeldSlot PendingTargetSlot = ECharacterHeldSlot::Unarmed;
	FTimerHandle WeaponSwitchSafetyTimerHandle;
	bool bIsInterpolatingWeapon = false;
	FVector InterpStartLoc;
	FRotator InterpStartRot;
	FName InterpTargetSocket;
	float InterpAlpha;
	bool bAttachToHandWhenNotifyFires = true;
	float CurrentLeanOffset = 0.f;
	bool bIsHoldingFire = false;
	FTimerHandle AttachmentRefreshTimer;
	bool bReloadMagOut = false;
	int32 ReloadingMagSlotIndex = -1;
	bool bIsADS = false;
	bool bIsSoftAiming = false;
	bool bPreADSFirstPerson = false;
	FTimerHandle AimHoldTimer;
	float TargetFOV = 90.f;
	float FOVInterpSpeed = 12.f;
	FVector DefaultFPPCameraRelativeLoc = FVector::ZeroVector;
	float AccumulatedRecoilPitch = 0.f;
	float AccumulatedRecoilYaw = 0.f;
	float CachedRecoilRecoveryRatio = 0.6f;
	float LastHitReactionTime = -100.f;
	bool bIsCookingGrenade = false;
	FTimerHandle BleedTimerHandle;
	FTimerHandle RagdollTimerHandle;
	float BoomZCompensation = 0.f;
	float BaseBoomZ = 0.f;
	float GrenadeCookStartTime = 0.f;
	float SmoothGrenadeStartZ = 0.f;
};