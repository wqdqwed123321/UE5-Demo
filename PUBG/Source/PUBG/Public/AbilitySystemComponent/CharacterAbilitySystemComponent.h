// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "CharacterAbilitySystemComponent.generated.h"

DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnHealStartedDelegate, float, UseTime, float, HealAmount, float, MaxHealthPercentage);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealCompletedDelegate);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnHealCancelledDelegate);

/**
 * 
 */
UCLASS()
class PUBG_API UCharacterAbilitySystemComponent : public UAbilitySystemComponent
{
	GENERATED_BODY()
	
public:
	UCharacterAbilitySystemComponent();
	
public:
	void ApplyAbilities();
	void ApplyEffects();
	
public:
	UFUNCTION(Client, Reliable)
	void Client_OnHealStarted(float InUseTime, float InHealAmount, float InMaxHealthPercentage);
	
	UFUNCTION(Client, Reliable)
	void Client_OnHealFinished(bool bSuccess);
	
public:
	UPROPERTY(BlueprintAssignable)
	FOnHealStartedDelegate OnHealStartedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnHealCompletedDelegate OnHealCompletedDelegate;

	UPROPERTY(BlueprintAssignable)
	FOnHealCancelledDelegate OnHealCancelledDelegate;
	
private:
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UGameplayAbility>> Abilities;
	
	UPROPERTY(EditDefaultsOnly)
	TArray<TSubclassOf<UGameplayEffect>> Effects;
};
