// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "CharacterClimbVaultGA.generated.h"

class APlayerCharacter;
/**
 * 
 */
UCLASS()
class PUBG_API UCharacterClimbVaultGA : public UGameplayAbility
{
	GENERATED_BODY()
	
public:
	UCharacterClimbVaultGA();
	
public:
	virtual bool CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags = nullptr, const FGameplayTagContainer* TargetTags = nullptr, FGameplayTagContainer* OptionalRelevantTags = nullptr) const override;
	virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
	virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;
	
protected:
	UFUNCTION()
	void OnMontageFinished();
	
protected:
	bool DetectClimbTarget(const APlayerCharacter* Char, FVector& OutTop, FVector& OutTarget, TObjectPtr<UAnimMontage>& OutMontage) const;
	UAnimMontage* SelectTierMontage(float Height, UAnimMontage* Montage60, UAnimMontage* Montage120, UAnimMontage* Montage200) const;
	
private:
	UPROPERTY(EditDefaultsOnly)
	float MinHeight = 40.f;
	
	UPROPERTY(EditDefaultsOnly)
	float MaxHeight = 240.f;

	UPROPERTY(EditDefaultsOnly)
	float ClimbForwardDistance = 50.f;

	UPROPERTY(EditDefaultsOnly)
	FName WarpTargetName = TEXT("ClimbTarget");
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> VaultMontage60;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> VaultMontage120;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> VaultMontage200;
	
	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> ClimbMontage60;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> ClimbMontage120;

	UPROPERTY(EditDefaultsOnly)
	TObjectPtr<UAnimMontage> ClimbMontage200;
};
