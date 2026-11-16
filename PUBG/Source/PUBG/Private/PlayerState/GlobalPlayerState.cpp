// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerState/GlobalPlayerState.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "AttributeSet/CharacterAttributeSet.h"

AGlobalPlayerState::AGlobalPlayerState()
{
	CharacterAbilitySystemComponent = CreateDefaultSubobject<UCharacterAbilitySystemComponent>(TEXT("CharacterAbilitySystemComponent"));
	CharacterAbilitySystemComponent->SetIsReplicated(true);
	CharacterAbilitySystemComponent->SetReplicationMode(EGameplayEffectReplicationMode::Mixed);
	
	CharacterAttributeSet = CreateDefaultSubobject<UCharacterAttributeSet>(TEXT("CharacterAttributeSet"));
	
	BackpackManagerComponent = CreateDefaultSubobject<UBackpackManagerComponent>(TEXT("BackpackManagerComponent"));
}

UAbilitySystemComponent* AGlobalPlayerState::GetAbilitySystemComponent() const
{
	return CharacterAbilitySystemComponent;
}

UCharacterAttributeSet* AGlobalPlayerState::GetCharacterAttributeSet() const
{
	return CharacterAttributeSet;
}
