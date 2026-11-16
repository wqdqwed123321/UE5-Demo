// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_Equipment.generated.h"

class UActivatableWidget_CharacterEquipment;
class UBackpackManagerComponent;
class UActivatableWidget_ThrowableDetail;
class UActivatableWidget_WeaponDetail;
/**
 * 
 */
UCLASS()
class PUBG_API UActivatableWidget_Equipment : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	void InitEquipment();
	
protected:
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual bool NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
protected:
	UBackpackManagerComponent* GetBackpackComp() const;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_WeaponDetail> WB_WeaponItem_Primary;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_WeaponDetail> WB_WeaponItem_Secondary;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_WeaponDetail> WB_PistolItem;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_ThrowableDetail> WB_SmallWeaponItem_Melee;

	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_ThrowableDetail> WB_SmallWeaponItem_Throw;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UActivatableWidget_CharacterEquipment> CharacterEquipmentPanel;
};
