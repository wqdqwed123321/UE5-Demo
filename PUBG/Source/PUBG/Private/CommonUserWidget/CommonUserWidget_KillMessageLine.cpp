// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonUserWidget/CommonUserWidget_KillMessageLine.h"

#include "Components/TextBlock.h"

void UCommonUserWidget_KillMessageLine::SetupLine(const FString& KillerName, const FString& VictimName, const FString& WeaponName, bool bKnock, bool bFriendlyFire, EKillMessageRole Role)
{
	switch (Role)
	{
	case EKillMessageRole::Killer:
		Text_Killer->SetText(FText::FromString(TEXT("你")));
		Text_Victim->SetText(FText::FromString(TEXT(" ") + VictimName));
		break;
	case EKillMessageRole::Victim:
		Text_Killer->SetText(FText::FromString(KillerName));
		Text_Victim->SetText(FText::FromString(TEXT(" 你")));
		break;
	case EKillMessageRole::Teammate:
	default:
		Text_Killer->SetText(FText::FromString(KillerName));
		Text_Victim->SetText(FText::FromString(TEXT(" ") + VictimName));
		break;
	}
	
	Text_Weapon->SetText(WeaponName.IsEmpty() ? FText::GetEmpty() : FText::FromString(FString::Printf(TEXT("用%s"), *WeaponName)));
	
	Text_Action->SetText(bKnock ? FText::FromString(TEXT("击倒了")) : FText::FromString(TEXT("淘汰了")));
	Text_Action->SetColorAndOpacity(FSlateColor(FLinearColor(1.f, 0.35f, 0.1f, 1.f)));
}
