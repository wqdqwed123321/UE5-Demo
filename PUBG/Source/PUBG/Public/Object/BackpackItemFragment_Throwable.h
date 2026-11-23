// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackpackItemFragment.h"
#include "BackpackItemFragment_Throwable.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UBackpackItemFragment_Throwable : public UBackpackItemFragment
{
	GENERATED_BODY()
	
public:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "高抛起手蒙太奇"))
	TObjectPtr<UAnimMontage> CookMontage_Overhand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "低抛起手蒙太奇"))
	TObjectPtr<UAnimMontage> CookMontage_Underhand;
	
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "高抛出手蒙太奇"))
	TObjectPtr<UAnimMontage> ThrowMontage_Overhand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "低抛出手蒙太奇"))
	TObjectPtr<UAnimMontage> ThrowMontage_Underhand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "引信时间(秒)"))
	float FuseTime = 5.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "高抛初速(m/s)"))
	float ThrowSpeed_Overhand = 18.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (DisplayName = "低抛初速(m/s)"))
	float ThrowSpeed_Underhand = 8.f;
};
