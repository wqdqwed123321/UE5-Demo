// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCommonActivatableWidget.h"
#include "ActivatableWidget_ThrowableDetail.generated.h"

class AWeaponPreview;
class UUserWidget_DragVisual;
class UBackpackManagerComponent;
class UBackpackItemInstance;
class UBorder;
class UImage;
class UTextBlock;

UCLASS()
class PUBG_API UActivatableWidget_ThrowableDetail : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	void SetupThrowableDetail(UBackpackItemInstance* ItemInstance);
	void ClearThrowableDetail();
	void InitThrowableDetail();
	void SetSlotIndex(int32 InSlotIndex) { SlotIndex = InSlotIndex; }
	
protected:
	virtual void NativeDestruct() override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;

protected:
	UFUNCTION()
	void OnInventoryChangedHandler();
	
protected:
	UBackpackManagerComponent* GetBackpackComp() const;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_WeaponName;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Slot;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Render;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_SpecialWeaponItem;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_SlotBackground;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_SlotFrame;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_BottomLine;
	
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
	TObjectPtr<UBackpackManagerComponent> CachedComp;
	
	UPROPERTY()
	TObjectPtr<UBackpackItemInstance> CachedItemInstance;
	
	UPROPERTY()
	TObjectPtr<AWeaponPreview> PreviewActor;
};
