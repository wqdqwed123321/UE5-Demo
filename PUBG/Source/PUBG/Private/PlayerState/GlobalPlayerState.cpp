// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerState/GlobalPlayerState.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemComponent/CharacterAbilitySystemComponent.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "AttributeSet/CharacterAttributeSet.h"
#include "CommonActivatableWidget/ActivatableWidget_KillFeed.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"
#include "Net/UnrealNetwork.h"

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

void AGlobalPlayerState::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME(AGlobalPlayerState, TeamId);
}

UCharacterAttributeSet* AGlobalPlayerState::GetCharacterAttributeSet() const
{
	return CharacterAttributeSet;
}

void AGlobalPlayerState::BeginPlay()
{
	Super::BeginPlay();
	
}

void AGlobalPlayerState::Multicast_KillFeed_Implementation(const FString& KillerName, const FString& VictimName,
	EKillFeedType FeedType)
{
	if (UUIGameInstanceSubsystem* UISub = UUIGameInstanceSubsystem::Get(this))
	{
		if (UActivatableWidget_KillFeed* KillFeed = UISub->GetEmbeddedWidget<UActivatableWidget_KillFeed>())
		{
			KillFeed->AddKill(KillerName, VictimName, FeedType);
		}
	}
}

