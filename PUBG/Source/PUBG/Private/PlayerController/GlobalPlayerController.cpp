// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerController/GlobalPlayerController.h"

#include "EnhancedInputSubsystems.h"
#include "PUBGGameplayTag.h"
#include "Blueprint/UserWidget.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "CommonUserWidget/GameCommonUserWidget.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"

void AGlobalPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
	
	if (!IsLocalController()) return;

	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->RemoveMappingContext(IMC_Character);
		Subsystem->AddMappingContext(IMC_Character, 0);
	}
}

void AGlobalPlayerController::BeginPlay()
{
	Super::BeginPlay();
	
	if (!IsLocalController() || !PrimaryLayoutClass) return;
	
	UGameCommonUserWidget* PrimaryLayout = CreateWidget<UGameCommonUserWidget>(this, PrimaryLayoutClass);
	if (!PrimaryLayout) return;
	PrimaryLayout->AddToViewport();
	
	UUIGameInstanceSubsystem* UISub = UUIGameInstanceSubsystem::Get(this);
	if (!UISub) return;
	UISub->RegisterCreatedPrimaryLayoutWidget(PrimaryLayout);

	if (InitialHudClass.IsValid())
	{
		UISub->PushSoftWidgetToStackAsync(PUBGGameplayTag::PUBG_UI_Stack_Hud, InitialHudClass, [](EAsyncPushWidgetState State, UBaseCommonActivatableWidget* Widget){});
	}
}