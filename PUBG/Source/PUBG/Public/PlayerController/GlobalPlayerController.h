// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "GameFramework/PlayerController.h"
#include "GlobalPlayerController.generated.h"

class UBaseCommonActivatableWidget;
class UGameCommonUserWidget;
class UInputMappingContext;
/**
 * 
 */
UCLASS()
class PUBG_API AGlobalPlayerController : public APlayerController
{
	GENERATED_BODY()
	
protected:
	virtual void SetupInputComponent() override;
	
	virtual void BeginPlay() override;
	
public:
	UFUNCTION(Client, Unreliable)
	void Client_KillMessage(const FString& KillerName, const FString& VictimName, const FString& WeaponName, bool bKnock, bool bFriendlyFire, int32 KillCount, EKillMessageRole InRole);
	
private:
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputMappingContext> IMC_Character;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameCommonUserWidget> PrimaryLayoutClass;
	
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UBaseCommonActivatableWidget> InitialHudClass;
};
