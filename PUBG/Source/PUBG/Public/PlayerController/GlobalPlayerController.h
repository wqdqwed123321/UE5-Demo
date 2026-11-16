// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
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
	
private:
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UInputMappingContext> IMC_Character;
	
	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGameCommonUserWidget> PrimaryLayoutClass;
	
	UPROPERTY(EditDefaultsOnly)
	TSoftClassPtr<UBaseCommonActivatableWidget> InitialHudClass;
};
