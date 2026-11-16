// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BaseCommonActivatableWidget.h"
#include "ActivatableWidget_CharacterEquipment.generated.h"

class UBackpackManagerComponent;
class UBorder;
class UTextBlock;
class UActivatableWidget_EquipmentSlot;

UCLASS()
class PUBG_API UActivatableWidget_CharacterEquipment : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	void InitEquipment();
	
protected:
	virtual void NativeDestruct() override;

	UFUNCTION()
	void OnInventoryChangedHandler();

private:
	void UpdateShieldUI();

	UPROPERTY()
	TObjectPtr<UBackpackManagerComponent> CachedComp;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Helmet;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Back;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Armor;
	
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Head;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Glasses;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Mask;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Shirt;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Jacket;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Glove;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Legs;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UActivatableWidget_EquipmentSlot> WB_BodyEquipmentItem_Shoes;
	
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UBorder> Border_HelmetShield;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_HelmetShield;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UBorder> Border_ArmorShield;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_ArmorShield;
};
