// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GameFramework/PlayerState.h"
#include "GlobalPlayerState.generated.h"

class UCharacterAbilitySystemComponent;
class UBackpackManagerComponent;
class UCharacterAttributeSet;
class UAbilitySystemComponent;
/**
 * 
 */
UCLASS()
class PUBG_API AGlobalPlayerState : public APlayerState, public IAbilitySystemInterface
{
	GENERATED_BODY()
	
public:
	AGlobalPlayerState();
	
public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	
	UCharacterAttributeSet* GetCharacterAttributeSet() const;
	
private:
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UCharacterAbilitySystemComponent> CharacterAbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UCharacterAttributeSet> CharacterAttributeSet;
	
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UBackpackManagerComponent> BackpackManagerComponent;
};
