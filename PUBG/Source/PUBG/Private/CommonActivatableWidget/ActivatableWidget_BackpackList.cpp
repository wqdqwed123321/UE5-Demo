// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_BackpackList.h"

#include "Object/BackpackItemInstance.h"
#include "CommonListView.h"
#include "Actor/PickupItem.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "CommonUserWidget/CommonUserWidget_BackpackItem.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "PlayerState/GlobalPlayerState.h"

void UActivatableWidget_BackpackList::NativeDestruct()
{
	if (CachedManager)
	{
		CachedManager->OnEnterPickupRange.RemoveDynamic(this, &UActivatableWidget_BackpackList::OnPickupRangeChanged);
		CachedManager->OnLeavePickupRange.RemoveDynamic(this, &UActivatableWidget_BackpackList::OnPickupRangeChanged);
		CachedManager->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_BackpackList::OnInventoryChangedCallback);
		CachedManager = nullptr;
	}
	
	Super::NativeDestruct();
}

bool UActivatableWidget_BackpackList::NativeOnDragOver(const FGeometry& InGeometry,
	const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDragOver(InGeometry, InDragDropEvent, InOperation);
	
	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !DragOp->Payload) return false;
	
	if (BackpackListMode == EBackpackListMode::Nearby)
	{
		return DragOp->DragSource == EBackpackDragSource::Backpack || DragOp->DragSource == EBackpackDragSource::Equipment;
	}
	else if (BackpackListMode == EBackpackListMode::Inventory)
	{
		return DragOp->DragSource == EBackpackDragSource::Ground || DragOp->DragSource == EBackpackDragSource::Equipment;
	}

	return false;
}

bool UActivatableWidget_BackpackList::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent,
	UDragDropOperation* InOperation)
{
	bool bHandled = false;

	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (DragOp && CachedManager)
	{
		if (BackpackListMode == EBackpackListMode::Inventory && DragOp->DragSource == EBackpackDragSource::Ground)
		{
			APickupItem* GroundItem = Cast<APickupItem>(DragOp->Payload);
			if (GroundItem && IsValid(GroundItem))
			{
				CachedManager->Server_PickupItem(GroundItem);
				bHandled = true;
			}
		}

		else if (BackpackListMode == EBackpackListMode::Inventory && DragOp->DragSource == EBackpackDragSource::Equipment)
		{
			if (DragOp->SourceWeaponSlotIndex == 3 || DragOp->SourceWeaponSlotIndex == 4)
			{
				CachedManager->Server_UnequipWeaponSlotToBackpack(DragOp->SourceWeaponSlotIndex);
				bHandled = true;
			}
			else if (DragOp->SourceWeapon != nullptr)
			{
				CachedManager->Server_UnequipAttachmentToBackpack(DragOp->SourceWeapon, DragOp->SourceAttachmentSlot);
				bHandled = true;
			}
		}

		else if (BackpackListMode == EBackpackListMode::Nearby && DragOp->DragSource == EBackpackDragSource::Backpack)
		{
			UBackpackItemInstance* DroppedItem = Cast<UBackpackItemInstance>(DragOp->Payload);
			if (DroppedItem)
			{
				CachedManager->Server_DropItem(DroppedItem);
				bHandled = true;
			}
		}

		else if (BackpackListMode == EBackpackListMode::Nearby && DragOp->DragSource == EBackpackDragSource::Equipment)
		{
			if (DragOp->SourceWeaponSlotIndex != -1)
			{
				CachedManager->Server_DropWeaponSlot(DragOp->SourceWeaponSlotIndex);
				bHandled = true;
			}
			else if (DragOp->SourceEquipmentSlot != EEquipmentSlot::None)
			{
				CachedManager->Server_DropEquipmentSlot(DragOp->SourceEquipmentSlot);
				bHandled = true;
			}
			else if (DragOp->SourceWeapon != nullptr)
			{
				CachedManager->Server_DropAttachment(DragOp->SourceWeapon, DragOp->SourceAttachmentSlot);
				bHandled = true;
			}
		}
	}
	
	if (bHandled)
	{
		UWidgetBlueprintLibrary::SetFocusToGameViewport();
	}

	return bHandled;
}

void UActivatableWidget_BackpackList::SetupBackpackList(const TArray<UObject*>& Items)
{
	if (!CommonListView_InventoryItems) return;
	
	TArray<UObject*> CurrentItems = CommonListView_InventoryItems->GetListItems();
	
	bool bIsSameArray = (CurrentItems.Num() == Items.Num());
	if (bIsSameArray)
	{
		for (int32 i = 0; i < Items.Num(); ++i)
		{
			if (CurrentItems[i] != Items[i])
			{
				bIsSameArray = false;
				break;
			}
		}
	}
	
	if (bIsSameArray)
	{
		TArray<UUserWidget*> DisplayedWidgets = CommonListView_InventoryItems->GetDisplayedEntryWidgets();
		for (UUserWidget* Widget : DisplayedWidgets)
		{
			if (UCommonUserWidget_BackpackItem* ItemWidget = Cast<UCommonUserWidget_BackpackItem>(Widget))
			{
				ItemWidget->RefreshItemUI();
			}
		}
	}
	else
	{
		CommonListView_InventoryItems->SetListItems(Items);
	}
}

void UActivatableWidget_BackpackList::InitBackpackList()
{
	APlayerController* PC = GetOwningPlayer();
	if (!PC) return;

	AGlobalPlayerState* PS = PC->GetPlayerState<AGlobalPlayerState>();
	if (!PS) return;

	CachedManager = PS->FindComponentByClass<UBackpackManagerComponent>();
	if (CachedManager)
	{
		CachedManager->OnEnterPickupRange.AddDynamic(this, &UActivatableWidget_BackpackList::OnPickupRangeChanged);
		CachedManager->OnLeavePickupRange.AddDynamic(this, &UActivatableWidget_BackpackList::OnPickupRangeChanged);
		CachedManager->OnInventoryChanged.AddDynamic(this, &UActivatableWidget_BackpackList::OnInventoryChangedCallback);
		
		RefreshList();
	}
}

void UActivatableWidget_BackpackList::OnPickupRangeChanged(APickupItem* Item)
{
	RefreshList();
}

void UActivatableWidget_BackpackList::OnInventoryChangedCallback()
{
	if (GetWorld())
	{
		GetWorld()->GetTimerManager().SetTimerForNextTick(this, &UActivatableWidget_BackpackList::RefreshList);
	}
}

void UActivatableWidget_BackpackList::RefreshList()
{
	if (!CachedManager) return;

	TArray<UObject*> ListItems;

	switch (BackpackListMode)
	{
	case EBackpackListMode::Nearby:
		{
			TArray<APickupItem*> NearbyItems = CachedManager->GetNearbyPickupItems();
			for (APickupItem* Item : NearbyItems)
			{
				if (IsValid(Item)) ListItems.Add(Item);
			}
			break;
		}
	case EBackpackListMode::Inventory:
		{
			TArray<UBackpackItemInstance*> InventoryItems = CachedManager->GetBackpackItems();
			for (UBackpackItemInstance* Item : InventoryItems)
			{
				if (Item && Item->Definition) 
				{
					ListItems.Add(Item);
				}
			}
			break;
		}
	}
	
	SetupBackpackList(ListItems);
}