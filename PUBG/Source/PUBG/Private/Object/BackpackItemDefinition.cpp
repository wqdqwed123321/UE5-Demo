// Fill out your copyright notice in the Description page of Project Settings.


#include "Object/BackpackItemDefinition.h"

#include "Object/BackpackItemFragment.h"

UBackpackItemFragment* UBackpackItemDefinition::FindBackpackItemFragmentByClass(
	TSubclassOf<UBackpackItemDefinition> ItemDefinitionClass, TSubclassOf<UBackpackItemFragment> ItemFragmentClass)
{
	if (!(ItemDefinitionClass && ItemFragmentClass)) return nullptr;

	const UBackpackItemDefinition* ItemDefinition = ItemDefinitionClass.GetDefaultObject();
	
	for (TObjectPtr<UBackpackItemFragment> ItemFragment : ItemDefinition->Fragments)
	{
		if (ItemFragment.IsA(ItemFragmentClass))
		{
			return ItemFragment;
		}
	}
	
	return nullptr;
}
