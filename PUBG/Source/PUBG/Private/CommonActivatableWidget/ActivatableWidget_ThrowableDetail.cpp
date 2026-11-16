// Fill out your copyright notice in the Description page of Project Settings.

#include "CommonActivatableWidget/ActivatableWidget_ThrowableDetail.h"

#include "Actor/WeaponPreview.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "Components/Border.h"
#include "Components/Image.h"
#include "Components/TextBlock.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "Engine/TextureRenderTarget2D.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Preview.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"
#include "UserWidget/UserWidget_DragVisual.h"

void UActivatableWidget_ThrowableDetail::InitThrowableDetail()
{
	ClearThrowableDetail();
	
	CachedComp = GetBackpackComp();
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.AddDynamic(this, &UActivatableWidget_ThrowableDetail::OnInventoryChangedHandler);
	}
	OnInventoryChangedHandler();
}

void UActivatableWidget_ThrowableDetail::NativeDestruct()
{
	if (PreviewActor)
	{
		PreviewActor->Destroy();
		PreviewActor = nullptr;
	}
	
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_ThrowableDetail::OnInventoryChangedHandler);
		CachedComp = nullptr;
	}
	Super::NativeDestruct();
}

void UActivatableWidget_ThrowableDetail::OnInventoryChangedHandler()
{
	if (CachedComp)
	{
		int32 RealIndex = SlotIndex - 1;
		UBackpackItemInstance* Item = CachedComp->GetWeaponSlotItem(RealIndex);
		
		if (Item == CachedItemInstance) return;
		
		CachedItemInstance = Item;

		if (Item)
		{
			SetupThrowableDetail(Item);
		}
		else
		{
			ClearThrowableDetail();
		}
	}
}

UBackpackManagerComponent* UActivatableWidget_ThrowableDetail::GetBackpackComp() const
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

FReply UActivatableWidget_ThrowableDetail::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return FReply::Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
	}
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UActivatableWidget_ThrowableDetail::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
{
	Super::NativeOnDragDetected(InGeometry, InMouseEvent, OutOperation);

	if (!CachedComp) return;

	int32 RealIndex = SlotIndex - 1;
	UBackpackItemInstance* Item = CachedComp->GetWeaponSlotItem(RealIndex);
	if (!Item) return;

	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(UWidgetBlueprintLibrary::CreateDragDropOperation(UBackpackDragDropOperation::StaticClass()));
	if (DragOp)
	{
		DragOp->Payload = Item;
		DragOp->DragSource = EBackpackDragSource::Equipment;
		DragOp->SourceWeaponSlotIndex = RealIndex;
		DragOp->SourceEquipmentSlot = EEquipmentSlot::None;
		
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

void UActivatableWidget_ThrowableDetail::SetupThrowableDetail(UBackpackItemInstance* ItemInstance)
{
	if (!ItemInstance || !ItemInstance->Definition) return;

	if (TextBlock_WeaponName)
	{
		TextBlock_WeaponName->SetText(ItemInstance->Definition->ItemName);
		TextBlock_WeaponName->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}

	if (TextBlock_Slot)
	{
		TextBlock_Slot->SetText(FText::AsNumber(SlotIndex));
		TextBlock_Slot->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}

	if (Image_Render)
	{
		Image_Render->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	}

	if (Border_SlotFrame) Border_SlotFrame->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
	
	UBackpackItemFragment_Preview* PreviewFrag = Cast<UBackpackItemFragment_Preview>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemInstance->Definition->GetClass(), UBackpackItemFragment_Preview::StaticClass()));

	if (PreviewFrag && PreviewFrag->PreviewMesh)
	{
		if (!PreviewActor && GetWorld() && PreviewActorClass)
		{
			FActorSpawnParameters Params;
			Params.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;
			
			PreviewActor = GetWorld()->SpawnActor<AWeaponPreview>(PreviewActorClass, FVector(0, 0, -10000), FRotator::ZeroRotator, Params);
		}

		if (PreviewActor && RenderTargetAsset)
		{
			PreviewActor->SetRenderTarget(RenderTargetAsset);
			PreviewActor->SetPreviewMesh(PreviewFrag->PreviewMesh, PreviewFrag->PreviewTransform);
			PreviewActor->RefreshPreview();
		}
			
		Image_Render->SetBrushFromMaterial(PreviewMaterialBase);
	}
}

void UActivatableWidget_ThrowableDetail::ClearThrowableDetail()
{
	if (TextBlock_WeaponName) TextBlock_WeaponName->SetVisibility(ESlateVisibility::Collapsed);
	if (TextBlock_Slot) TextBlock_Slot->SetVisibility(ESlateVisibility::Collapsed);
	if (Image_Render) Image_Render->SetVisibility(ESlateVisibility::Collapsed);
	if (Border_SlotFrame) Border_SlotFrame->SetVisibility(ESlateVisibility::Collapsed);
	if (TextBlock_WeaponName) TextBlock_WeaponName->SetText(FText::GetEmpty());
	if (TextBlock_Slot) TextBlock_Slot->SetText(FText::GetEmpty());
	
	CachedItemInstance = nullptr; 
}
