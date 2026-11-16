// Fill out your copyright notice in the Description page of Project Settings.


#include "UserWidget/UserWidget_DragVisual.h"

#include "Components/Image.h"
#include "Object/BackpackItemDefinition.h"
#include "Object/BackpackItemInstance.h"

void UUserWidget_DragVisual::SetupEquipmentSlot(UBackpackItemInstance* EquipmentItem)
{
	if (!Image_Picture) return;
	
	if (EquipmentItem && EquipmentItem->Definition && EquipmentItem->Definition->Icon)
	{
		Image_Picture->SetBrushFromTexture(EquipmentItem->Definition->Icon);
		Image_Picture->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 1.f));
	}
	else
	{
		Image_Picture->SetBrushFromTexture(nullptr);
		Image_Picture->SetColorAndOpacity(FLinearColor(1.f, 1.f, 1.f, 0.f)); 
	}
}
