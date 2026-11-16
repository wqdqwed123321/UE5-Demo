// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "PUBGType.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

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

public:
	UFUNCTION()
	void Server_InitASC();

	UFUNCTION()
	void Client_InitASC();

	UFUNCTION(BlueprintPure)
	float GetCrosshairSpreadDegrees() const;

	UFUNCTION(BlueprintPure)
	bool ShouldShowCrosshairBars() const;

	UFUNCTION(BlueprintPure)
	bool ShouldShowCrosshairCenter() const;

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

public:
	UFUNCTION(BlueprintPure)
	bool ShouldEnableWeaponIK() const;

public:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_PlayImpactFX(FVector ImpactPoint, FVector ImpactNormal, UNiagaraSystem* ImpactFX);

	UFUNCTION(NetMulticast, Reliable)
	void Multicast_PlaySwitchWeaponMontage(UAnimMontage* MontageToPlay, float PlayRate);

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
	void OnReloadMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnSwitchFireModeMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnSwitchWeaponMontageEnded(UAnimMontage* Montage, bool bInterrupted);

	UFUNCTION()
	void OnSwitchWeaponMontageBlendOut(UAnimMontage* Montage, bool bInterrupted);

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
	void OnAim(const FInputActionValue& Value);
	void OnReload(const FInputActionValue& Value);
	void OnHolster(const FInputActionValue& Value);
	void OnToggleFireMode(const FInputActionValue& Value);
	void OnLean(const FInputActionInstance& Value);

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

protected:
	UFUNCTION()
	void OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION()
	void OnSphereEndOverlap(UPrimitiveComponent* OverlappedComp, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnWeaponSlotChanged OnWeaponSlotChanged;

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

	UPROPERTY()
	TObjectPtr<UCharacterAnimInstance> CharacterAnimInstance;

private:
	UPROPERTY(ReplicatedUsing = OnRep_CharacterGait)
	ECharacterGait CharacterGait = ECharacterGait::Jog;

	UPROPERTY(ReplicatedUsing = OnRep_CharacterStance)
	ECharacterStance CharacterStance = ECharacterStance::Stand;

	UPROPERTY(ReplicatedUsing = OnRep_CharacterHeldSlot)
	ECharacterHeldSlot CharacterHeldSlot = ECharacterHeldSlot::Unarmed;

	UPROPERTY(Replicated)
	float ControllerRotator_Yaw;

	UPROPERTY(Replicated)
	float ControllerRotator_Pitch;
	
	UPROPERTY(Replicated) 
	float CurrentLeanDirection = 0.f;

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
};