// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_WeaponDetail.generated.h"

class AWeaponPreview;
class UBackpackItemFragment_Weapon;
class UUserWidget_DragVisual;
class UBackpackManagerComponent;
class USizeBox;
class UActivatableWidget_AttachmentSlot;
class UBackpackItemInstance;
class UBorder;
class UImage;
class UTextBlock;

UCLASS()
class PUBG_API UActivatableWidget_WeaponDetail : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	void SetupWeaponDetail(UBackpackItemInstance* ItemInstance);
	void ClearWeaponDetail();
	void InitWeaponDetail();
	
protected:
	virtual void NativeDestruct() override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
protected:
	UBackpackManagerComponent* GetBackpackComp() const;
	void UpdateAmmoDisplay(UBackpackItemInstance* ItemInstance);
	void RefreshWeaponDetailDeferred();
	
protected:
	UFUNCTION()
	void OnInventoryChangedHandler();
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<USizeBox> SizeBox_Gun;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Slot;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_WeaponName;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_BulletIcon;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_BulletType;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_ClipNumber;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_BackpackBulletNumber;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_WeaponRender;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_PistolItem;
	
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_AttachmentSlot> WB_WeaponPart_Scope;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_AttachmentSlot> WB_WeaponPart_RightScope;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_AttachmentSlot> WB_WeaponPart_Muzzle;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_AttachmentSlot> WB_WeaponPart_Grip;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_AttachmentSlot> WB_WeaponPart_Clip;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_AttachmentSlot> WB_WeaponPart_Stock;
	
private:
	UPROPERTY(EditAnywhere)
	int32 SlotIndex;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget_DragVisual> DragVisualClass;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<AWeaponPreview> PreviewActorClass;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UTextureRenderTarget2D> RenderTargetAsset;
	
	UPROPERTY(EditAnywhere)
	TObjectPtr<UMaterialInterface> PreviewMaterialBase;
	
private:
	UPROPERTY()
	TObjectPtr<UBackpackItemInstance> CachedWeaponInstance;

	UPROPERTY()
	TObjectPtr<UBackpackItemFragment_Weapon> CachedWeaponData;
	
	UPROPERTY()
	TObjectPtr<UBackpackManagerComponent> CachedComp;
	
	UPROPERTY()
	TObjectPtr<AWeaponPreview> PreviewActor;

private:
	FTimerHandle DeferredRefreshTimer;
};