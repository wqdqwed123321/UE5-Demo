// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_AttachmentSlot.generated.h"

class UActivatableWidget_WeaponTooltip;
class UUserWidget_DragVisual;
class UBackpackItemInstance;
class UBorder;
class UImage;

UCLASS()
class PUBG_API UActivatableWidget_AttachmentSlot : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	void SetupAttachmentSlot(UBackpackItemInstance* AttachmentItem);
	void SetOwningWeapon(UBackpackItemInstance* InWeapon);

protected:
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual bool NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual void NativeConstruct() override;
	
protected:

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_PartPicture;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Border;

private:
	UPROPERTY(EditAnywhere)
	EAttachmentSlot AttachmentSlot;

	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget_DragVisual> DragVisualClass;

	UPROPERTY()
	TObjectPtr<UBackpackItemInstance> CachedWeapon;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UActivatableWidget_WeaponTooltip> TooltipClass;

	UPROPERTY()
	TObjectPtr<UActivatableWidget_WeaponTooltip> ActiveTooltip;
	
private:
	int32 RetryCount = 0;
};
