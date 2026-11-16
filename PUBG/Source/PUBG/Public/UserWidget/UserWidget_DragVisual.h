// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UserWidget_DragVisual.generated.h"

class UBackpackItemInstance;
class UBorder;
class UImage;
/**
 * 
 */
UCLASS()
class PUBG_API UUserWidget_DragVisual : public UUserWidget
{
	GENERATED_BODY()

public:
	void SetupEquipmentSlot(UBackpackItemInstance* EquipmentItem);

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Picture;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Frame;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Border;
};
