#pragma once

#include "CoreMinimal.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "PUBGFastArray.generated.h"

class UBackpackManagerComponent;
class UBackpackItemInstance;

USTRUCT(BlueprintType)
struct FBackpackSlotData : public FFastArraySerializerItem
{
	GENERATED_BODY()
	
	UPROPERTY()
	TObjectPtr<UBackpackItemInstance> ItemInstance = nullptr;

	void PostReplicatedAdd(const struct FBackpackArrayData& InArraySerializer);
	void PostReplicatedChange(const struct FBackpackArrayData& InArraySerializer);
	void PreReplicatedRemove(const struct FBackpackArrayData& InArraySerializer);
};

USTRUCT(BlueprintType)
struct FBackpackArrayData : public FFastArraySerializer
{
	GENERATED_BODY()

	UPROPERTY()
	TArray<FBackpackSlotData> Entries;
	
	UPROPERTY(NotReplicated)
	TObjectPtr<UBackpackManagerComponent> OwnerComponent = nullptr;

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FastArrayDeltaSerialize<FBackpackSlotData, FBackpackArrayData>(Entries, DeltaParms, *this);
	}
};

template<>
struct TStructOpsTypeTraits<FBackpackArrayData> : public TStructOpsTypeTraitsBase2<FBackpackArrayData>
{
	enum
	{
		WithNetDeltaSerializer = true,
	};
};