// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUserWidget/CommonUserWidget_KillFeedItem.h"

#include "CommonTextBlock.h"
#include "Object/KillFeedEntryData.h"

void UCommonUserWidget_KillFeedItem::NativeOnListItemObjectSet(UObject* ListItemObject)
{
	const UKillFeedEntryData* Data = Cast<UKillFeedEntryData>(ListItemObject);
	if (!Data)
	{
		return;
	}

	Text_Killer->SetText(FText::FromString(Data->KillerName));
	Text_Victim->SetText(FText::FromString(Data->VictimName));
	const bool bKnock = (Data->FeedType == EKillFeedType::Knock);
	Text_Action->SetText(bKnock ? NSLOCTEXT("KillFeed", "Knock", "击倒了") : NSLOCTEXT("KillFeed", "Eliminate", "淘汰了"));
}
