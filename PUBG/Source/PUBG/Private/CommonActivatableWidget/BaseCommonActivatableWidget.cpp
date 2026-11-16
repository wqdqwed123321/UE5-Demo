// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"

#include "PlayerController/GlobalPlayerController.h" 

AGlobalPlayerController* UBaseCommonActivatableWidget::GetOwningPlayerController() const
{
	if (!CachedOwningPC.IsValid())
	{
		CachedOwningPC = GetOwningPlayer<AGlobalPlayerController>();
	}	
	
	return CachedOwningPC.IsValid() ? CachedOwningPC.Get() : nullptr;
}
