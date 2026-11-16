// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_Equipment.h"

#include "Actor/PickupItem.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "CommonActivatableWidget/ActivatableWidget_CharacterEquipment.h"
#include "CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h"
#include "CommonActivatableWidget/ActivatableWidget_WeaponDetail.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Equipment.h"
#include "Object/BackpackItemFragment_Attachment.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"

void UActivatableWidget_Equipment::InitEquipment()
{
	if (WB_WeaponItem_Primary)    WB_WeaponItem_Primary->InitWeaponDetail();
	if (WB_WeaponItem_Secondary)  WB_WeaponItem_Secondary->InitWeaponDetail();
	if (WB_PistolItem)            WB_PistolItem->InitWeaponDetail();
	if (WB_SmallWeaponItem_Melee) WB_SmallWeaponItem_Melee->InitThrowableDetail();
	if (WB_SmallWeaponItem_Throw) WB_SmallWeaponItem_Throw->InitThrowableDetail();
	if (CharacterEquipmentPanel)  CharacterEquipmentPanel->InitEquipment();
}

bool UActivatableWidget_Equipment::NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDragOver(InGeometry, InDragDropEvent, InOperation);

	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !DragOp->Payload) return false;
	
	return DragOp->DragSource == EBackpackDragSource::Ground || DragOp->DragSource == EBackpackDragSource::Backpack;
}

bool UActivatableWidget_Equipment::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !DragOp->Payload) return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	UBackpackManagerComponent* Comp = GetBackpackComp();
	if (!Comp) return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
	
	UBackpackItemDefinition* ItemDef = nullptr;
	UBackpackItemInstance* BagItem = Cast<UBackpackItemInstance>(DragOp->Payload);
	APickupItem* GroundItem = Cast<APickupItem>(DragOp->Payload);
	
	if (BagItem) ItemDef = BagItem->Definition;
	else if (GroundItem && GroundItem->ItemDefinition) ItemDef = GroundItem->ItemDefinition.GetDefaultObject();

	if (ItemDef && ItemDef->ItemType == EItemType::Attachment)
	{
		UBackpackItemFragment_Attachment* AttachFrag = Cast<UBackpackItemFragment_Attachment>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Attachment::StaticClass()));
		if (AttachFrag)
		{
			for (int32 i = 0; i <= 2; ++i)
			{
				UBackpackItemInstance* Weapon = Comp->GetWeaponSlotItem(i);
				if (Weapon && Weapon->Definition)
				{
					UBackpackItemFragment_Weapon* WeaponFrag = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(Weapon->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
					
					if (WeaponFrag && WeaponFrag->SupportedAttachmentSlots.Contains(AttachFrag->TargetSlot))
					{
						if (BagItem) 
						{
							Comp->Server_EquipAttachmentToWeapon(BagItem, Weapon, AttachFrag->TargetSlot);
						}
						else if (GroundItem)
						{
							Comp->Server_EquipGroundAttachmentToWeapon(GroundItem, Weapon, AttachFrag->TargetSlot);
						}
						return true;
					}
				}
			}
		}
		return false;
	}
	
	if (DragOp->DragSource == EBackpackDragSource::Ground)
	{
		if (!GroundItem || !ItemDef) return false;

		switch (ItemDef->ItemType)
		{
		case EItemType::Weapon:
		{
			int32 TargetSlot = !Comp->GetWeaponSlotItem(0) ? 0 : !Comp->GetWeaponSlotItem(1) ? 1 : 0;
			Comp->Server_EquipGroundWeaponToSlot(GroundItem, TargetSlot);
			return true;
		}
		case EItemType::MeleeWeapon:
			Comp->Server_EquipGroundWeaponToSlot(GroundItem, 3);
			return true;
		case EItemType::Throwable:
			Comp->Server_EquipGroundWeaponToSlot(GroundItem, 4);
			return true;
		case EItemType::Equipment:
		{
			UBackpackItemFragment_Equipment* Frag = Cast<UBackpackItemFragment_Equipment>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemDef->GetClass(), UBackpackItemFragment_Equipment::StaticClass()));
			if (Frag)
			{
				Comp->Server_EquipGroundEquipmentToSlot(GroundItem, Frag->EquipSlotType);
				return true;
			}
			break;
		}
		default: break;
		}
	}

	if (DragOp->DragSource == EBackpackDragSource::Backpack)
	{
		if (BagItem && ItemDef)
		{
			if (ItemDef->ItemType == EItemType::MeleeWeapon)
			{
				Comp->Server_EquipBackpackItemToWeaponSlot(BagItem, 3);
				return true;
			}
			if (ItemDef->ItemType == EItemType::Throwable)
			{
				Comp->Server_EquipBackpackItemToWeaponSlot(BagItem, 4);
				return true;
			}
		}
	}

	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}

UBackpackManagerComponent* UActivatableWidget_Equipment::GetBackpackComp() const
{
	if (APlayerController* PC = GetOwningPlayer())
	{
		if (AGlobalPlayerState* PS = PC->GetPlayerState<AGlobalPlayerState>())
		{
			return PS->FindComponentByClass<UBackpackManagerComponent>();
		}
	}
	return nullptr;
}
