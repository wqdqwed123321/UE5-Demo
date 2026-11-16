#include "PUBGFastArray.h"

#include "ActorComponent/BackpackManagerComponent.h"

void FBackpackSlotData::PostReplicatedAdd(const struct FBackpackArrayData& InArraySerializer)
{
	if (InArraySerializer.OwnerComponent)
	{
		InArraySerializer.OwnerComponent->OnInventoryChanged.Broadcast();
	}
}

void FBackpackSlotData::PostReplicatedChange(const struct FBackpackArrayData& InArraySerializer)
{
	if (InArraySerializer.OwnerComponent)
	{
		InArraySerializer.OwnerComponent->OnInventoryChanged.Broadcast();
	}
}

void FBackpackSlotData::PreReplicatedRemove(const struct FBackpackArrayData& InArraySerializer)
{
	if (InArraySerializer.OwnerComponent)
	{
		InArraySerializer.OwnerComponent->OnInventoryChanged.Broadcast();
	}
}
