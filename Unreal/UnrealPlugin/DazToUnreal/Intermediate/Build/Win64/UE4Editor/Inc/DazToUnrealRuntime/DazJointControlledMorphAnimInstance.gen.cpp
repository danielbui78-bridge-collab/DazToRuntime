// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DazToUnrealRuntime/Public/DazJointControlledMorphAnimInstance.h"
#include "Engine/Classes/Components/SkeletalMeshComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDazJointControlledMorphAnimInstance() {}
// Cross Module References
	DAZTOUNREALRUNTIME_API UEnum* Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver();
	UPackage* Z_Construct_UPackage__Script_DazToUnrealRuntime();
	DAZTOUNREALRUNTIME_API UEnum* Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceRotationOrder();
	DAZTOUNREALRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FAnimInstanceProxy();
	DAZTOUNREALRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDazJointControlLink();
	DAZTOUNREALRUNTIME_API UScriptStruct* Z_Construct_UScriptStruct_FDazJointControlLinkKey();
	DAZTOUNREALRUNTIME_API UClass* Z_Construct_UClass_UDazJointControlledMorphAnimInstance_NoRegister();
	DAZTOUNREALRUNTIME_API UClass* Z_Construct_UClass_UDazJointControlledMorphAnimInstance();
	ENGINE_API UClass* Z_Construct_UClass_UAnimInstance();
// End Cross Module References
	static UEnum* EDazMorphAnimInstanceDriver_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("EDazMorphAnimInstanceDriver"));
		}
		return Singleton;
	}
	template<> DAZTOUNREALRUNTIME_API UEnum* StaticEnum<EDazMorphAnimInstanceDriver>()
	{
		return EDazMorphAnimInstanceDriver_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDazMorphAnimInstanceDriver(EDazMorphAnimInstanceDriver_StaticEnum, TEXT("/Script/DazToUnrealRuntime"), TEXT("EDazMorphAnimInstanceDriver"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver_Hash() { return 3773492123U; }
	UEnum* Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnrealRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDazMorphAnimInstanceDriver"), 0, Get_Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDazMorphAnimInstanceDriver::None", (int64)EDazMorphAnimInstanceDriver::None },
				{ "EDazMorphAnimInstanceDriver::RotationX", (int64)EDazMorphAnimInstanceDriver::RotationX },
				{ "EDazMorphAnimInstanceDriver::RotationY", (int64)EDazMorphAnimInstanceDriver::RotationY },
				{ "EDazMorphAnimInstanceDriver::RotationZ", (int64)EDazMorphAnimInstanceDriver::RotationZ },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
				{ "None.Name", "EDazMorphAnimInstanceDriver::None" },
				{ "RotationX.Name", "EDazMorphAnimInstanceDriver::RotationX" },
				{ "RotationY.Name", "EDazMorphAnimInstanceDriver::RotationY" },
				{ "RotationZ.Name", "EDazMorphAnimInstanceDriver::RotationZ" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
				nullptr,
				"EDazMorphAnimInstanceDriver",
				"EDazMorphAnimInstanceDriver",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
	static UEnum* EDazMorphAnimInstanceRotationOrder_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceRotationOrder, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("EDazMorphAnimInstanceRotationOrder"));
		}
		return Singleton;
	}
	template<> DAZTOUNREALRUNTIME_API UEnum* StaticEnum<EDazMorphAnimInstanceRotationOrder>()
	{
		return EDazMorphAnimInstanceRotationOrder_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EDazMorphAnimInstanceRotationOrder(EDazMorphAnimInstanceRotationOrder_StaticEnum, TEXT("/Script/DazToUnrealRuntime"), TEXT("EDazMorphAnimInstanceRotationOrder"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceRotationOrder_Hash() { return 3858012988U; }
	UEnum* Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceRotationOrder()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnrealRuntime();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EDazMorphAnimInstanceRotationOrder"), 0, Get_Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceRotationOrder_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EDazMorphAnimInstanceRotationOrder::Auto", (int64)EDazMorphAnimInstanceRotationOrder::Auto },
				{ "EDazMorphAnimInstanceRotationOrder::XYZ", (int64)EDazMorphAnimInstanceRotationOrder::XYZ },
				{ "EDazMorphAnimInstanceRotationOrder::XZY", (int64)EDazMorphAnimInstanceRotationOrder::XZY },
				{ "EDazMorphAnimInstanceRotationOrder::YXZ", (int64)EDazMorphAnimInstanceRotationOrder::YXZ },
				{ "EDazMorphAnimInstanceRotationOrder::YZX", (int64)EDazMorphAnimInstanceRotationOrder::YZX },
				{ "EDazMorphAnimInstanceRotationOrder::ZXY", (int64)EDazMorphAnimInstanceRotationOrder::ZXY },
				{ "EDazMorphAnimInstanceRotationOrder::ZYX", (int64)EDazMorphAnimInstanceRotationOrder::ZYX },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Auto.Name", "EDazMorphAnimInstanceRotationOrder::Auto" },
				{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
				{ "XYZ.Name", "EDazMorphAnimInstanceRotationOrder::XYZ" },
				{ "XZY.Name", "EDazMorphAnimInstanceRotationOrder::XZY" },
				{ "YXZ.Name", "EDazMorphAnimInstanceRotationOrder::YXZ" },
				{ "YZX.Name", "EDazMorphAnimInstanceRotationOrder::YZX" },
				{ "ZXY.Name", "EDazMorphAnimInstanceRotationOrder::ZXY" },
				{ "ZYX.Name", "EDazMorphAnimInstanceRotationOrder::ZYX" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
				nullptr,
				"EDazMorphAnimInstanceRotationOrder",
				"EDazMorphAnimInstanceRotationOrder",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FDazJointControlledMorphAnimInstanceProxy::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DAZTOUNREALRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("DazJointControlledMorphAnimInstanceProxy"), sizeof(FDazJointControlledMorphAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Hash());
	}
	return Singleton;
}
template<> DAZTOUNREALRUNTIME_API UScriptStruct* StaticStruct<FDazJointControlledMorphAnimInstanceProxy>()
{
	return FDazJointControlledMorphAnimInstanceProxy::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy(FDazJointControlledMorphAnimInstanceProxy::StaticStruct, TEXT("/Script/DazToUnrealRuntime"), TEXT("DazJointControlledMorphAnimInstanceProxy"), false, nullptr, nullptr);
static struct FScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlledMorphAnimInstanceProxy
{
	FScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlledMorphAnimInstanceProxy()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DazJointControlledMorphAnimInstanceProxy")),new UScriptStruct::TCppStructOps<FDazJointControlledMorphAnimInstanceProxy>);
	}
} ScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlledMorphAnimInstanceProxy;
	struct Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/** Proxy override for this UAnimInstance-derived class */" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
		{ "ToolTip", "Proxy override for this UAnimInstance-derived class" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDazJointControlledMorphAnimInstanceProxy>();
	}
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
		Z_Construct_UScriptStruct_FAnimInstanceProxy,
		&NewStructOps,
		"DazJointControlledMorphAnimInstanceProxy",
		sizeof(FDazJointControlledMorphAnimInstanceProxy),
		alignof(FDazJointControlledMorphAnimInstanceProxy),
		nullptr,
		0,
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnrealRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DazJointControlledMorphAnimInstanceProxy"), sizeof(FDazJointControlledMorphAnimInstanceProxy), Get_Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDazJointControlledMorphAnimInstanceProxy_Hash() { return 4008572007U; }
class UScriptStruct* FDazJointControlLink::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DAZTOUNREALRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FDazJointControlLink_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDazJointControlLink, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("DazJointControlLink"), sizeof(FDazJointControlLink), Get_Z_Construct_UScriptStruct_FDazJointControlLink_Hash());
	}
	return Singleton;
}
template<> DAZTOUNREALRUNTIME_API UScriptStruct* StaticStruct<FDazJointControlLink>()
{
	return FDazJointControlLink::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDazJointControlLink(FDazJointControlLink::StaticStruct, TEXT("/Script/DazToUnrealRuntime"), TEXT("DazJointControlLink"), false, nullptr, nullptr);
static struct FScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlLink
{
	FScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlLink()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DazJointControlLink")),new UScriptStruct::TCppStructOps<FDazJointControlLink>);
	}
} ScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlLink;
	struct Z_Construct_UScriptStruct_FDazJointControlLink_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Alpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Alpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Scalar_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Scalar;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_MorphName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SecondaryAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_SecondaryAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_SecondaryAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PrimaryAxis_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PrimaryAxis;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PrimaryAxis_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_BoneName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDazJointControlLink>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDazJointControlLinkKey, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Alpha_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, Alpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Alpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Alpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Scalar_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Scalar = { "Scalar", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, Scalar), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Scalar_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Scalar_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_MorphName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_MorphName = { "MorphName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, MorphName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_MorphName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_MorphName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis = { "SecondaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, SecondaryAxis), Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver, METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis = { "PrimaryAxis", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, PrimaryAxis), Z_Construct_UEnum_DazToUnrealRuntime_EDazMorphAnimInstanceDriver, METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_BoneName_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_BoneName = { "BoneName", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLink, BoneName), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_BoneName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_BoneName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDazJointControlLink_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Keys_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Alpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_Scalar,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_MorphName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_SecondaryAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_PrimaryAxis_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLink_Statics::NewProp_BoneName,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDazJointControlLink_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
		nullptr,
		&NewStructOps,
		"DazJointControlLink",
		sizeof(FDazJointControlLink),
		alignof(FDazJointControlLink),
		Z_Construct_UScriptStruct_FDazJointControlLink_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLink_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDazJointControlLink()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDazJointControlLink_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnrealRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DazJointControlLink"), sizeof(FDazJointControlLink), Get_Z_Construct_UScriptStruct_FDazJointControlLink_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDazJointControlLink_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDazJointControlLink_Hash() { return 2828277215U; }
class UScriptStruct* FDazJointControlLinkKey::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DAZTOUNREALRUNTIME_API uint32 Get_Z_Construct_UScriptStruct_FDazJointControlLinkKey_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FDazJointControlLinkKey, Z_Construct_UPackage__Script_DazToUnrealRuntime(), TEXT("DazJointControlLinkKey"), sizeof(FDazJointControlLinkKey), Get_Z_Construct_UScriptStruct_FDazJointControlLinkKey_Hash());
	}
	return Singleton;
}
template<> DAZTOUNREALRUNTIME_API UScriptStruct* StaticStruct<FDazJointControlLinkKey>()
{
	return FDazJointControlLinkKey::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FDazJointControlLinkKey(FDazJointControlLinkKey::StaticStruct, TEXT("/Script/DazToUnrealRuntime"), TEXT("DazJointControlLinkKey"), false, nullptr, nullptr);
static struct FScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlLinkKey
{
	FScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlLinkKey()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("DazJointControlLinkKey")),new UScriptStruct::TCppStructOps<FDazJointControlLinkKey>);
	}
} ScriptStruct_DazToUnrealRuntime_StaticRegisterNativesFDazJointControlLinkKey;
	struct Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MorphAlpha_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MorphAlpha;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BoneRotation_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BoneRotation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDazJointControlLinkKey>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_MorphAlpha_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_MorphAlpha = { "MorphAlpha", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLinkKey, MorphAlpha), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_MorphAlpha_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_MorphAlpha_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_BoneRotation_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_BoneRotation = { "BoneRotation", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FDazJointControlLinkKey, BoneRotation), METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_BoneRotation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_BoneRotation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_MorphAlpha,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::NewProp_BoneRotation,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
		nullptr,
		&NewStructOps,
		"DazJointControlLinkKey",
		sizeof(FDazJointControlLinkKey),
		alignof(FDazJointControlLinkKey),
		Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000201),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FDazJointControlLinkKey()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FDazJointControlLinkKey_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_DazToUnrealRuntime();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("DazJointControlLinkKey"), sizeof(FDazJointControlLinkKey), Get_Z_Construct_UScriptStruct_FDazJointControlLinkKey_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FDazJointControlLinkKey_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FDazJointControlLinkKey_Hash() { return 90498197U; }
	void UDazJointControlledMorphAnimInstance::StaticRegisterNativesUDazJointControlledMorphAnimInstance()
	{
	}
	UClass* Z_Construct_UClass_UDazJointControlledMorphAnimInstance_NoRegister()
	{
		return UDazJointControlledMorphAnimInstance::StaticClass();
	}
	struct Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ControlLinks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ControlLinks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ControlLinks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAnimInstance,
		(UObject* (*)())Z_Construct_UPackage__Script_DazToUnrealRuntime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "HideCategories", "AnimInstance" },
		{ "IncludePath", "DazJointControlledMorphAnimInstance.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks_MetaData[] = {
		{ "Category", "Animation" },
		{ "ModuleRelativePath", "Public/DazJointControlledMorphAnimInstance.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks = { "ControlLinks", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UDazJointControlledMorphAnimInstance, ControlLinks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks_Inner = { "ControlLinks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FDazJointControlLink, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::NewProp_ControlLinks_Inner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDazJointControlledMorphAnimInstance>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::ClassParams = {
		&UDazJointControlledMorphAnimInstance::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::PropPointers),
		0,
		0x009000A8u,
		METADATA_PARAMS(Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDazJointControlledMorphAnimInstance()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDazJointControlledMorphAnimInstance_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDazJointControlledMorphAnimInstance, 1654926881);
	template<> DAZTOUNREALRUNTIME_API UClass* StaticClass<UDazJointControlledMorphAnimInstance>()
	{
		return UDazJointControlledMorphAnimInstance::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDazJointControlledMorphAnimInstance(Z_Construct_UClass_UDazJointControlledMorphAnimInstance, &UDazJointControlledMorphAnimInstance::StaticClass, TEXT("/Script/DazToUnrealRuntime"), TEXT("UDazJointControlledMorphAnimInstance"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDazJointControlledMorphAnimInstance);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
