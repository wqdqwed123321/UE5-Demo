// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_Crosshair.generated.h"

class UImage;
class APlayerCharacter;

UCLASS()
class PUBG_API UActivatableWidget_Crosshair : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_CrosshairTop;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_CrosshairBottom;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_CrosshairLeft;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_CrosshairRight;
	
	UPROPERTY(meta = (BindWidgetOptional))
	TObjectPtr<UImage> Image_CrosshairCenter;
	
private:
	UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "基础间距(像素)"))
	float BaseOffset = 45.f;

	UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "弹开速度"))
	float ExpandSpeed = 60.f;

	UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "收拢速度"))
	float ShrinkSpeed = 18.f;
	
	UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "每度对应像素"))
	float PixelsPerDegree = 15.f;

	UPROPERTY(EditDefaultsOnly, meta = (DisplayName = "参考分辨率高度"))
	float ReferenceViewportHeight = 1080.f;

private:
	float TargetSpread = 0.f;
	float CurrentSpread = 0.f;
	TWeakObjectPtr<APlayerCharacter> CachedPawn;
};