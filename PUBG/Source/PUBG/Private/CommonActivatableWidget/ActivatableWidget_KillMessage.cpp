// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_KillMessage.h"

#include "CommonUserWidget/CommonUserWidget_KillMessageLine.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"
#include "Components/VerticalBoxSlot.h"
#include "GameInstanceSubsystem/UIGameInstanceSubsystem.h"

void UActivatableWidget_KillMessage::NativeConstruct()
{
	Super::NativeConstruct();
	
	if (UUIGameInstanceSubsystem* UISub = UUIGameInstanceSubsystem::Get(this))
	{
		UISub->RegisterEmbeddedWidget(this);
	}
}

void UActivatableWidget_KillMessage::InitMessage(const FString& KillerName, const FString& VictimName, const FString& WeaponName, bool bKnock, bool bFriendlyFire, int32 KillCount, EKillMessageRole Role)
{
	if (LineClass && Box_MessageLines)
	{
		UCommonUserWidget_KillMessageLine* Line = CreateWidget<UCommonUserWidget_KillMessageLine>(GetOwningPlayer(), LineClass);
		if (Line)
		{
			Line->SetupLine(KillerName, VictimName, WeaponName, bKnock, bFriendlyFire, Role);
			Box_MessageLines->AddChild(Line);
			
			if (UVerticalBoxSlot* LineSlot = Cast<UVerticalBoxSlot>(Line->Slot))
			{
				LineSlot->SetHorizontalAlignment(HAlign_Center);
			}
			
			while (Box_MessageLines->GetChildrenCount() > MaxLines)
			{
				Box_MessageLines->RemoveChildAt(0);
			}
			
			FTimerHandle RemoveHandle;
			TWeakObjectPtr<UCommonUserWidget_KillMessageLine> WeakLine = Line;
			GetWorld()->GetTimerManager().SetTimer(RemoveHandle,
				FTimerDelegate::CreateWeakLambda(this, [this, WeakLine]()
				{
					if (WeakLine.IsValid() && Box_MessageLines)
					{
						Box_MessageLines->RemoveChild(WeakLine.Get());
					}
				}), LineLifetime, false);
		}
	}
	
	if (Role == EKillMessageRole::Killer && Text_KillCount)
	{
		if (bFriendlyFire)
		{
			Text_KillCount->SetText(FText::FromString(TEXT("攻击队友")));
			Text_KillCount->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			
			GetWorld()->GetTimerManager().ClearTimer(CountHideTimer);
			GetWorld()->GetTimerManager().SetTimer(CountHideTimer,
				FTimerDelegate::CreateWeakLambda(this, [this]()
				{
					if (!Text_KillCount) return;
					if (LastKillCount > 0)
					{
						Text_KillCount->SetText(FText::FromString(FString::Printf(TEXT("%d 淘汰数"), LastKillCount)));
					}
					else
					{
						Text_KillCount->SetVisibility(ESlateVisibility::Collapsed);
					}
				}), LineLifetime, false);
		}
		else if (!bKnock && KillCount > 0)
		{
			LastKillCount = KillCount;
			Text_KillCount->SetText(FText::FromString(FString::Printf(TEXT("%d 淘汰数"), KillCount)));
			Text_KillCount->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
			
			GetWorld()->GetTimerManager().ClearTimer(CountHideTimer);
			GetWorld()->GetTimerManager().SetTimer(CountHideTimer,
				FTimerDelegate::CreateWeakLambda(this, [this]()
				{
					if (Text_KillCount)
					{
						Text_KillCount->SetVisibility(ESlateVisibility::Collapsed);
					}
				}), LineLifetime, false);
		}
	}
}
