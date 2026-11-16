// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUserWidget/GameCommonUserWidget.h"

UCommonActivatableWidgetContainerBase* UGameCommonUserWidget::FindWidgetStackByTag(const FGameplayTag& InTag) const
{
	return RegisteredWidgetStackMap.FindRef(InTag);
}

void UGameCommonUserWidget::RegisterWidgetStack(FGameplayTag InStackTag, UCommonActivatableWidgetContainerBase* InStack)
{
	if (!IsDesignTime())
	{
		if (!RegisteredWidgetStackMap.Contains(InStackTag))
		{
			RegisteredWidgetStackMap.Add(InStackTag, InStack);
		}
	}
}
