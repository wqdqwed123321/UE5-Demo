// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DragDropOperation/BackpackDragDropOperation.h"

#ifdef PUBG_BackpackDragDropOperation_generated_h
#error "BackpackDragDropOperation.generated.h already included, missing '#pragma once' in BackpackDragDropOperation.h"
#endif
#define PUBG_BackpackDragDropOperation_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UBackpackDragDropOperation ***********************************************
PUBG_API UClass* Z_Construct_UClass_UBackpackDragDropOperation_NoRegister();

#define FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBackpackDragDropOperation(); \
	friend struct Z_Construct_UClass_UBackpackDragDropOperation_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend PUBG_API UClass* Z_Construct_UClass_UBackpackDragDropOperation_NoRegister(); \
public: \
	DECLARE_CLASS2(UBackpackDragDropOperation, UDragDropOperation, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/PUBG"), Z_Construct_UClass_UBackpackDragDropOperation_NoRegister) \
	DECLARE_SERIALIZER(UBackpackDragDropOperation)


#define FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h_16_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBackpackDragDropOperation(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UBackpackDragDropOperation(UBackpackDragDropOperation&&) = delete; \
	UBackpackDragDropOperation(const UBackpackDragDropOperation&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBackpackDragDropOperation); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBackpackDragDropOperation); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBackpackDragDropOperation) \
	NO_API virtual ~UBackpackDragDropOperation();


#define FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h_13_PROLOG
#define FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h_16_INCLASS_NO_PURE_DECLS \
	FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UBackpackDragDropOperation;

// ********** End Class UBackpackDragDropOperation *************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_PUBG_Source_PUBG_Public_DragDropOperation_BackpackDragDropOperation_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
