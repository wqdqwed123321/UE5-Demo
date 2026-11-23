// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystemInterface.h"
#include "GenericTeamAgentInterface.h"
#include "PUBGType.h"
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
class PUBG_API AGlobalPlayerState : public APlayerState, public IAbilitySystemInterface, public IGenericTeamAgentInterface
{
	GENERATED_BODY()
	
public:
	AGlobalPlayerState();
	
public:
	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;
	virtual void GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const override;
	UCharacterAttributeSet* GetCharacterAttributeSet() const;
	virtual FGenericTeamId GetGenericTeamId() const override { return TeamId; }
	virtual void SetGenericTeamId(const FGenericTeamId& InTeamId) override { TeamId = InTeamId; }
	FGenericTeamId GetTeamId() const { return TeamId; }
	void SetTeamId(FGenericTeamId InTeamId) { TeamId = InTeamId; }
	virtual void BeginPlay() override;
	int32 GetKillCount() const { return KillCount; }
	void AddKillCount() { ++KillCount; }
	
public:
	UFUNCTION(NetMulticast, Unreliable)
	void Multicast_KillFeed(const FString& KillerName, const FString& VictimName, EKillFeedType FeedType);
	
private:
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UCharacterAbilitySystemComponent> CharacterAbilitySystemComponent;
	
	UPROPERTY()
	TObjectPtr<UCharacterAttributeSet> CharacterAttributeSet;
	
	UPROPERTY(VisibleDefaultsOnly)
	TObjectPtr<UBackpackManagerComponent> BackpackManagerComponent;
	
private:
	UPROPERTY(Replicated)
	FGenericTeamId TeamId = FGenericTeamId::NoTeam;
	
private:
	int32 KillCount = 0;
};
