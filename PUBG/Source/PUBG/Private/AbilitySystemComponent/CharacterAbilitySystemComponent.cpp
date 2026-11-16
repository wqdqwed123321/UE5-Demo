// Fill out your copyright notice in the Description page of Project Settings.


#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"

UCharacterAbilitySystemComponent::UCharacterAbilitySystemComponent()
{
	
}

void UCharacterAbilitySystemComponent::ApplyAbilities()
{
	for (const TSubclassOf<UGameplayAbility>& Ability : Abilities)
	{
		if (!Ability) continue;
		GiveAbility(FGameplayAbilitySpec(Ability));
	}
}

void UCharacterAbilitySystemComponent::ApplyEffects()
{
	for (const TSubclassOf<UGameplayEffect>& Effect : Effects)
	{
		if (!Effect) continue;
		FGameplayEffectSpecHandle GameplayEffectSpecHandle = MakeOutgoingSpec(Effect, 1, MakeEffectContext());
		if (GameplayEffectSpecHandle.IsValid())
		{
			ApplyGameplayEffectSpecToSelf(*GameplayEffectSpecHandle.Data);
		}
	}
}

void UCharacterAbilitySystemComponent::Client_OnHealStarted_Implementation(float InUseTime, float InHealAmount,
	float InMaxHealthPercentage)
{
	OnHealStartedDelegate.Broadcast(InUseTime, InHealAmount, InMaxHealthPercentage);
}

void UCharacterAbilitySystemComponent::Client_OnHealFinished_Implementation(bool bSuccess)
{
	if (bSuccess)
	{
		OnHealCompletedDelegate.Broadcast();
	}
	else
	{
		OnHealCancelledDelegate.Broadcast();
	}
}
