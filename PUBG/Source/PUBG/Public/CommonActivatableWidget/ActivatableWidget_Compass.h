// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_Compass.generated.h"

class UCommonTextBlock;
class UImage;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_Compass : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> CompassStrip;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> CenterMarker;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonTextBlock> CurrentHeadingText;
	
private:
	UPROPERTY(EditDefaultsOnly)
	FName ScrollParamName = TEXT("X");
	
	UPROPERTY(EditDefaultsOnly)
	int32 HeadingRounding = 5;
	
	UPROPERTY(EditDefaultsOnly)
	float CompassYawOffset = 180.f;
};
