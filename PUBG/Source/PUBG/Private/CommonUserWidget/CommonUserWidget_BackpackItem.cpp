// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUserWidget/CommonUserWidget_BackpackItem.h"

#include "Actor/PickupItem.h"
#include "Components/Border.h"
#include "Components/HorizontalBox.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Stackable.h"
#include "Object/BackpackItemInstance.h"
#include "UserWidget/UserWidget_DragVisual.h"

void UCommonUserWidget_BackpackItem::RefreshItemUI()
{
	if (!CachedListItemObject) return;

	int32 CurrentQuantity = 0;
	UBackpackItemDefinition* CurrentDef = nullptr;
	
	if (UBackpackItemInstance* ItemInstance = Cast<UBackpackItemInstance>(CachedListItemObject))
	{
		CurrentQuantity = ItemInstance->Quantity;
		CurrentDef = ItemInstance->Definition;
	}
	else if (APickupItem* PickupActor = Cast<APickupItem>(CachedListItemObject))
	{
		if (IsValid(PickupActor))
		{
			CurrentQuantity = PickupActor->Quantity;
			CurrentDef = PickupActor->ItemDefinition ? PickupActor->ItemDefinition.GetDefaultObject() : nullptr;
		}
	}

	if (TextBlock_Number && CurrentDef)
	{
		TextBlock_Number->SetText(FText::AsNumber(CurrentQuantity));
		
		UBackpackItemFragment* StackFrag = UBackpackItemDefinition::FindBackpackItemFragmentByClass(CurrentDef->GetClass(), UBackpackItemFragment_Stackable::StaticClass());
		if (StackFrag != nullptr) 
		{
			TextBlock_Number->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		}
		else
		{
			TextBlock_Number->SetVisibility(ESlateVisibility::Collapsed);
		}
	}
}

void UCommonUserWidget_BackpackItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	IUserObjectListEntry::NativeOnListItemObjectSet(ListItemObject);
	
	CachedListItemObject = ListItemObject; 
	
	if (Image_Picture) Image_Picture->SetBrushFromTexture(nullptr);
	if (TextBlock_Name) TextBlock_Name->SetText(FText::GetEmpty());
	if (TextBlock_Number) TextBlock_Number->SetVisibility(ESlateVisibility::Collapsed);

	if (!ListItemObject) return;

	UTexture2D* FinalIcon = nullptr;
	UBackpackItemDefinition* FinalDef = nullptr;
	FText FinalName;
	bool bIsValidItem = false;

	if (UBackpackItemInstance* ItemInstance = Cast<UBackpackItemInstance>(ListItemObject))
	{
		if (ItemInstance->Definition)
		{
			FinalDef = ItemInstance->Definition;
			FinalIcon = FinalDef->Icon;
			FinalName = FinalDef->ItemName;
			bIsValidItem = true;
		}
	}
	else if (APickupItem* PickupActor = Cast<APickupItem>(ListItemObject))
	{
		if (IsValid(PickupActor) && PickupActor->ItemDefinition)
		{
			FinalDef = PickupActor->ItemDefinition.GetDefaultObject();
			if (FinalDef)
			{
				FinalIcon = FinalDef->Icon;
				FinalName = FinalDef->ItemName;
				bIsValidItem = true;
			}
		}
	}
	
	if (bIsValidItem)
	{
		if (Image_Picture && FinalIcon)
		{
			Image_Picture->SetBrushFromTexture(FinalIcon);
		}
		
		if (TextBlock_Name)
		{
			TextBlock_Name->SetText(FinalName);
		}
		
		RefreshItemUI();
	}
}

void UCommonUserWidget_BackpackItem::NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseEnter(InGeometry, InMouseEvent);
	
	if (HorizontalBox_Image)
	{
		HorizontalBox_Image->SetVisibility(ESlateVisibility::HitTestInvisible); 
	}

	if (Border_Item)
	{
		Border_Item->SetBrushColor(FLinearColor(0.33f, 0.33f, 0.33f, 1.f)); 
	}
}

void UCommonUserWidget_BackpackItem::NativeOnMouseLeave(const FPointerEvent& InMouseEvent)
{
	Super::NativeOnMouseLeave(InMouseEvent);
	
	if (HorizontalBox_Image)
	{
		HorizontalBox_Image->SetVisibility(ESlateVisibility::Collapsed); 
	}
	
	if (Border_Item)
	{
		Border_Item->SetBrushColor(FLinearColor(0.33f, 0.33f, 0.33f, 0.3f)); 
	}
}

void UCommonUserWidget_BackpackItem::NativeOnDragDetected(const FGeometry& InGeometry,
	const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);
	
	if (!CachedListItemObject) return;
	
	UBackpackDragDropOperation* DragOp = NewObject<UBackpackDragDropOperation>(this);
	DragOp->Payload = CachedListItemObject;
	
	UBackpackItemInstance* ItemInstanceForDrag = nullptr;

	if (APickupItem* PickupActor = Cast<APickupItem>(CachedListItemObject))
	{
		DragOp->DragSource = EBackpackDragSource::Ground;
		if (PickupActor->ItemDefinition)
		{
			ItemInstanceForDrag = NewObject<UBackpackItemInstance>(this);
			ItemInstanceForDrag->Definition = PickupActor->ItemDefinition.GetDefaultObject();
		}
	}
	else if (UBackpackItemInstance* ItemInstance = Cast<UBackpackItemInstance>(CachedListItemObject))
	{
		DragOp->DragSource = EBackpackDragSource::Backpack;
		ItemInstanceForDrag = ItemInstance;
	}
	
	if (ItemInstanceForDrag && DragVisualClass)
	{
		UUserWidget_DragVisual* DragWidget = CreateWidget<UUserWidget_DragVisual>(GetOwningPlayer(), DragVisualClass);
		if (DragWidget)
		{
			DragWidget->SetupEquipmentSlot(ItemInstanceForDrag);
			DragOp->DefaultDragVisual = DragWidget;
			DragOp->Pivot = EDragPivot::CenterCenter;
		}
	}
	
	OutOperation = DragOp;
}