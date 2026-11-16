// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "Blueprint/IUserObjectListEntry.h"
#include "CommonUserWidget_BackpackItem.generated.h"

class UUserWidget_DragVisual;
class UHorizontalBox;
class UImage;
class UBorder;
class UTextBlock;
/**
 * 
 */
UCLASS()
class PUBG_API UCommonUserWidget_BackpackItem : public UCommonUserWidget, public IUserObjectListEntry
{
	GENERATED_BODY()
	
public:
	void RefreshItemUI();
	
protected:
	virtual void NativeOnListItemObjectSet(UObject* ListItemObject) override;
	virtual void NativeOnMouseEnter(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnMouseLeave(const FPointerEvent& InMouseEvent) override;
	virtual void NativeOnDragDetected(const FGeometry& InGeometry, const FPointerEvent& InMouseEvent, UDragDropOperation*& OutOperation) override;
	
private:
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UImage> Image_Picture;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Name;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UTextBlock> TextBlock_Number;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UBorder> Border_Item;
	
	UPROPERTY(meta = (BindWidget))
	TObjectPtr<UHorizontalBox> HorizontalBox_Image;
	
private:
	UPROPERTY()
	TObjectPtr<UObject> CachedListItemObject;
	
	UPROPERTY(EditAnywhere)
	TSubclassOf<UUserWidget_DragVisual> DragVisualClass;
};
