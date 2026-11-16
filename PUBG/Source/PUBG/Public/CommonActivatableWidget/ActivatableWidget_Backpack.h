// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_Backpack.generated.h"

class UActivatableWidget_Equipment;
class UActivatableWidget_BackpackList;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_Backpack : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	virtual TOptional<FUIInputConfig> GetDesiredInputConfig() const override;
	virtual void NativeOnDeactivated() override;
	virtual void NativeOnActivated() override;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_BackpackList> NearbyList;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_BackpackList> InventoryList;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_Equipment> EquipmentPanel;
};
