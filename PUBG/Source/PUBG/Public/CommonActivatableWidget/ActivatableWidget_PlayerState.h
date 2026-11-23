// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_PlayerState.generated.h"

class UBackpackManagerComponent;
class UBackpackItemInstance;
class UCharacterAbilitySystemComponent;
class UTextBlock;
class UImage;
class UProgressBar;
class USizeBox;
struct FOnAttributeChangeData;
enum class ECharacterHeldSlot : uint8;

UCLASS()
class PUBG_API UActivatableWidget_PlayerState : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()

public:
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;

protected:
	virtual void NativeOnActivated() override;
	virtual void NativeOnDeactivated() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
protected:
	void InitUIWithBackpack();
	void RefreshWeaponSlotUI();
	void RefreshFireModeUI();
	void RefreshAmmoUI();
	void RefreshEquipmentUI();
	void InitUIWithASC();
	void RefreshCurrentHealthBar();
	void UpdateDamageDelayBar();
	void StopHealProgressBar();
	void SyncHealProgressBarToCurrentHealth();
	UCharacterAbilitySystemComponent* GetASC() const;
	void UpdateWeaponSlotUI(UImage* TargetImage, ECharacterHeldSlot SlotEnum, ECharacterHeldSlot CurrentHeldSlot, UBackpackItemInstance* Item);

protected:
	UFUNCTION()
	void OnInventoryChanged();

	UFUNCTION()
	void HandleHealStarted(float TotalDuration, float HealAmount, float MaxHealthPercentage);

	UFUNCTION()
	void HandleHealCompleted();

	UFUNCTION()
	void HandleHealCancelled();
	
protected:
	void OnHealthChanged(const FOnAttributeChangeData& Data);
	void OnDownedHealthChanged(const FOnAttributeChangeData& Data);

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_CurrentNumber;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_BackNumber;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_FireMode;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Helmet;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Armor;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UProgressBar> ProgressBar_HP;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UProgressBar> ProgressBar_Damage;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UProgressBar> ProgressBar_Heal;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_GunInfo;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_FireMode;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Number;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Throw;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Melee;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Pistol;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Secondary;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Primary;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Energy;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Primary1;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Primary2;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Pistol;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Melee;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Throw;

private:
	UPROPERTY(EditAnywhere)
	TObjectPtr<UTexture2D> Icon_SemiAuto;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UTexture2D> Icon_FullAuto;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UTexture2D> Icon_Burst;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UTexture2D> Default_Helmet;

	UPROPERTY(EditAnywhere)
	TObjectPtr<UTexture2D> Default_Armor;
	
	UPROPERTY(EditDefaultsOnly)
	float DamageDelayDuration = 0.f;

	UPROPERTY(EditDefaultsOnly)
	float DamageDelayInterpSpeed = 8.f;

private:
	UPROPERTY()
	TObjectPtr<UBackpackManagerComponent> CachedBackpackComp;

	UPROPERTY()
	TObjectPtr<UCharacterAbilitySystemComponent> CachedASC;
	
private:
	FDelegateHandle HealthChangedHandle;
	float DamageDelayPercent = 1.f;
	float DamageDelayTargetPercent = 1.f;
	float DamageDelayTimer = 0.f;
	bool bDamageDelaying = false;
	bool bWasTogglingFireMode = false;
	FDelegateHandle DownedHealthChangedHandle;
	FDelegateHandle DownedMaxHealthChangedHandle;
};