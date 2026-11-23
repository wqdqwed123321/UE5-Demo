// Fill out your copyright notice in the Description page of Project Settings.

#include "AttributeSet/CharacterAttributeSet.h"

#include "GameplayEffectExtension.h"
#include "Character/PlayerCharacter.h"
#include "Net/UnrealNetwork.h"

void UCharacterAttributeSet::GetLifetimeReplicatedProps(TArray<class FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
	
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, MaxHealth, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, Health, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, MaxBackpackCapacity, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, BackpackCapacity, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, DownedHealth, COND_None, REPNOTIFY_Always)
	DOREPLIFETIME_CONDITION_NOTIFY(UCharacterAttributeSet, DownedMaxHealth, COND_None, REPNOTIFY_Always)
}

void UCharacterAttributeSet::PostGameplayEffectExecute(const struct FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);

	if (GetHealthAttribute() == Data.EvaluatedData.Attribute)
	{
		APlayerCharacter* Char = Cast<APlayerCharacter>(Data.Target.GetAvatarActor());
		
		if (Char && Char->GetLifeState() == ECharacterLifeState::Downed)
		{
			constexpr float DownedDamageMultiplier = 0.5f;
			const float Delta = Data.EvaluatedData.Magnitude * DownedDamageMultiplier;

			SetHealth(0.f);
			SetDownedHealth(FMath::Clamp(GetDownedHealth() + Delta, 0.f, GetDownedMaxHealth()));
			
			if (GetDownedHealth() <= 0.f)
			{
				if (UAbilitySystemComponent* SourceASC = Data.EffectSpec.GetContext().GetInstigatorAbilitySystemComponent())
				{
					if (APawn* InstigatorPawn = Cast<APawn>(SourceASC->GetAvatarActor()))
					{
						Char->SetLastKillerPS(InstigatorPawn->GetPlayerState());
					}
				}
				
				Char->HandleHealthZero();
			}
			return;
		}

		SetHealth(FMath::Clamp(GetHealth(), 0.f, GetMaxHealth()));
		if (GetHealth() <= 0.f && Char)
		{
			if (UAbilitySystemComponent* SourceASC = Data.EffectSpec.GetContext().GetInstigatorAbilitySystemComponent())
			{
				if (APawn* InstigatorPawn = Cast<APawn>(SourceASC->GetAvatarActor()))
				{
					Char->SetLastKillerPS(InstigatorPawn->GetPlayerState());
				}
			}
			
			Char->HandleHealthZero();
		}
	}
	
	if (GetDownedHealthAttribute() == Data.EvaluatedData.Attribute)
	{
		SetDownedHealth(FMath::Clamp(GetDownedHealth(), 0.f, GetDownedMaxHealth()));
	}
}

void UCharacterAttributeSet::OnRep_Health(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, Health, OldValue);
}

void UCharacterAttributeSet::OnRep_MaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, MaxHealth, OldValue);
}

void UCharacterAttributeSet::OnRep_BackpackCapacity(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, BackpackCapacity, OldValue);
}

void UCharacterAttributeSet::OnRep_MaxBackpackCapacity(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, MaxBackpackCapacity, OldValue);
}

void UCharacterAttributeSet::OnRep_DownedHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, DownedHealth, OldValue);
}

void UCharacterAttributeSet::OnRep_DownedMaxHealth(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UCharacterAttributeSet, DownedMaxHealth, OldValue);
}