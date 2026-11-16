// Fill out your copyright notice in the Description page of Project Settings.

#include "CommonActivatableWidget/ActivatableWidget_PlayerState.h"

#include "PUBGGameplayTag.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "Character/PlayerCharacter.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "Components/ProgressBar.h"
#include "GameFramework/PlayerState.h"
#include "PlayerController/GlobalPlayerController.h"
#include "AbilitySystemInterface.h"
#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"
#include "AttributeSet/CharacterAttributeSet.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Ammo.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "Object/BackpackItemInstance.h"
#include "Object/BackpackItemFragment_WhiteIcon.h"

TOptional<FUIInputConfig> UActivatableWidget_PlayerState::GetDesiredInputConfig() const
{
	return FUIInputConfig(ECommonInputMode::Game, EMouseCaptureMode::CapturePermanently, true);
}

void UActivatableWidget_PlayerState::NativeOnActivated()
{
	Super::NativeOnActivated();

	if (SizeBox_GunInfo) SizeBox_GunInfo->SetVisibility(ESlateVisibility::Hidden);
	
	InitUIWithBackpack();
	InitUIWithASC();

	if (APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn()))
	{
		PC->OnWeaponSlotChanged.RemoveDynamic(this, &UActivatableWidget_PlayerState::OnInventoryChanged);
		PC->OnWeaponSlotChanged.AddDynamic(this, &UActivatableWidget_PlayerState::OnInventoryChanged);
	}
}

void UActivatableWidget_PlayerState::NativeOnDeactivated()
{
	if (APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn()))
	{
		PC->OnWeaponSlotChanged.RemoveDynamic(this, &UActivatableWidget_PlayerState::OnInventoryChanged);
	}

	if (CachedBackpackComp)
	{
		CachedBackpackComp->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_PlayerState::OnInventoryChanged);
	}

	if (UCharacterAbilitySystemComponent* ASC = CachedASC.Get())
	{
		ASC->GetGameplayAttributeValueChangeDelegate(UCharacterAttributeSet::GetHealthAttribute()).Remove(HealthChangedHandle);

		ASC->OnHealStartedDelegate.RemoveDynamic(this, &UActivatableWidget_PlayerState::HandleHealStarted);
		ASC->OnHealCompletedDelegate.RemoveDynamic(this, &UActivatableWidget_PlayerState::HandleHealCompleted);
		ASC->OnHealCancelledDelegate.RemoveDynamic(this, &UActivatableWidget_PlayerState::HandleHealCancelled);
	}

	Super::NativeOnDeactivated();
}

void UActivatableWidget_PlayerState::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
	if (bDamageDelaying)
	{
		if (DamageDelayTimer > 0.f)
		{
			DamageDelayTimer -= InDeltaTime;
		}
		else
		{
			DamageDelayPercent = FMath::FInterpTo(DamageDelayPercent, DamageDelayTargetPercent, InDeltaTime, DamageDelayInterpSpeed);
			UpdateDamageDelayBar();

			if (FMath::IsNearlyEqual(DamageDelayPercent, DamageDelayTargetPercent, 0.001f))
			{
				DamageDelayPercent = DamageDelayTargetPercent;
				UpdateDamageDelayBar();
				bDamageDelaying = false;
			}
		}
	}

	APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (!PC) return;

	if (bWasTogglingFireMode && !PC->GetIsTogglingFireMode())
	{
		RefreshFireModeUI();
	}
	bWasTogglingFireMode = PC->GetIsTogglingFireMode();
}

void UActivatableWidget_PlayerState::InitUIWithBackpack()
{
	APlayerState* PS = GetOwningPlayerState();
	if (!PS)
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UActivatableWidget_PlayerState::InitUIWithBackpack);
		return;
	}

	CachedBackpackComp = PS->FindComponentByClass<UBackpackManagerComponent>();
	if (!CachedBackpackComp)
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UActivatableWidget_PlayerState::InitUIWithBackpack);
		return;
	}

	CachedBackpackComp->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_PlayerState::OnInventoryChanged);
	CachedBackpackComp->OnInventoryChanged.AddDynamic(this, &UActivatableWidget_PlayerState::OnInventoryChanged);

	OnInventoryChanged();
}

void UActivatableWidget_PlayerState::RefreshWeaponSlotUI()
{
	APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	APlayerState* PS = GetOwningPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	
	if (!PC || !Comp) return;

	bool bHasGun = PC->IsHoldingFireArm();
	if (SizeBox_GunInfo)
	{
		SizeBox_GunInfo->SetVisibility(bHasGun ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Hidden);
	}

	ECharacterHeldSlot CurrentSlot = PC->GetCharacterHeldSlot();
	
	UBackpackItemInstance* Primary1Item = Comp->GetWeaponSlotItem(0);
	UBackpackItemInstance* Primary2Item = Comp->GetWeaponSlotItem(1);
	UBackpackItemInstance* PistolItem   = Comp->GetWeaponSlotItem(2);
	UBackpackItemInstance* MeleeItem    = Comp->GetWeaponSlotItem(3);
	UBackpackItemInstance* ThrowItem    = Comp->GetWeaponSlotItem(4);
	
	if (SizeBox_Primary)   SizeBox_Primary->SetVisibility(Primary1Item ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	if (SizeBox_Secondary) SizeBox_Secondary->SetVisibility(Primary2Item ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	if (SizeBox_Pistol)    SizeBox_Pistol->SetVisibility(PistolItem ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	if (SizeBox_Melee)     SizeBox_Melee->SetVisibility(MeleeItem ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	if (SizeBox_Throw)     SizeBox_Throw->SetVisibility(ThrowItem ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	
	UpdateWeaponSlotUI(Image_Primary1, ECharacterHeldSlot::Primary1, CurrentSlot, Primary1Item);
	UpdateWeaponSlotUI(Image_Primary2, ECharacterHeldSlot::Primary2, CurrentSlot, Primary2Item);
	UpdateWeaponSlotUI(Image_Pistol,   ECharacterHeldSlot::Secondary, CurrentSlot, PistolItem);
	UpdateWeaponSlotUI(Image_Melee,    ECharacterHeldSlot::Melee,     CurrentSlot, MeleeItem);
	UpdateWeaponSlotUI(Image_Throw,    ECharacterHeldSlot::Throwable, CurrentSlot, ThrowItem);
}

void UActivatableWidget_PlayerState::UpdateWeaponSlotUI(UImage* TargetImage, ECharacterHeldSlot SlotEnum, ECharacterHeldSlot CurrentHeldSlot, UBackpackItemInstance* Item)
{
	if (!TargetImage) return;
	
	if (!Item || !Item->Definition)
	{
		TargetImage->SetVisibility(ESlateVisibility::Collapsed);
		return;
	}
	
	TargetImage->SetVisibility(ESlateVisibility::HitTestInvisible);
	TargetImage->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 0.6f));
	
	UBackpackItemFragment_WhiteIcon* IconFrag = Cast<UBackpackItemFragment_WhiteIcon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_WhiteIcon::StaticClass()));
	
	if (IconFrag && IconFrag->Icon)
	{
		TargetImage->SetBrushFromTexture(IconFrag->Icon);
	}

	if (SlotEnum == CurrentHeldSlot)
	{
		TargetImage->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
	}
}

void UActivatableWidget_PlayerState::RefreshFireModeUI()
{
	APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (!PC) return;

	bool bHasGun = PC->IsHoldingFireArm();
	if (!bHasGun || !Image_FireMode) return;

	EWeaponFireMode CurrentMode = PC->GetCurrentFireModeEnum();
	switch (CurrentMode)
	{
	case EWeaponFireMode::SemiAuto:
		if (Icon_SemiAuto) Image_FireMode->SetBrushFromTexture(Icon_SemiAuto);
		break;
	case EWeaponFireMode::FullAuto:
		if (Icon_FullAuto) Image_FireMode->SetBrushFromTexture(Icon_FullAuto);
		break;
	case EWeaponFireMode::Burst:
		if (Icon_Burst) Image_FireMode->SetBrushFromTexture(Icon_Burst);
		break;
	}
}

void UActivatableWidget_PlayerState::RefreshAmmoUI()
{
	if (!TextBlock_CurrentNumber || !TextBlock_BackNumber) return;

	APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	APlayerState* PS = GetOwningPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;

	if (!PC || !Comp) return;

	int32 SlotIndex = PC->GetCurrentWeaponSlotIndex();

	if (SlotIndex == -1)
	{
		TextBlock_CurrentNumber->SetText(FText::AsNumber(0));
		TextBlock_BackNumber->SetText(FText::AsNumber(0));
		return;
	}

	UBackpackItemInstance* WeaponItem = Comp->GetWeaponSlotItem(SlotIndex);
	if (!WeaponItem || !WeaponItem->Definition) return;

	int32 CurrentAmmo = 0;
	for (const FItemAttribute& Attr : WeaponItem->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
		{
			CurrentAmmo = FMath::RoundToInt(Attr.Value);
			break;
		}
	}

	UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(WeaponItem->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));

	int32 BackAmmo = 0;
	if (WeaponFrag)
	{
		for (UBackpackItemInstance* Item : Comp->GetBackpackItems())
		{
			if (!Item || !Item->Definition || Item->Definition->ItemType != EItemType::Ammo) continue;

			UBackpackItemFragment_Ammo* AmmoFrag = Cast<UBackpackItemFragment_Ammo>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Item->Definition->GetClass(), UBackpackItemFragment_Ammo::StaticClass()));

			if (AmmoFrag && AmmoFrag->AmmoType == WeaponFrag->WeaponAmmoType)
			{
				BackAmmo += Item->Quantity;
			}
		}
	}

	TextBlock_CurrentNumber->SetText(FText::AsNumber(CurrentAmmo));
	TextBlock_BackNumber->SetText(FText::AsNumber(BackAmmo));
}

void UActivatableWidget_PlayerState::RefreshEquipmentUI()
{
	APlayerState* PS = GetOwningPlayerState();
	UBackpackManagerComponent* Comp = PS ? PS->FindComponentByClass<UBackpackManagerComponent>() : nullptr;
	if (!Comp) return;
	
	UBackpackItemInstance* HelmetItem = Comp->GetEquipmentItem(EEquipmentSlot::Helmet);
	if (Image_Helmet)
	{
		UBackpackItemFragment_WhiteIcon* IconFrag = nullptr;
		if (HelmetItem && HelmetItem->Definition)
		{
			IconFrag = Cast<UBackpackItemFragment_WhiteIcon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(HelmetItem->Definition->GetClass(), UBackpackItemFragment_WhiteIcon::StaticClass()));
		}

		if (IconFrag && IconFrag->Icon) Image_Helmet->SetBrushFromTexture(IconFrag->Icon);
		else if (Default_Helmet)        Image_Helmet->SetBrushFromTexture(Default_Helmet);
	}
	
	UBackpackItemInstance* VestItem = Comp->GetEquipmentItem(EEquipmentSlot::Vest);
	if (Image_Armor)
	{
		UBackpackItemFragment_WhiteIcon* IconFrag = nullptr;
		if (VestItem && VestItem->Definition)
		{
			IconFrag = Cast<UBackpackItemFragment_WhiteIcon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(VestItem->Definition->GetClass(), UBackpackItemFragment_WhiteIcon::StaticClass()));
		}

		if (IconFrag && IconFrag->Icon) Image_Armor->SetBrushFromTexture(IconFrag->Icon);
		else if (Default_Armor)         Image_Armor->SetBrushFromTexture(Default_Armor);
	}
}

void UActivatableWidget_PlayerState::OnInventoryChanged()
{
	RefreshWeaponSlotUI();
	RefreshAmmoUI();
	RefreshEquipmentUI();

	APlayerCharacter* PC = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	if (PC)
	{
		if (!PC->GetIsTogglingFireMode())
		{
			RefreshFireModeUI();
		}
	}
	else
	{
		RefreshFireModeUI();
	}
}

UCharacterAbilitySystemComponent* UActivatableWidget_PlayerState::GetASC() const
{
	AGlobalPlayerController* PC = GetOwningPlayerController();
	if (!PC) return nullptr;

	if (APawn* Pawn = PC->GetPawn())
	{
		if (IAbilitySystemInterface* ASI = Cast<IAbilitySystemInterface>(Pawn))
		{
			return Cast<UCharacterAbilitySystemComponent>(ASI->GetAbilitySystemComponent());
		}
	}

	if (APlayerState* PS = PC->PlayerState)
	{
		if (IAbilitySystemInterface* ASI = Cast<IAbilitySystemInterface>(PS))
		{
			return Cast<UCharacterAbilitySystemComponent>(ASI->GetAbilitySystemComponent());
		}
	}

	return nullptr;
}

void UActivatableWidget_PlayerState::InitUIWithASC()
{
	UCharacterAbilitySystemComponent* BaseASC = GetASC();
	if (!BaseASC)
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UActivatableWidget_PlayerState::InitUIWithASC);
		return;
	}

	CachedASC = BaseASC;

	HealthChangedHandle = BaseASC->GetGameplayAttributeValueChangeDelegate(UCharacterAttributeSet::GetHealthAttribute()).AddUObject(this, &UActivatableWidget_PlayerState::OnHealthChanged);

	BaseASC->OnHealStartedDelegate.AddDynamic(this, &UActivatableWidget_PlayerState::HandleHealStarted);
	BaseASC->OnHealCompletedDelegate.AddDynamic(this, &UActivatableWidget_PlayerState::HandleHealCompleted);
	BaseASC->OnHealCancelledDelegate.AddDynamic(this, &UActivatableWidget_PlayerState::HandleHealCancelled);

	RefreshCurrentHealthBar();

	const UCharacterAttributeSet* CharacterAttributeSet = BaseASC->GetSet<UCharacterAttributeSet>();
	if (CharacterAttributeSet)
	{
		DamageDelayPercent = FMath::Clamp(CharacterAttributeSet->GetHealth() / CharacterAttributeSet->GetMaxHealth(), 0.f, 1.f);
		DamageDelayTargetPercent = DamageDelayPercent;
	}
	UpdateDamageDelayBar();

	SyncHealProgressBarToCurrentHealth();
	StopHealProgressBar();
}

void UActivatableWidget_PlayerState::OnHealthChanged(const FOnAttributeChangeData& Data)
{
	RefreshCurrentHealthBar();

	UCharacterAbilitySystemComponent* ASC = CachedASC.Get();
	if (!ASC) return;

	const UCharacterAttributeSet* CharacterAttributeSet = ASC->GetSet<UCharacterAttributeSet>();
	if (!CharacterAttributeSet) return;

	const float NewPercent = FMath::Clamp(CharacterAttributeSet->GetHealth() / CharacterAttributeSet->GetMaxHealth(), 0.f, 1.f);

	if (Data.NewValue < Data.OldValue)
	{
		DamageDelayTargetPercent = NewPercent;
		DamageDelayTimer = DamageDelayDuration;
		bDamageDelaying = true;

		if (DamageDelayPercent < NewPercent)
		{
			DamageDelayPercent = NewPercent;
			UpdateDamageDelayBar();
		}

		SyncHealProgressBarToCurrentHealth();
	}
	else if (Data.NewValue > Data.OldValue)
	{
		DamageDelayPercent = NewPercent;
		DamageDelayTargetPercent = NewPercent;
		bDamageDelaying = false;
		DamageDelayTimer = 0.f;
		UpdateDamageDelayBar();

		SyncHealProgressBarToCurrentHealth();
	}
}

void UActivatableWidget_PlayerState::RefreshCurrentHealthBar()
{
	if (!ProgressBar_HP) return;

	UCharacterAbilitySystemComponent* ASC = CachedASC.Get();
	if (!ASC) return;

	const UCharacterAttributeSet* CharacterAttributeSet = ASC->GetSet<UCharacterAttributeSet>();
	if (!CharacterAttributeSet) return;

	const float MaxHealth = CharacterAttributeSet->GetMaxHealth();
	const float CurrentHealth = CharacterAttributeSet->GetHealth();
	ProgressBar_HP->SetPercent(MaxHealth > 0.f ? FMath::Clamp(CurrentHealth / MaxHealth, 0.f, 1.f) : 0.f);
}

void UActivatableWidget_PlayerState::UpdateDamageDelayBar()
{
	if (ProgressBar_Damage)
	{
		ProgressBar_Damage->SetPercent(DamageDelayPercent);
	}
}

void UActivatableWidget_PlayerState::StopHealProgressBar()
{
	if (ProgressBar_Heal)
	{
		SyncHealProgressBarToCurrentHealth();
		ProgressBar_Heal->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void UActivatableWidget_PlayerState::SyncHealProgressBarToCurrentHealth()
{
	if (!ProgressBar_Heal) return;

	UCharacterAbilitySystemComponent* ASC = CachedASC.Get();
	if (!ASC) return;

	const UCharacterAttributeSet* CharacterAttributeSet = ASC->GetSet<UCharacterAttributeSet>();
	if (!CharacterAttributeSet || CharacterAttributeSet->GetMaxHealth() <= 0.f) return;

	const float CurrentHealth = CharacterAttributeSet->GetHealth();
	const float MaxHealth = CharacterAttributeSet->GetMaxHealth();
	ProgressBar_Heal->SetPercent(FMath::Clamp(CurrentHealth / MaxHealth, 0.f, 1.f));
}

void UActivatableWidget_PlayerState::HandleHealStarted(float TotalDuration, float HealAmount, float MaxHealthPercentage)
{
	if (!ProgressBar_Heal) return;

	UCharacterAbilitySystemComponent* ASC = CachedASC.Get();
	if (!ASC) return;

	const UCharacterAttributeSet* CharacterAttributeSet = ASC->GetSet<UCharacterAttributeSet>();
	if (!CharacterAttributeSet || CharacterAttributeSet->GetMaxHealth() <= 0.f) return;

	const float CurrentHealth = CharacterAttributeSet->GetHealth();
	const float MaxHealth = CharacterAttributeSet->GetMaxHealth();

	const float LimitHealth = MaxHealth * MaxHealthPercentage;
	const float PredictedHealth = FMath::Clamp(CurrentHealth + HealAmount, 0.f, LimitHealth);
	const float PredictedPercent = FMath::Clamp(PredictedHealth / MaxHealth, 0.f, 1.f);

	ProgressBar_Heal->SetPercent(PredictedPercent);
	ProgressBar_Heal->SetVisibility(ESlateVisibility::HitTestInvisible);
}

void UActivatableWidget_PlayerState::HandleHealCompleted()
{
	StopHealProgressBar();
}

void UActivatableWidget_PlayerState::HandleHealCancelled()
{
	StopHealProgressBar();
}