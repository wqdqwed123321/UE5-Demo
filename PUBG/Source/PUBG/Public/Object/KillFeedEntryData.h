// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "UObject/NoExportTypes.h"
#include "KillFeedEntryData.generated.h"

/**
 * 
 */
UCLASS()
class PUBG_API UKillFeedEntryData : public UObject
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadOnly)
	FString KillerName;
	
	UPROPERTY(BlueprintReadOnly)
	FString VictimName;
	
	UPROPERTY(BlueprintReadOnly)
	EKillFeedType FeedType = EKillFeedType::Eliminate;
};
