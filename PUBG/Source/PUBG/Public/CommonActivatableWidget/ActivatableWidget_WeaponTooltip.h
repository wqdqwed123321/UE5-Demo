// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_WeaponTooltip.generated.h"

class UBackpackItemInstance;
class UProgressBar;
class UImage;
class UBorder;
class UTextBlock;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_WeaponTooltip : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	void SetupTooltip(UBackpackItemInstance* ItemInstance);
	
private:
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UBorder> Border_Item;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_ItemName;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_ItemType;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UImage> Image_ItemPicture;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_ItemInfo;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_Weight;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UBorder> Border_Weapon;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_WeaponName;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_WeaponSlot;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_WeaponBulletName;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UImage> Image_87;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_WeaponClipMaxNumber;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UImage> Image_WeaponPicture;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_75;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_1;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UProgressBar> ProgressBar_2;

	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UTextBlock> TextBlock_WeaponInfo;
};
