// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "BaseCommonActivatableWidget.generated.h"

class AGlobalPlayerController;
/**
 * 
 */
UCLASS()
class PUBG_API UBaseCommonActivatableWidget : public UCommonActivatableWidget
{
	GENERATED_BODY()
	
protected:
	UFUNCTION(BlueprintPure)
	AGlobalPlayerController* GetOwningPlayerController() const;
	
private:
	mutable TWeakObjectPtr<AGlobalPlayerController> CachedOwningPC;
};
