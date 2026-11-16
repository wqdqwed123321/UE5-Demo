// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PUBGType.h"
#include "CommonActivatableWidget/BaseCommonActivatableWidget.h"
#include "ActivatableWidget_BackpackList.generated.h"

class APickupItem;
class UBackpackManagerComponent;
class UBackpackItemInstance;
class UCommonListView;
class UBorder;

UCLASS()
class PUBG_API UActivatableWidget_BackpackList : public UBaseCommonActivatableWidget
{
	GENERATED_BODY()
	
public:
	virtual void NativeDestruct() override;
	virtual bool NativeOnDragOver(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	virtual bool NativeOnDrop(const FGeometry& InGeometry, const FDragDropEvent& InDragDropEvent, UDragDropOperation* InOperation) override;
	
public:
	void InitBackpackList();
	
protected:
	UFUNCTION()
	void OnPickupRangeChanged(APickupItem* Item);
	
	UFUNCTION()
	void OnInventoryChangedCallback();
	
protected:
	void RefreshList();
	void SetupBackpackList(const TArray<UObject*>& Items);
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UCommonListView> CommonListView_InventoryItems;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Border;
	
private:
	UPROPERTY(EditAnywhere)
	EBackpackListMode BackpackListMode;
	
	UPROPERTY()
	TObjectPtr<UBackpackManagerComponent> CachedManager;
};
