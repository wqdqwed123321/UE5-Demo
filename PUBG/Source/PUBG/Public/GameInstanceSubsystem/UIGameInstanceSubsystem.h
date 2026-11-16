// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIGameInstanceSubsystem.generated.h"

class UBaseCommonActivatableWidget;
class UGameCommonUserWidget;
/**
 * 
 */
UCLASS()
class PUBG_API UUIGameInstanceSubsystem : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	virtual bool ShouldCreateSubsystem(UObject* Outer) const override;
	
	static UUIGameInstanceSubsystem* Get(const UObject* WorldContextObject);
	
public:
	UFUNCTION(BlueprintCallable)
	void RegisterCreatedPrimaryLayoutWidget(UGameCommonUserWidget* InCreatedWidget);
	
	void PushSoftWidgetToStackAsync(const FGameplayTag& InWidgetStackTag, TSoftClassPtr<UBaseCommonActivatableWidget> InSoftWidgetClass, TFunction<void(EAsyncPushWidgetState, UBaseCommonActivatableWidget*)> AysncPushStateCallback);
	
	bool IsWidgetActiveInStack(const FGameplayTag& StackTag, TSubclassOf<UBaseCommonActivatableWidget> WidgetClass) const;
	
	UBaseCommonActivatableWidget* GetTopWidgetInStack(const FGameplayTag& StackTag);
private:
	UPROPERTY(Transient)
	TObjectPtr<UGameCommonUserWidget> CreatedPrimaryLayout;
};
