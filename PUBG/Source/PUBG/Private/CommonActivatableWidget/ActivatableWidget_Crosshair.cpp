// Fill out your copyright notice in the Description page of Project Settings.

#include "CommonActivatableWidget/ActivatableWidget_Crosshair.h"
#include "Components/Image.h"
#include "Character/PlayerCharacter.h"

void UActivatableWidget_Crosshair::NativeConstruct()
{
	Super::NativeConstruct();
	SetVisibility(ESlateVisibility::HitTestInvisible); 
	CachedPawn = Cast<APlayerCharacter>(GetOwningPlayerPawn());
}

void UActivatableWidget_Crosshair::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (!CachedPawn.IsValid()) CachedPawn = Cast<APlayerCharacter>(GetOwningPlayerPawn());

	if (APlayerCharacter* PC = CachedPawn.Get())
	{
		TargetSpread = PC->GetCrosshairSpreadDegrees();
		
		ESlateVisibility BarVis = PC->ShouldShowCrosshairBars() ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed;
		if (Image_CrosshairTop)    Image_CrosshairTop->SetVisibility(BarVis);
		if (Image_CrosshairBottom) Image_CrosshairBottom->SetVisibility(BarVis);
		if (Image_CrosshairLeft)   Image_CrosshairLeft->SetVisibility(BarVis);
		if (Image_CrosshairRight)  Image_CrosshairRight->SetVisibility(BarVis);

		if (Image_CrosshairCenter) Image_CrosshairCenter->SetVisibility(PC->ShouldShowCrosshairCenter() ? ESlateVisibility::HitTestInvisible : ESlateVisibility::Collapsed);
	}
	
	float Speed = (TargetSpread > CurrentSpread) ? ExpandSpeed : ShrinkSpeed;
	CurrentSpread = FMath::FInterpTo(CurrentSpread, TargetSpread, InDeltaTime, Speed);
	
	const float ViewportScale = MyGeometry.GetLocalSize().Y / ReferenceViewportHeight;
	const float PixelSpread = BaseOffset + (CurrentSpread * PixelsPerDegree * ViewportScale);
	
	if (Image_CrosshairTop)    Image_CrosshairTop->SetRenderTranslation(FVector2D(0.f, -PixelSpread));
	if (Image_CrosshairBottom) Image_CrosshairBottom->SetRenderTranslation(FVector2D(0.f, PixelSpread));
	if (Image_CrosshairLeft)   Image_CrosshairLeft->SetRenderTranslation(FVector2D(-PixelSpread, 0.f));
	if (Image_CrosshairRight)  Image_CrosshairRight->SetRenderTranslation(FVector2D(PixelSpread, 0.f));
}