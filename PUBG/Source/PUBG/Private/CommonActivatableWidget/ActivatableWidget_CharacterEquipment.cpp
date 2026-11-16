// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h"

#include "ActorComponent/BackpackManagerComponent.h"
#include "CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h"
#include "Components/Border.h"
#include "Components/TextBlock.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"
#include "PUBGGameplayTag.h"

void UActivatableWidget_CharacterEquipment::InitEquipment()
{
	if (WB_BodyEquipmentItem_Helmet)  WB_BodyEquipmentItem_Helmet->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Back)    WB_BodyEquipmentItem_Back->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Armor)   WB_BodyEquipmentItem_Armor->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Head)    WB_BodyEquipmentItem_Head->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Glasses) WB_BodyEquipmentItem_Glasses->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Mask)    WB_BodyEquipmentItem_Mask->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Shirt)   WB_BodyEquipmentItem_Shirt->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Jacket)  WB_BodyEquipmentItem_Jacket->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Glove)   WB_BodyEquipmentItem_Glove->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Legs)    WB_BodyEquipmentItem_Legs->InitEquipmentSlot();
	if (WB_BodyEquipmentItem_Shoes)   WB_BodyEquipmentItem_Shoes->InitEquipmentSlot();

	if (APlayerController* PC = GetOwningPlayer())
	{
		if (AGlobalPlayerState* PS = PC->GetPlayerState<AGlobalPlayerState>())
		{
			CachedComp = PS->FindComponentByClass<UBackpackManagerComponent>();
			if (CachedComp)
			{
				CachedComp->OnInventoryChanged.AddDynamic(this, &UActivatableWidget_CharacterEquipment::OnInventoryChangedHandler);
			}
		}
	}

	UpdateShieldUI();
}

void UActivatableWidget_CharacterEquipment::NativeDestruct()
{
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_CharacterEquipment::OnInventoryChangedHandler);
		CachedComp = nullptr;
	}
	Super::NativeDestruct();
}

void UActivatableWidget_CharacterEquipment::OnInventoryChangedHandler()
{
	UpdateShieldUI();
}

void UActivatableWidget_CharacterEquipment::UpdateShieldUI()
{
	if (!CachedComp) return;

	UBackpackItemInstance* HelmetItem = CachedComp->GetEquipmentItem(EEquipmentSlot::Helmet);
	
	if (Border_HelmetShield)
	{
		Border_HelmetShield->SetVisibility(HelmetItem ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}
	
	if (TextBlock_HelmetShield)
	{
		if (HelmetItem)
		{
			float Durability = HelmetItem->GetItemAttribute(PUBGGameplayTag::PUBG_BackpackItemInstance_HelmetDurability);
			TextBlock_HelmetShield->SetText(FText::AsNumber(FMath::RoundToInt(Durability)));
		}
	}

	UBackpackItemInstance* ArmorItem = CachedComp->GetEquipmentItem(EEquipmentSlot::Vest);
	
	if (Border_ArmorShield)
	{
		Border_ArmorShield->SetVisibility(ArmorItem ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}
	
	if (TextBlock_ArmorShield)
	{
		if (ArmorItem)
		{
			float Durability = ArmorItem->GetItemAttribute(PUBGGameplayTag::PUBG_BackpackItemInstance_VestDurability);
			TextBlock_ArmorShield->SetText(FText::AsNumber(FMath::RoundToInt(Durability)));
		}
	}
}
