// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h"

#include "PUBGGameplayTag.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/ProgressBar.h"
#include "Components/TextBlock.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "Object/BackpackItemFragment_Weight.h"
#include "Object/BackpackItemInstance.h"

void UActivatableWidget_WeaponTooltip::SetupTooltip(UBackpackItemInstance* ItemInstance)
{
	if (!ItemInstance || !ItemInstance->Definition) return;
	bool bIsWeapon = (ItemInstance->Definition->ItemType == EItemType::Weapon);
	if (Border_Weapon) Border_Weapon->SetVisibility(bIsWeapon ? ESlateVisibility::Visible : ESlateVisibility::Collapsed);
	if (Border_Item)   Border_Item->SetVisibility(bIsWeapon ? ESlateVisibility::Collapsed : ESlateVisibility::Visible);

	if (bIsWeapon)
	{
		UBackpackItemFragment_Weapon* WeaponData = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemInstance->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
		if (!WeaponData) return;
		
		if (TextBlock_WeaponName) TextBlock_WeaponName->SetText(ItemInstance->Definition->ItemName);
		
		if (TextBlock_WeaponSlot) 
		{
			FText WeaponTypeText;
			switch (WeaponData->WeaponType)
			{
			case EWeaponType::Rifle:         WeaponTypeText = FText::FromString(TEXT("突击步枪")); break;
			case EWeaponType::MarksmanRifle: WeaponTypeText = FText::FromString(TEXT("射手步枪")); break;
			case EWeaponType::Sniper:        WeaponTypeText = FText::FromString(TEXT("狙击枪")); break;
			case EWeaponType::Smg:           WeaponTypeText = FText::FromString(TEXT("冲锋枪")); break;
			case EWeaponType::Shotgun:       WeaponTypeText = FText::FromString(TEXT("霰弹枪")); break;
			case EWeaponType::Pistol:        WeaponTypeText = FText::FromString(TEXT("手枪")); break;
			default:                         WeaponTypeText = FText::FromString(TEXT("主武器")); break;
			}
			TextBlock_WeaponSlot->SetText(WeaponTypeText);
		}
		
		if (TextBlock_WeaponBulletName) 
		{
			FText AmmoTypeText;
			switch (WeaponData->WeaponAmmoType)
			{
			case EAmmoType::Ammo_556: AmmoTypeText = FText::FromString(TEXT("5.56毫米")); break;
			case EAmmoType::Ammo_762: AmmoTypeText = FText::FromString(TEXT("7.62毫米")); break;
			case EAmmoType::Ammo_5mm: AmmoTypeText = FText::FromString(TEXT("5毫米")); break;
			case EAmmoType::Ammo_9mm: AmmoTypeText = FText::FromString(TEXT("9毫米")); break;
			case EAmmoType::Ammo_12G: AmmoTypeText = FText::FromString(TEXT("12号口径")); break;
			default:                  AmmoTypeText = FText::FromString(TEXT("未知子弹")); break;
			}
			TextBlock_WeaponBulletName->SetText(AmmoTypeText);
		}
		
		if (TextBlock_WeaponClipMaxNumber)
		{
			float MagSize = ItemInstance->GetItemAttribute(PUBGGameplayTag::PUBG_BackpackItemInstance_MagazineSize);
			if (MagSize <= 0.f) MagSize = WeaponData->MagazineSize;
			TextBlock_WeaponClipMaxNumber->SetText(FText::AsNumber(FMath::RoundToInt(MagSize)));
		}
		
		if (TextBlock_WeaponInfo) TextBlock_WeaponInfo->SetText(ItemInstance->Definition->ItemDescription);
		if (Image_WeaponPicture && ItemInstance->Definition->Icon) Image_WeaponPicture->SetBrushFromTexture(ItemInstance->Definition->Icon);
		if (ProgressBar_75)
		{
			float PowerPercent = (WeaponData->BaseDamage >= 100.f) ? 1.f : (WeaponData->BaseDamage / 100.f);
			ProgressBar_75->SetPercent(FMath::Clamp(PowerPercent, 0.f, 1.f));
		}
		if (ProgressBar) ProgressBar->SetPercent(0.f);
		if (ProgressBar_1) ProgressBar_1->SetPercent(0.f);
		if (ProgressBar_2) ProgressBar_2->SetPercent(0.f);
	}
	else
	{
		if (TextBlock_ItemName) TextBlock_ItemName->SetText(ItemInstance->Definition->ItemName);
		
		if (TextBlock_ItemType) 
		{
			FText ItemTypeText;
			switch (ItemInstance->Definition->ItemType)
			{
			case EItemType::None:        ItemTypeText = FText::FromString(TEXT("无")); break;
			case EItemType::MeleeWeapon: ItemTypeText = FText::FromString(TEXT("近战武器")); break;
			case EItemType::Ammo:        ItemTypeText = FText::FromString(TEXT("弹药")); break;
			case EItemType::Healing:     ItemTypeText = FText::FromString(TEXT("治疗品")); break; 
			case EItemType::Energy:      ItemTypeText = FText::FromString(TEXT("能量饮料")); break;
			case EItemType::Attachment:  ItemTypeText = FText::FromString(TEXT("枪械配件")); break; 
			case EItemType::Equipment:   ItemTypeText = FText::FromString(TEXT("装备")); break;
			case EItemType::Throwable:   ItemTypeText = FText::FromString(TEXT("投掷物")); break;
			default:                     ItemTypeText = FText::FromString(TEXT("其他物品")); break;
			}
			TextBlock_ItemType->SetText(ItemTypeText);
		}
		
		if (Image_ItemPicture && ItemInstance->Definition->Icon) Image_ItemPicture->SetBrushFromTexture(ItemInstance->Definition->Icon);
		
		if (TextBlock_Weight)
		{
			UBackpackItemFragment_Weight* WeightData = Cast<UBackpackItemFragment_Weight>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemInstance->Definition->GetClass(), UBackpackItemFragment_Weight::StaticClass()));
			
			if (WeightData)
			{
				float DisplayWeight = WeightData->Weight; 
				
				FText WeightText = FText::Format(FText::FromString(TEXT("{0} 容量")), FText::AsNumber(DisplayWeight));
				TextBlock_Weight->SetText(WeightText);
				TextBlock_Weight->SetVisibility(ESlateVisibility::Visible);
			}
			else
			{
				TextBlock_Weight->SetVisibility(ESlateVisibility::Collapsed);
			}
		}
		
		if (TextBlock_ItemInfo) TextBlock_ItemInfo->SetText(ItemInstance->Definition->ItemDescription);
	}
}
