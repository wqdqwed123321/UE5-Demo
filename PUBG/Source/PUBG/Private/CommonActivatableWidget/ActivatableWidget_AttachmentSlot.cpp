// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h"

#include "Actor/PickupItem.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Image.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"
#include "UserWidget/UserWidget_DragVisual.h"

void UActivatableWidget_AttachmentSlot::SetOwningWeapon(UBackpackItemInstance* InWeapon)
{
	CachedWeapon = InWeapon;
	
	if (!CachedWeapon)
	{
		SetupAttachmentSlot(nullptr);
		RetryCount = 0;
		return;
	}

	UBackpackItemInstance* FoundItem = nullptr;
	
	for (int32 i = 0; i < CachedWeapon->ItemAttachments.Num(); ++i)
	{
		if (CachedWeapon->ItemAttachments[i].Slot == AttachmentSlot)
		{
			FoundItem = CachedWeapon->ItemAttachments[i].ItemInstance;
			break;
		}
	}

	if (!FoundItem && CachedWeapon->ItemAttachments.Num() > 0)
	{
		if (RetryCount < 30)
		{
			RetryCount++;
			if (UWorld* World = GetWorld())
			{
				World->GetTimerManager().SetTimerForNextTick([this]()
				{
					if (IsValid(this) && CachedWeapon)
					{
						SetOwningWeapon(CachedWeapon);
					}
				});
			}
		}
		else
		{
			RetryCount = 0;
		}
	}
	else
	{
		RetryCount = 0;
	}
	
	SetupAttachmentSlot(FoundItem);
}

void UActivatableWidget_AttachmentSlot::SetupAttachmentSlot(UBackpackItemInstance* AttachmentItem)
{
	if (!Image_PartPicture) return;
	
	if (AttachmentItem && AttachmentItem->Definition && AttachmentItem->Definition->Icon)
	{
		Image_PartPicture->SetBrushFromTexture(AttachmentItem->Definition->Icon);
		Image_PartPicture->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
	}
	else
	{
		Image_PartPicture->SetBrushFromTexture(nullptr);
		Image_PartPicture->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 0.f)); 
	}
}

FReply UActivatableWidget_AttachmentSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return FReply::Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
	}
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UActivatableWidget_AttachmentSlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if (!CachedWeapon) return;

	UBackpackItemInstance* Item = CachedWeapon->GetItemAttachment(AttachmentSlot);
	if (!Item) return;

	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(UWidgetBlueprintLibrary::CreateDragDropOperation(UBackpackDragDropOperation::StaticClass()));
	if (DragOp)
	{
		DragOp->Payload = Item;
		DragOp->DragSource = EBackpackDragSource::Equipment;
		DragOp->SourceEquipmentSlot = EEquipmentSlot::None;
		DragOp->SourceWeapon = CachedWeapon; 
		DragOp->SourceAttachmentSlot = AttachmentSlot; 
		
		if (DragVisualClass)
		{
			UUserWidget_DragVisual* DragWidget = CreateWidget<UUserWidget_DragVisual>(GetOwningPlayer(), DragVisualClass);
			if (DragWidget)
			{
				DragWidget->SetupEquipmentSlot(Item);
				DragOp->DefaultDragVisual = DragWidget;
				DragOp->Pivot = EDragPivot::CenterCenter;
			}
		}
		OutOperation = DragOp;
	}
}

bool UActivatableWidget_AttachmentSlot::NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !DragOp->Payload || !CachedWeapon) return false;

	if (DragOp->DragSource == EBackpackDragSource::Backpack)
	{
		UBackpackItemInstance* BagItem = Cast<UBackpackItemInstance>(DragOp->Payload);
		if (BagItem && BagItem->Definition && BagItem->Definition->ItemType == EItemType::Attachment) return true;
	}
	else if (DragOp->DragSource == EBackpackDragSource::Ground)
	{
		APickupItem* GroundItem = Cast<APickupItem>(DragOp->Payload);
		if (GroundItem && GroundItem->ItemDefinition)
		{
			UBackpackItemDefinition* Def = GroundItem->ItemDefinition.GetDefaultObject();
			if (Def && Def->ItemType == EItemType::Attachment) return true;
		}
	}
	return false;
}

bool UActivatableWidget_AttachmentSlot::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !CachedWeapon) return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	UBackpackManagerComponent* Comp = nullptr;
	if (APlayerController* PC = GetOwningPlayer())
	{
		if (AGlobalPlayerState* PS = PC->GetPlayerState<AGlobalPlayerState>())
		{
			Comp = PS->FindComponentByClass<UBackpackManagerComponent>();
		}
	}
	if (!Comp) return false;

	if (DragOp->DragSource == EBackpackDragSource::Backpack)
	{
		UBackpackItemInstance* BagItem = Cast<UBackpackItemInstance>(DragOp->Payload);
		if (BagItem)
		{
			Comp->Server_EquipAttachmentToWeapon(BagItem, CachedWeapon, AttachmentSlot);
			return true;
		}
	}
	else if (DragOp->DragSource == EBackpackDragSource::Ground)
	{
		APickupItem* GroundItem = Cast<APickupItem>(DragOp->Payload);
		if (GroundItem)
		{
			Comp->Server_EquipGroundAttachmentToWeapon(GroundItem, CachedWeapon, AttachmentSlot);
			return true;
		}
	}

	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}