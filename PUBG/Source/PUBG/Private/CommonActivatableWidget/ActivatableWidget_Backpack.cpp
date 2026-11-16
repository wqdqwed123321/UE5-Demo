// Fill out your copyright notice in the Description page of Project Settings.


#include "CommonActivatableWidget/ActivatableWidget_Backpack.h"

#include "CommonActivatableWidget/ActivatableWidget_BackpackList.h"
#include "CommonActivatableWidget/ActivatableWidget_Equipment.h"

TOptional<FUIInputConfig> UActivatableWidget_Backpack::GetDesiredInputConfig() const
{
	FUIInputConfig Config(ECommonInputMode::All, EMouseCaptureMode::NoCapture, false);
	Config.bIgnoreLookInput = true;
	Config.bIgnoreMoveInput  = false;
	
	return Config;
}

void UActivatableWidget_Backpack::NativeOnDeactivated()
{
	Super::NativeOnDeactivated();
	
}

void UActivatableWidget_Backpack::NativeOnActivated()
{
	Super::NativeOnActivated();
	
	NearbyList->InitBackpackList();
	InventoryList->InitBackpackList();
	EquipmentPanel->InitEquipment();
}
