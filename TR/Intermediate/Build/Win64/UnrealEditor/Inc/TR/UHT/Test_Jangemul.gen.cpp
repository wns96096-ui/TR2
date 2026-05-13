// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TR/Test_Jangemul.h"
#include "Runtime/Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTest_Jangemul() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBoxComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
TR_API UClass* Z_Construct_UClass_ATest_Jangemul();
TR_API UClass* Z_Construct_UClass_ATest_Jangemul_NoRegister();
TR_API UEnum* Z_Construct_UEnum_TR_EStatusEffectType();
UPackage* Z_Construct_UPackage__Script_TR();
// End Cross Module References

// Begin Class ATest_Jangemul Function OnObstacleBeginOverlap
struct Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics
{
	struct Test_Jangemul_eventOnObstacleBeginOverlap_Parms
	{
		UPrimitiveComponent* OverlappedComponent;
		AActor* OtherActor;
		UPrimitiveComponent* OtherComp;
		int32 OtherBodyIndex;
		bool bFromSweep;
		FHitResult SweepResult;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Test_Jangemul.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverlappedComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OverlappedComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
	static void NewProp_bFromSweep_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SweepResult;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OverlappedComponent = { "OverlappedComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Test_Jangemul_eventOnObstacleBeginOverlap_Parms, OverlappedComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverlappedComponent_MetaData), NewProp_OverlappedComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Test_Jangemul_eventOnObstacleBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Test_Jangemul_eventOnObstacleBeginOverlap_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherComp_MetaData), NewProp_OtherComp_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Test_Jangemul_eventOnObstacleBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_bFromSweep_SetBit(void* Obj)
{
	((Test_Jangemul_eventOnObstacleBeginOverlap_Parms*)Obj)->bFromSweep = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Test_Jangemul_eventOnObstacleBeginOverlap_Parms), &Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Test_Jangemul_eventOnObstacleBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SweepResult_MetaData), NewProp_SweepResult_MetaData) }; // 4100991306
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OverlappedComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OtherActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OtherComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_OtherBodyIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_bFromSweep,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::NewProp_SweepResult,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ATest_Jangemul, nullptr, "OnObstacleBeginOverlap", nullptr, nullptr, Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::PropPointers), sizeof(Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::Test_Jangemul_eventOnObstacleBeginOverlap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::Function_MetaDataParams), Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::Test_Jangemul_eventOnObstacleBeginOverlap_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ATest_Jangemul::execOnObstacleBeginOverlap)
{
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComponent);
	P_GET_OBJECT(AActor,Z_Param_OtherActor);
	P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
	P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
	P_GET_UBOOL(Z_Param_bFromSweep);
	P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnObstacleBeginOverlap(Z_Param_OverlappedComponent,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
	P_NATIVE_END;
}
// End Class ATest_Jangemul Function OnObstacleBeginOverlap

// Begin Class ATest_Jangemul
void ATest_Jangemul::StaticRegisterNativesATest_Jangemul()
{
	UClass* Class = ATest_Jangemul::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnObstacleBeginOverlap", &ATest_Jangemul::execOnObstacleBeginOverlap },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ATest_Jangemul);
UClass* Z_Construct_UClass_ATest_Jangemul_NoRegister()
{
	return ATest_Jangemul::StaticClass();
}
struct Z_Construct_UClass_ATest_Jangemul_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Test_Jangemul.h" },
		{ "ModuleRelativePath", "Test_Jangemul.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EffectType_MetaData[] = {
		{ "Category", "Status Effect" },
		{ "ModuleRelativePath", "Test_Jangemul.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CollisionBox_MetaData[] = {
		{ "Category", "Collision" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Test_Jangemul.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EffectType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EffectType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CollisionBox;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ATest_Jangemul_OnObstacleBeginOverlap, "OnObstacleBeginOverlap" }, // 3068886612
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ATest_Jangemul>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_ATest_Jangemul_Statics::NewProp_EffectType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_ATest_Jangemul_Statics::NewProp_EffectType = { "EffectType", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest_Jangemul, EffectType), Z_Construct_UEnum_TR_EStatusEffectType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EffectType_MetaData), NewProp_EffectType_MetaData) }; // 2104975117
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ATest_Jangemul_Statics::NewProp_CollisionBox = { "CollisionBox", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ATest_Jangemul, CollisionBox), Z_Construct_UClass_UBoxComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CollisionBox_MetaData), NewProp_CollisionBox_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ATest_Jangemul_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Jangemul_Statics::NewProp_EffectType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Jangemul_Statics::NewProp_EffectType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ATest_Jangemul_Statics::NewProp_CollisionBox,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Jangemul_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ATest_Jangemul_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_TR,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Jangemul_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ATest_Jangemul_Statics::ClassParams = {
	&ATest_Jangemul::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ATest_Jangemul_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Jangemul_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ATest_Jangemul_Statics::Class_MetaDataParams), Z_Construct_UClass_ATest_Jangemul_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ATest_Jangemul()
{
	if (!Z_Registration_Info_UClass_ATest_Jangemul.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ATest_Jangemul.OuterSingleton, Z_Construct_UClass_ATest_Jangemul_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ATest_Jangemul.OuterSingleton;
}
template<> TR_API UClass* StaticClass<ATest_Jangemul>()
{
	return ATest_Jangemul::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ATest_Jangemul);
ATest_Jangemul::~ATest_Jangemul() {}
// End Class ATest_Jangemul

// Begin Registration
struct Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ATest_Jangemul, ATest_Jangemul::StaticClass, TEXT("ATest_Jangemul"), &Z_Registration_Info_UClass_ATest_Jangemul, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ATest_Jangemul), 658826431U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_531677814(TEXT("/Script/TR"),
	Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_ProjectGitHub_TR_TR_Source_TR_Test_Jangemul_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
