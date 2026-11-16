// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_Compass.h"

#include "CommonTextBlock.h"
#include "Components/Image.h"

void UActivatableWidget_Compass::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	
	float Yaw = 0.f;

	if (APlayerController* PC = GetOwningPlayer())
	{
		Yaw = PC->GetControlRotation().Yaw;
	}
	Yaw = FRotator::ClampAxis(Yaw + CompassYawOffset);

	if (CompassStrip)
	{
		if (UMaterialInstanceDynamic* MID = CompassStrip->GetDynamicMaterial())
		{
			MID->SetScalarParameterValue(ScrollParamName, Yaw / 360.f - 0.5f);
		}
	}

	if (CurrentHeadingText)
	{
		int32 HeadingValue = (int32)(Yaw / HeadingRounding) * HeadingRounding;
		if (HeadingValue >= 360) HeadingValue = 0;
		
		FString Display;
		switch (HeadingValue)
		{
		case 0:   Display = TEXT("N"); break;
		case 90:  Display = TEXT("E"); break;
		case 180: Display = TEXT("S"); break;
		case 270: Display = TEXT("W"); break;
		default:  Display = FString::FromInt(HeadingValue);
		}

		CurrentHeadingText->SetText(FText::FromString(Display));
	}
}
