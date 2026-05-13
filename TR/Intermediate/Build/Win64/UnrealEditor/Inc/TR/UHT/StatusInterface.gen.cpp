// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TR/StatusInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeStatusInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
TR_API UClass* Z_Construct_UClass_UStatusEffectReceiver();
TR_API UClass* Z_Construct_UClass_UStatusEffectReceiver_NoRegister();
TR_API UEnum* Z_Construct_UEnum_TR_EStatusEffectType();
UPackage* Z_Construct_UPackage__Script_TR();
// End Cross Module References

// Begin Enum EStatusEffectType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EStatusEffectType;
static UEnum* EStatusEffectType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EStatusEffectType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EStatusEffectType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_TR_EStatusEffectType, (UObject*)Z_Construct_UPackage__Script_TR(), TEXT("EStatusEffectType"));
	}
	return Z_Registration_Info_UEnum_EStatusEffectType.OuterSingleton;
}
template<> TR_API UEnum* StaticEnum<EStatusEffectType>()
{
	return EStatusEffectType_StaticEnum();
}
struct Z_Construct_UEnum_TR_EStatusEffectType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Down.Name", "EStatusEffectType::Down" },
		{ "Electric.Name", "EStatusEffectType::Electric" },
		{ "ModuleRelativePath", "StatusInterface.h" },
		{ "Slow.Name", "EStatusEffectType::Slow" },
		{ "Stun.Name", "EStatusEffectType::Stun" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EStatusEffectType::Stun", (int64)EStatusEffectType::Stun },
		{ "EStatusEffectType::Slow", (int64)EStatusEffectType::Slow },
		{ "EStatusEffectType::Down", (int64)EStatusEffectType::Down },
		{ "EStatusEffectType::Electric", (int64)EStatusEffectType::Electric },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_TR_EStatusEffectType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_TR,
	nullptr,
	"EStatusEffectType",
	"EStatusEffectType",
	Z_Construct_UEnum_TR_EStatusEffectType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_TR_EStatusEffectType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_TR_EStatusEffectType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_TR_EStatusEffectType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_TR_EStatusEffectType()
{
	if (!Z_Registration_Info_UEnum_EStatusEffectType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EStatusEffectType.InnerSingleton, Z_Construct_UEnum_TR_EStatusEffectType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EStatusEffectType.InnerSingleton;
}
// End Enum EStatusEffectType

// Begin Interface UStatusEffectReceiver Function ApplyStatusEffect
struct StatusEffectReceiver_eventApplyStatusEffect_Parms
{
	EStatusEffectType EffectType;
};
void IStatusEffectReceiver::ApplyStatusEffect(EStatusEffectType EffectType)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyStatusEffect instead.");
}
static FName NAME_UStatusEffectReceiver_ApplyStatusEffect = FName(TEXT("ApplyStatusEffect"));
void IStatusEffectReceiver::Execute_ApplyStatusEffect(UObject* O, EStatusEffectType EffectType)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UStatusEffectReceiver::StaticClass()));
	StatusEffectReceiver_eventApplyStatusEffect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UStatusEffectReceiver_ApplyStatusEffect);
	if (Func)
	{
		Parms.EffectType=EffectType;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Effect Type" },
		{ "ModuleRelativePath", "StatusInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::NewProp_EffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(StatusEffectReceiver_eventApplyStatusEffect_Parms, EffectType), Z_Construct_UEnum_TR_EStatusEffectType, METADATA_PARAMS(0, nullptr) }; // 2104975117
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::NewProp_EffectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::NewProp_EffectType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UStatusEffectReceiver, nullptr, "ApplyStatusEffect", nullptr, nullptr, Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::PropPointers), sizeof(StatusEffectReceiver_eventApplyStatusEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(StatusEffectReceiver_eventApplyStatusEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UStatusEffectReceiver Function ApplyStatusEffect

// Begin Interface UStatusEffectReceiver
void UStatusEffectReceiver::StaticRegisterNativesUStatusEffectReceiver()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UStatusEffectReceiver);
UClass* Z_Construct_UClass_UStatusEffectReceiver_NoRegister()
{
	return UStatusEffectReceiver::StaticClass();
}
struct Z_Construct_UClass_UStatusEffectReceiver_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "StatusInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UStatusEffectReceiver_ApplyStatusEffect, "ApplyStatusEffect" }, // 2261885429
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IStatusEffectReceiver>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UStatusEffectReceiver_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_TR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectReceiver_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UStatusEffectReceiver_Statics::ClassParams = {
	&UStatusEffectReceiver::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001040A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UStatusEffectReceiver_Statics::Class_MetaDataParams), Z_Construct_UClass_UStatusEffectReceiver_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UStatusEffectReceiver()
{
	if (!Z_Registration_Info_UClass_UStatusEffectReceiver.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UStatusEffectReceiver.OuterSingleton, Z_Construct_UClass_UStatusEffectReceiver_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UStatusEffectReceiver.OuterSingleton;
}
template<> TR_API UClass* StaticClass<UStatusEffectReceiver>()
{
	return UStatusEffectReceiver::StaticClass();
}
UStatusEffectReceiver::UStatusEffectReceiver(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UStatusEffectReceiver);
UStatusEffectReceiver::~UStatusEffectReceiver() {}
// End Interface UStatusEffectReceiver

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EStatusEffectType_StaticEnum, TEXT("EStatusEffectType"), &Z_Registration_Info_UEnum_EStatusEffectType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2104975117U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UStatusEffectReceiver, UStatusEffectReceiver::StaticClass, TEXT("UStatusEffectReceiver"), &Z_Registration_Info_UClass_UStatusEffectReceiver, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UStatusEffectReceiver), 4214545701U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_1447449574(TEXT("/Script/TR"),
	Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_StatusInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
