// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "PushSoftWidgetAsyncAction.generated.h"

class UBaseCommonActivatableWidget;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPushSoftWidgetDelegate, UBaseCommonActivatableWidget*, PushedWidget);

/**
 * 
 */
UCLASS()
class PUBG_API UPushSoftWidgetAsyncAction : public UBlueprintAsyncActionBase
{
	GENERATED_BODY()
	
public:
	virtual void Activate() override;
	
public:
	UFUNCTION(BlueprintCallable, meta = (WorldContext = "WorldContextObject", HidePin = "WorldContextObject", BlueprintInternalUseOnly = "true"))
	static UPushSoftWidgetAsyncAction* PushSoftWidget(const UObject* WorldContextObject, APlayerController* OwningPlayerController, TSoftClassPtr<UBaseCommonActivatableWidget> InSoftWidgetClass, UPARAM(meta = (Categories = "PUBG.UI")) FGameplayTag InWidgetStackTag, bool bFocusOnNewlyPushedWidget = true);
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnPushSoftWidgetDelegate OnWidgetCreatedBeforePush;
	
	UPROPERTY(BlueprintAssignable)
	FOnPushSoftWidgetDelegate AfterPush;
	
private:
	TWeakObjectPtr<UWorld> CachedOwningWorld;
	TWeakObjectPtr<APlayerController> CachedOwningPC;
	TSoftClassPtr<UBaseCommonActivatableWidget> CachedSoftWidgetClass;
	FGameplayTag CachedWidgetStackTag;
	bool bCachedFocusOnNewlyPushedWidget = false;
};
