// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_EquipmentSlot.h"

#include "ActorComponent/BackpackManagerComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Image.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"
#include "UserWidget/UserWidget_DragVisual.h"

void UActivatableWidget_EquipmentSlot::NativeDestruct()
{
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_EquipmentSlot::OnInventoryChangedHandler);
		CachedComp = nullptr;
	}
	
	Super::NativeDestruct();
}

void UActivatableWidget_EquipmentSlot::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if (!CachedComp) return;

	UBackpackItemInstance* Item = CachedComp->GetEquipmentItem(EquipmentSlot);
	if (!Item) return;

	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(UWidgetBlueprintLibrary::CreateDragDropOperation(UBackpackDragDropOperation::StaticClass()));
	
	if (DragOp)
	{
		DragOp->Payload = Item;
		DragOp->DragSource = EBackpackDragSource::Equipment;
		DragOp->SourceEquipmentSlot = EquipmentSlot; 

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

FReply UActivatableWidget_EquipmentSlot::NativeOnMouseButtonDown(const FGeometry& InGeometry,
	const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return FReply::Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
	}

	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UActivatableWidget_EquipmentSlot::InitEquipmentSlot()
{
	CachedComp = GetBackpackComp();
	
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.AddDynamic(this, &UActivatableWidget_EquipmentSlot::OnInventoryChangedHandler);
	}
	OnInventoryChangedHandler();
}

void UActivatableWidget_EquipmentSlot::OnInventoryChangedHandler()
{
	if (CachedComp)
	{
		SetupEquipmentSlot(CachedComp->GetEquipmentItem(EquipmentSlot));
	}
}

UBackpackManagerComponent* UActivatableWidget_EquipmentSlot::GetBackpackComp() const
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

void UActivatableWidget_EquipmentSlot::SetupEquipmentSlot(UBackpackItemInstance* EquipmentItem)
{
	if (!Image_Picture) return;
	
	if (EquipmentItem && EquipmentItem->Definition && EquipmentItem->Definition->Icon)
	{
		Image_Picture->SetBrushFromTexture(EquipmentItem->Definition->Icon);
		Image_Picture->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
	}
	else
	{
		Image_Picture->SetBrushFromTexture(nullptr);
		Image_Picture->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 0.f)); 
	}
}