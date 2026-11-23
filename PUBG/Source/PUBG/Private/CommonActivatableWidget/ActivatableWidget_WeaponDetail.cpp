// Fill out your copyright notice in the Description page of Project Settings.

#include "CommonActivatableWidget/ActivatableWidget_WeaponDetail.h"

#include "Actor/PickupItem.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "Blueprint/WidgetBlueprintLibrary.h"
#include "CommonActivatableWidget/ActivatableWidget_AttachmentSlot.h"
#include "Components/Image.h"
#include "Components/SizeBox.h"
#include "Components/TextBlock.h"
#include "DragDropOperation/BackpackDragDropOperation.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemFragment_Weapon.h"
#include "Object/BackpackItemInstance.h"
#include "PlayerState/GlobalPlayerState.h"
#include "UserWidget/UserWidget_DragVisual.h"
#include "PUBGGameplayTag.h"
#include "Actor/WeaponPreview.h"
#include "Blueprint/SlateBlueprintLibrary.h"
#include "CommonActivatableWidget/ActivatableWidget_WeaponTooltip.h"
#include "Object/BackpackItemFragment_Ammo.h"
#include "Object/BackpackItemFragment_Preview.h"

void UActivatableWidget_WeaponDetail::InitWeaponDetail()
{
	ClearWeaponDetail();
	
	CachedComp = GetBackpackComp();
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.AddDynamic(this, &UActivatableWidget_WeaponDetail::OnInventoryChangedHandler);
	}
	
	OnInventoryChangedHandler();
}

void UActivatableWidget_WeaponDetail::NativeDestruct()
{
	GetWorld()->GetTimerManager().ClearTimer(DeferredRefreshTimer);

	if (PreviewActor)
	{
		PreviewActor->Destroy();
		PreviewActor = nullptr;
	}
	
	if (CachedComp)
	{
		CachedComp->OnInventoryChanged.RemoveDynamic(this, &UActivatableWidget_WeaponDetail::OnInventoryChangedHandler);
		CachedComp = nullptr;
	}
	
	Super::NativeDestruct();
}

void UActivatableWidget_WeaponDetail::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (TooltipClass)
	{
		ActiveTooltip = CreateWidget<UActivatableWidget_WeaponTooltip>(GetOwningPlayer(), TooltipClass);
		if (ActiveTooltip)
		{
			ActiveTooltip->SetVisibility(ESlateVisibility::HitTestInvisible);
		}
	}
}

void UActivatableWidget_WeaponDetail::OnInventoryChangedHandler()
{
	GetWorld()->GetTimerManager().ClearTimer(DeferredRefreshTimer);
	GetWorld()->GetTimerManager().SetTimer(DeferredRefreshTimer, this, &UActivatableWidget_WeaponDetail::RefreshWeaponDetailDeferred, 0.1f, false);
}

void UActivatableWidget_WeaponDetail::RefreshWeaponDetailDeferred()
{
	if (CachedComp)
	{
		int32 RealIndex = SlotIndex - 1;
		UBackpackItemInstance* Item = CachedComp->GetWeaponSlotItem(RealIndex);
		
		if (Item)
		{
			SetupWeaponDetail(Item);
		}
		else
		{
			ClearWeaponDetail();
		}
	}
}

UBackpackManagerComponent* UActivatableWidget_WeaponDetail::GetBackpackComp() const
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

FReply UActivatableWidget_WeaponDetail::NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent)
{
	if (InMouseEvent.GetEffectingButton() == EKeys::LeftMouseButton)
	{
		return FReply::Handled().DetectDrag(TakeWidget(), EKeys::LeftMouseButton);
	}
	return Super::NativeOnMouseButtonDown(InGeometry, InMouseEvent);
}

void UActivatableWidget_WeaponDetail::NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation)
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
		
		if (Item->Definition && Item->Definition->Icon && DragVisualClass)
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

bool UActivatableWidget_WeaponDetail::NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	Super::NativeOnDragOver(InGeometry, InDragDropEvent, InOperation);

	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !DragOp->Payload) return false;

	int32 MyIndex = SlotIndex - 1;
	if (MyIndex < 0 || MyIndex > 1) return false;
	
	if (DragOp->DragSource == EBackpackDragSource::Ground || DragOp->DragSource == EBackpackDragSource::Backpack)
	{
		UBackpackItemDefinition* ItemDef = nullptr;
		if (DragOp->DragSource == EBackpackDragSource::Ground)
		{
			APickupItem* G = Cast<APickupItem>(DragOp->Payload);
			if (G && G->ItemDefinition) ItemDef = G->ItemDefinition.GetDefaultObject();
		}
		else
		{
			UBackpackItemInstance* B = Cast<UBackpackItemInstance>(DragOp->Payload);
			if (B) ItemDef = B->Definition;
		}

		if (ItemDef)
		{
			if (ItemDef->ItemType == EItemType::Attachment) return false;
			if (ItemDef->ItemType == EItemType::Weapon) return true;
		}
		return false;
	}
	
	if (DragOp->DragSource == EBackpackDragSource::Equipment)
	{
		int32 SrcIndex = DragOp->SourceWeaponSlotIndex;
		if (SrcIndex >= 0 && SrcIndex <= 1 && MyIndex != SrcIndex) return true;
	}

	return false;
}

bool UActivatableWidget_WeaponDetail::NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation)
{
	UBackpackDragDropOperation* DragOp = Cast<UBackpackDragDropOperation>(InOperation);
	if (!DragOp || !CachedComp) return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);

	int32 MyIndex = SlotIndex - 1;
	if (MyIndex < 0 || MyIndex > 1) return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
	
	if (DragOp->DragSource == EBackpackDragSource::Ground)
	{
		APickupItem* GroundItem = Cast<APickupItem>(DragOp->Payload);
		if (GroundItem && GroundItem->ItemDefinition)
		{
			UBackpackItemDefinition* ItemDef = GroundItem->ItemDefinition.GetDefaultObject();
			if (ItemDef && ItemDef->ItemType == EItemType::Weapon)
			{
				CachedComp->Server_EquipGroundWeaponToSlot(GroundItem, MyIndex);
				return true;
			}
		}
	}
	
	if (DragOp->DragSource == EBackpackDragSource::Equipment)
	{
		int32 SrcIndex = DragOp->SourceWeaponSlotIndex;
		if (SrcIndex >= 0 && SrcIndex <= 1 && MyIndex != SrcIndex)
		{
			CachedComp->Server_SwapWeaponSlots(SrcIndex, MyIndex);
			return true;
		}
	}

	return Super::NativeOnDrop(InGeometry, InDragDropEvent, InOperation);
}

void UActivatableWidget_WeaponDetail::SetupWeaponDetail(UBackpackItemInstance* ItemInstance)
{
	if (!ItemInstance || !ItemInstance->Definition) return;
	
	bool bIsNewWeapon = (CachedWeaponInstance != ItemInstance || !CachedWeaponData);

	if (bIsNewWeapon)
	{
		CachedWeaponInstance = ItemInstance;
		CachedWeaponData = Cast<UBackpackItemFragment_Weapon>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(ItemInstance->Definition->GetClass(), UBackpackItemFragment_Weapon::StaticClass()));
		
		if (!CachedWeaponData) return;
		
		if (SizeBox_Gun) SizeBox_Gun->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
		if (TextBlock_WeaponName) TextBlock_WeaponName->SetText(ItemInstance->Definition->ItemName);
		if (TextBlock_Slot) TextBlock_Slot->SetText(FText::AsNumber(SlotIndex));
		
		if (TextBlock_BulletType)
		{
			FText AmmoText;
			switch (CachedWeaponData->WeaponAmmoType)
			{
			case EAmmoType::Ammo_556: AmmoText = FText::FromString(TEXT("5.56毫米子弹")); break;
			case EAmmoType::Ammo_762: AmmoText = FText::FromString(TEXT("7.62毫米子弹")); break;
			case EAmmoType::Ammo_5mm: AmmoText = FText::FromString(TEXT("5毫米子弹")); break;
			case EAmmoType::Ammo_9mm: AmmoText = FText::FromString(TEXT("9毫米子弹")); break;
			case EAmmoType::Ammo_12G: AmmoText = FText::FromString(TEXT("12号口径")); break;
			default:                  AmmoText = FText::FromString(TEXT("未知")); break;
			}
			TextBlock_BulletType->SetText(AmmoText);
		}
		
		if (WB_WeaponPart_Scope)      WB_WeaponPart_Scope->SetVisibility(ESlateVisibility::Collapsed);
		if (WB_WeaponPart_RightScope) WB_WeaponPart_RightScope->SetVisibility(ESlateVisibility::Collapsed);
		if (WB_WeaponPart_Muzzle)     WB_WeaponPart_Muzzle->SetVisibility(ESlateVisibility::Collapsed);
		if (WB_WeaponPart_Grip)       WB_WeaponPart_Grip->SetVisibility(ESlateVisibility::Collapsed);
		if (WB_WeaponPart_Clip)       WB_WeaponPart_Clip->SetVisibility(ESlateVisibility::Collapsed);
		if (WB_WeaponPart_Stock)      WB_WeaponPart_Stock->SetVisibility(ESlateVisibility::Collapsed);
		
		for (const EAttachmentSlot& SupportedSlot : CachedWeaponData->SupportedAttachmentSlots)
		{
			UActivatableWidget_AttachmentSlot* TargetWidget = nullptr;
			
			switch (SupportedSlot)
			{
			case EAttachmentSlot::Scope:       TargetWidget = WB_WeaponPart_Scope; break;
			case EAttachmentSlot::CantedSight: TargetWidget = WB_WeaponPart_RightScope; break;
			case EAttachmentSlot::Muzzle:      TargetWidget = WB_WeaponPart_Muzzle; break;
			case EAttachmentSlot::Grip:        TargetWidget = WB_WeaponPart_Grip; break;
			case EAttachmentSlot::Magazine:    TargetWidget = WB_WeaponPart_Clip; break;
			case EAttachmentSlot::Stock:       TargetWidget = WB_WeaponPart_Stock; break;
			default: break;
			}
			
			if (TargetWidget)
			{
				TargetWidget->SetVisibility(ESlateVisibility::Visible);
			}
		}
		
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
			}
			
			Image_WeaponRender->SetBrushFromMaterial(PreviewMaterialBase);
		}
	}
	
	if (PreviewActor && ItemInstance)
	{
		PreviewActor->UpdateWeaponAttachments(ItemInstance->ItemAttachments);
		PreviewActor->RefreshPreview();
	}

	if (CachedWeaponData)
	{
		for (const EAttachmentSlot& SupportedSlot : CachedWeaponData->SupportedAttachmentSlots)
		{
			UActivatableWidget_AttachmentSlot* TargetWidget = nullptr;
			switch (SupportedSlot)
			{
			case EAttachmentSlot::Scope:       TargetWidget = WB_WeaponPart_Scope; break;
			case EAttachmentSlot::CantedSight: TargetWidget = WB_WeaponPart_RightScope; break;
			case EAttachmentSlot::Muzzle:      TargetWidget = WB_WeaponPart_Muzzle; break;
			case EAttachmentSlot::Grip:        TargetWidget = WB_WeaponPart_Grip; break;
			case EAttachmentSlot::Magazine:    TargetWidget = WB_WeaponPart_Clip; break;
			case EAttachmentSlot::Stock:       TargetWidget = WB_WeaponPart_Stock; break;
			default: break;
			}
			
			if (TargetWidget)
			{
				TargetWidget->SetOwningWeapon(ItemInstance);
			}
		}
	}

	UpdateAmmoDisplay(ItemInstance);

	if (ActiveTooltip)
	{
		ActiveTooltip->SetupTooltip(ItemInstance);
		SetToolTip(ActiveTooltip);
	}
}

void UActivatableWidget_WeaponDetail::UpdateAmmoDisplay(UBackpackItemInstance* ItemInstance)
{
	if (!ItemInstance || !CachedWeaponData) return;

	float CurrentAmmo = 0.f;
	for (const FItemAttribute& Attr : ItemInstance->ItemAttributes)
	{
		if (Attr.Tag == PUBGGameplayTag::PUBG_BackpackItemInstance_CurrentAmmo)
		{
			CurrentAmmo = Attr.Value;
			break;
		}
	}
	if (TextBlock_ClipNumber) TextBlock_ClipNumber->SetText(FText::AsNumber(CurrentAmmo));
	
	int32 TotalBackpackAmmo = 0;
	if (CachedComp)
	{
		TArray<UBackpackItemInstance*> AllBackpackItems = CachedComp->GetBackpackItems();
		for (UBackpackItemInstance* BagItem : AllBackpackItems)
		{
			if (BagItem && BagItem->Definition)
			{
				UBackpackItemFragment_Ammo* AmmoFrag = Cast<UBackpackItemFragment_Ammo>(UBackpackItemDefinition::FindBackpackItemFragmentByClass(BagItem->Definition->GetClass(), UBackpackItemFragment_Ammo::StaticClass()));
				
				if (AmmoFrag && AmmoFrag->AmmoType == CachedWeaponData->WeaponAmmoType)
				{
					TotalBackpackAmmo += BagItem->Quantity;
				}
			}
		}
	}
	
	if (TextBlock_BackpackBulletNumber) 
	{
		TextBlock_BackpackBulletNumber->SetText(FText::AsNumber(TotalBackpackAmmo));
	}
}

void UActivatableWidget_WeaponDetail::ClearWeaponDetail()
{
	SetToolTip(nullptr);

	if (SizeBox_Gun) SizeBox_Gun->SetVisibility(ESlateVisibility::Collapsed);
	
	CachedWeaponInstance = nullptr;
	CachedWeaponData = nullptr;
	
	if (PreviewActor)
	{
		PreviewActor->UpdateWeaponAttachments(TArray<FItemAttachment>());
		PreviewActor->RefreshPreview();
	}
	
	if (WB_WeaponPart_Scope) WB_WeaponPart_Scope->SetOwningWeapon(nullptr);
	if (WB_WeaponPart_RightScope) WB_WeaponPart_RightScope->SetOwningWeapon(nullptr);
	if (WB_WeaponPart_Muzzle) WB_WeaponPart_Muzzle->SetOwningWeapon(nullptr);
	if (WB_WeaponPart_Grip) WB_WeaponPart_Grip->SetOwningWeapon(nullptr);
	if (WB_WeaponPart_Clip) WB_WeaponPart_Clip->SetOwningWeapon(nullptr);
	if (WB_WeaponPart_Stock) WB_WeaponPart_Stock->SetOwningWeapon(nullptr);
}