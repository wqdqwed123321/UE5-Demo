// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_EquipmentSlot.generated.h"

class UUserWidget_DragVisual;
class UBackpackManagerComponent;
class UBackpackItemInstance;
class UImage;
class UBorder;

UCLASS()
class PUBG_API UActivatableWidget_EquipmentSlot : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeDestruct() override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	virtual FReply NativeOnMouseButtonDown(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;

public:
	void SetupEquipmentSlot(UBackpackItemInstance* EquipmentItem);
	void InitEquipmentSlot();
	
protected:
	UFUNCTION()
	void OnInventoryChangedHandler();
	
	UBackpackManagerComponent* GetBackpackComp() const;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Picture;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Frame;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Border;
	
private:
	UPROPERTY(EditAnywhere)
	EEquipmentSlot EquipmentSlot;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget_DragVisual> DragVisualClass;
	
	UPROPERTY()
	TObjectPtr<UBackpackManagerComponent> CachedComp;
};
