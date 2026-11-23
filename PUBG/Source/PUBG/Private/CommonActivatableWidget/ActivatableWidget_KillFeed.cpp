// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_KillFeed.h"

#include "CommonListView.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"
#include "Object/KillFeedEntryData.h"

void UActivatableWidget_KillFeed::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (UUIGameInstanceSubsystem* UISub = UUIGameInstanceSubsystem::Get(this))
	{
		UISub->RegisterEmbeddedWidget(this);
	}
}

void UActivatableWidget_KillFeed::AddKill(const FString& KillerName, const FString& VictimName, EKillFeedType FeedType)
{
	UKillFeedEntryData* Data = NewObject<UKillFeedEntryData>(this);
	Data->KillerName = KillerName;
	Data->VictimName = VictimName;
	Data->FeedType = FeedType;

	FeedItems.Insert(Data, 0);
	while (FeedItems.Num() > MaxEntries)
	{
		FeedItems.RemoveAt(FeedItems.Num() - 1);
	}
	KillListView->SetListItems(FeedItems);

	FTimerHandle RemoveHandle;
	TWeakObjectPtr<UKillFeedEntryData> WeakData = Data;
	GetWorld()->GetTimerManager().SetTimer(RemoveHandle,
		FTimerDelegate::CreateWeakLambda(this, [this, WeakData]()
		{
			if (WeakData.IsValid())
			{
				FeedItems.Remove(WeakData.Get());
				KillListView->SetListItems(FeedItems);
			}
		}), EntryLifetime, false);
}
