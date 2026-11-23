// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_PickupPrompt.generated.h"

class UOverlay;
class UImage;
class UCommonTextBlock;
class APickupItem;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_PickupPrompt : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
protected:
	void RefreshPrompt();
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UOverlay> Overlay;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Key;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonTextBlock> Text_Action;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonTextBlock> Text_ItemName;

private:
	float TraceAccumulator = 0.f;
	TWeakObjectPtr<APickupItem> CurrentItem;
};
