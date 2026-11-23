// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemComponent.h"
#include "AttributeSet.h"
#include "CharacterAttributeSet.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UCharacterAttributeSet : public UAttributeSet
{
	GENERATED_BODY()
	
public:
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	
	virtual void PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data) override;
	
public:
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, MaxHealth)
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, Health)
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, MaxBackpackCapacity)
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, BackpackCapacity)
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, DownedMaxHealth)
	ATTRIBUTE_ACCESSORS_BASIC(UCharacterAttributeSet, DownedHealth)
	
protected:
	UFUNCTION()
	void OnRep_Health(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	void OnRep_MaxHealth(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	void OnRep_BackpackCapacity(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	void OnRep_MaxBackpackCapacity(const FGameplayAttributeData& OldValue);
	
	UFUNCTION()
	void OnRep_DownedHealth(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_DownedMaxHealth(const FGameplayAttributeData& OldValue);
	
private:
	UPROPERTY(ReplicatedUsing = OnRep_Health)
	FGameplayAttributeData Health;
	
	UPROPERTY(ReplicatedUsing = OnRep_MaxHealth)
	FGameplayAttributeData MaxHealth;
	
	UPROPERTY(ReplicatedUsing = OnRep_BackpackCapacity)
	FGameplayAttributeData BackpackCapacity;
	
	UPROPERTY(ReplicatedUsing = OnRep_MaxBackpackCapacity)
	FGameplayAttributeData MaxBackpackCapacity;
	
	UPROPERTY(ReplicatedUsing = OnRep_DownedHealth)
	FGameplayAttributeData DownedHealth;

	UPROPERTY(ReplicatedUsing = OnRep_DownedMaxHealth)
	FGameplayAttributeData DownedMaxHealth;
};
