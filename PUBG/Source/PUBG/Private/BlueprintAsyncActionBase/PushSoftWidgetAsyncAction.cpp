// Fill out your copyright notice in the Description page of Project Settings.


#include "BlueprintAsyncActionBase/PushSoftWidgetAsyncAction.h"

#include "PUBGType.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "Components/Widget.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"

void UPushSoftWidgetAsyncAction::Activate()
{
	Super::Activate();
	
	UUIGameInstanceSubsystem* UISubsystem = UUIGameInstanceSubsystem::Get(CachedOwningWorld.Get());
	if (UISubsystem)
	{
		UISubsystem->PushSoftWidgetToStackAsync(CachedWidgetStackTag, CachedSoftWidgetClass, 
			[this](EAsyncPushWidgetState InPushState, UBaseCommonActivatableWidget* PushedWidget){
				switch (InPushState)
				{
				case EAsyncPushWidgetState::OnCreatedBeforePush:
					PushedWidget->SetOwningPlayer(CachedOwningPC.Get());
					OnWidgetCreatedBeforePush.Broadcast(PushedWidget);
					break;
				case EAsyncPushWidgetState::AfterPush:
					AfterPush.Broadcast(PushedWidget);
					if (bCachedFocusOnNewlyPushedWidget)
					{
						if (UWidget* WidgetToFocus = PushedWidget->GetDesiredFocusTarget())
						{
							WidgetToFocus->SetFocus();
						}
					}
					
					SetReadyToDestroy();
					break;
				}
			}
		);
	}
}

UPushSoftWidgetAsyncAction* UPushSoftWidgetAsyncAction::PushSoftWidget(const UObject* WorldContextObject,
	APlayerController* OwningPlayerController, TSoftClassPtr<UBaseCommonActivatableWidget> InSoftWidgetClass,
	FGameplayTag InWidgetStackTag, bool bFocusOnNewlyPushedWidget)
{
	if (InSoftWidgetClass.IsNull()) return nullptr;

	if (GEngine)
	{
		if (UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::LogAndReturnNull))
		{
			UPushSoftWidgetAsyncAction* Node = NewObject<UPushSoftWidgetAsyncAction>();
			Node->CachedOwningWorld = World;
			Node->CachedOwningPC = OwningPlayerController;
			Node->CachedSoftWidgetClass = InSoftWidgetClass;
			Node->CachedWidgetStackTag = InWidgetStackTag;
			Node->bCachedFocusOnNewlyPushedWidget = bFocusOnNewlyPushedWidget;
			
			Node->RegisterWithGameInstance(World);
			
			return Node;
		}
	}
	
	return nullptr;
}
