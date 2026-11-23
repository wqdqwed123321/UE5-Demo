// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PUBGType.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "UIGameInstanceSubsystem.generated.h"

class UCommonUserWidget;
class UActivatableWidget_KillFeed;
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
	void RegisterEmbeddedWidget(UCommonUserWidget* InWidget);
	
public:
	template<typename T>
	T* GetEmbeddedWidget() const
	{
		for (const TPair<TSubclassOf<UCommonUserWidget>, TWeakObjectPtr<UCommonUserWidget>>& Pair : EmbeddedWidgets)
		{
			if (Pair.Key && Pair.Key->IsChildOf(T::StaticClass()))
			{
				if (T* Widget = Cast<T>(Pair.Value.Get()))
				{
					return Widget;
				}
			}
		}
		return nullptr;
	}
	
private:
	UPROPERTY(Transient)
	TObjectPtr<UGameCommonUserWidget> CreatedPrimaryLayout;
	
	UPROPERTY(Transient)
	TMap<TSubclassOf<UCommonUserWidget>, TWeakObjectPtr<UCommonUserWidget>> EmbeddedWidgets;
};
