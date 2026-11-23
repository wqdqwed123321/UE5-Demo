// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_KillFeed.generated.h"

class UCommonListView;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_KillFeed : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
protected:
	virtual void NativeConstruct() override;

public:
	void AddKill(const FString& KillerName, const FString& VictimName, EKillFeedType FeedType);
	
private:
	UPROPERTY(EditAnywhere)
	int32 MaxEntries = 5;
	
	UPROPERTY(EditAnywhere)
	float EntryLifetime = 5.f;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonListView> KillListView;
	
private:
	UPROPERTY()
	TArray<TObjectPtr<UObject>> FeedItems;
};
