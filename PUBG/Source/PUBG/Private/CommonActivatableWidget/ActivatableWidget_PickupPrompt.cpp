// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_PickupPrompt.h"

#include "CommonTextBlock.h"
#include "Actor/PickupItem.h"
#include "ActorComponent/BackpackManagerComponent.h"
#include "Character/PlayerCharacter.h"
#include "Components/Overlay.h"
#include "Object/BackpackItemDefinition.h"
#include "PlayerState/GlobalPlayerState.h"

void UActivatableWidget_PickupPrompt::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	TraceAccumulator += InDeltaTime;
	if (TraceAccumulator >= 0.1f)
	{
		TraceAccumulator = 0.f;
		RefreshPrompt();
	}
}

void UActivatableWidget_PickupPrompt::RefreshPrompt()
{
	APlayerCharacter* Char = Cast<APlayerCharacter>(GetOwningPlayerPawn());
	APickupItem* Item = Char ? Char->GetPickupItemUnderCrosshair() : nullptr;

	if (!Item || !Item->ItemDefinition)
	{
		CurrentItem = nullptr;
		Overlay->SetVisibility(ESlateVisibility::Collapsed);
		return;
	}

	if (Item != CurrentItem.Get())
	{
		CurrentItem = Item;
		UBackpackItemDefinition* Def = Item->ItemDefinition.GetDefaultObject();
		
		FString Action = TEXT("拾取");
		switch (Def->ItemType)
		{
		case EItemType::Weapon:
		case EItemType::MeleeWeapon:
		case EItemType::Throwable:
		case EItemType::Equipment:
			Action = TEXT("装备");
			break;
		case EItemType::Attachment:
			if (AGlobalPlayerState* PS = Char->GetPlayerState<AGlobalPlayerState>())
			{
				if (UBackpackManagerComponent* Manager = PS->FindComponentByClass<UBackpackManagerComponent>())
				{
					if (Manager->CanAutoEquipAttachment(Def))
					{
						Action = TEXT("装备");
					}
				}
			}
			break;
		default:
			break;
		}

		Text_Action->SetText(FText::FromString(Action));
		Text_ItemName->SetText(Def->ItemName);
	}

	Overlay->SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}
