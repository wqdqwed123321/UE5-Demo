// Fill out your copyright notice in the Description page of Project Settings.


#include "GameMode/PlayGameMode.h"

#include "PlayerState/GlobalPlayerState.h"

void APlayGameMode::PostLogin(APlayerController* NewPlayer)
{
	Super::PostLogin(NewPlayer);
	
	if (AGlobalPlayerState* PS = NewPlayer->GetPlayerState<AGlobalPlayerState>())
	{
		constexpr int32 MaxTeamSize = 2;
		const uint8 TeamIndex = static_cast<uint8>(NextPlayerSlot / MaxTeamSize) + 1;
		PS->SetTeamId(FGenericTeamId(TeamIndex));
		NextPlayerSlot++;
	}
}
