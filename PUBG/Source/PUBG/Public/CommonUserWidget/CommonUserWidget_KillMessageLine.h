// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PUBGType.h"
#include "CommonUserWidget_KillMessageLine.generated.h"

class UTextBlock;

UCLASS()
class PUBG_API UCommonUserWidget_KillMessageLine : public UCommonUserWidget
{
	GENERATED_BODY()

public:
	void SetupLine(const FString& KillerName, const FString& VictimName, const FString& WeaponName, bool bKnock, bool bFriendlyFire, EKillMessageRole Role);

private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_Killer;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_Weapon;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_Action;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> Text_Victim;
};
