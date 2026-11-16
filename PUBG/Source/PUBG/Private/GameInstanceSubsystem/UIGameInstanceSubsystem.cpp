// Fill out your copyright notice in the Description page of Project Settings.


#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"

#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "CommonUserWidget/GameCommonUserWidget.h"
#include "Engine/AssetManager.h"
#include "Widgets/CommonActivatableWidgetContainer.h"

bool UUIGameInstanceSubsystem::ShouldCreateSubsystem(UObject* Outer) const
{
	if (!CastChecked<UGameInstance>(Outer)->IsDedicatedServerInstance())
	{
		TArray<UClass*> FoundClasses;
		GetDerivedClasses(GetClass(), FoundClasses);
		
		return FoundClasses.IsEmpty();
	}
	return false;
}

UUIGameInstanceSubsystem* UUIGameInstanceSubsystem::Get(const UObject* WorldContextObject)
{
	if (GEngine)
	{
		UWorld* World = GEngine->GetWorldFromContextObject(WorldContextObject, EGetWorldErrorMode::Assert);
		
		return UGameInstance::GetSubsystem<UUIGameInstanceSubsystem>(World->GetGameInstance());
	}
	
	return nullptr;
}

void UUIGameInstanceSubsystem::RegisterCreatedPrimaryLayoutWidget(UGameCommonUserWidget* InCreatedWidget)
{
	if (InCreatedWidget)
	{
		CreatedPrimaryLayout = InCreatedWidget;
	}
}

void UUIGameInstanceSubsystem::PushSoftWidgetToStackAsync(const FGameplayTag& InWidgetStackTag,
                                                          TSoftClassPtr<UBaseCommonActivatableWidget> InSoftWidgetClass,
                                                          TFunction<void(EAsyncPushWidgetState, UBaseCommonActivatableWidget*)> AysncPushStateCallback)
{
	if (InSoftWidgetClass.IsNull()) return;
	
	UAssetManager::Get().GetStreamableManager().RequestAsyncLoad(
		InSoftWidgetClass.ToSoftObjectPath(),
		FStreamableDelegate::CreateLambda(
			[InSoftWidgetClass, this, InWidgetStackTag, AysncPushStateCallback](){
				UClass* LoadedWidgetClass = InSoftWidgetClass.Get();
				if (LoadedWidgetClass && CreatedPrimaryLayout)
				{
					UCommonActivatableWidgetContainerBase* FoundWidgetStack = CreatedPrimaryLayout->FindWidgetStackByTag(InWidgetStackTag);
					if (!FoundWidgetStack) return;
					UBaseCommonActivatableWidget* CreatedWidget = FoundWidgetStack->AddWidget<UBaseCommonActivatableWidget>(
						LoadedWidgetClass,
						[AysncPushStateCallback](UBaseCommonActivatableWidget& CreatedWidgetInstance){
							AysncPushStateCallback(EAsyncPushWidgetState::OnCreatedBeforePush, &CreatedWidgetInstance);
						}
					);
					AysncPushStateCallback(EAsyncPushWidgetState::AfterPush, CreatedWidget);
				}
			}
		)
	);
}

bool UUIGameInstanceSubsystem::IsWidgetActiveInStack(const FGameplayTag& StackTag,
	TSubclassOf<UBaseCommonActivatableWidget> WidgetClass) const
{
	if (!CreatedPrimaryLayout || !WidgetClass) return false;
	UCommonActivatableWidgetContainerBase* Stack = CreatedPrimaryLayout->FindWidgetStackByTag(StackTag);
	if (!Stack) return false;
	
	UCommonActivatableWidget* ActiveWidget = Stack->GetActiveWidget();
	return ActiveWidget && ActiveWidget->IsA(WidgetClass);
}

UBaseCommonActivatableWidget* UUIGameInstanceSubsystem::GetTopWidgetInStack(const FGameplayTag& StackTag)
{
	if (!CreatedPrimaryLayout) return nullptr;
	UCommonActivatableWidgetContainerBase* Stack = CreatedPrimaryLayout->FindWidgetStackByTag(StackTag);
	if (!Stack) return nullptr;
	return Cast<UBaseCommonActivatableWidget>(Stack->GetActiveWidget());
}
