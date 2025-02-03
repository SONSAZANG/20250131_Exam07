// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Exam07/Public/MyPawn.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyPawn() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
EXAM07_API UClass* Z_Construct_UClass_AMyPawn();
EXAM07_API UClass* Z_Construct_UClass_AMyPawn_NoRegister();
UPackage* Z_Construct_UPackage__Script_Exam07();
// End Cross Module References

// Begin Class AMyPawn Function Look
struct Z_Construct_UFunction_AMyPawn_Look_Statics
{
	struct MyPawn_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_Look_Statics::MyPawn_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_Look_Statics::MyPawn_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function Look

// Begin Class AMyPawn Function Move
struct Z_Construct_UFunction_AMyPawn_Move_Statics
{
	struct MyPawn_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_Move_Statics::MyPawn_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_Move_Statics::MyPawn_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function Move

// Begin Class AMyPawn Function UpDown
struct Z_Construct_UFunction_AMyPawn_UpDown_Statics
{
	struct MyPawn_eventUpDown_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AMyPawn_UpDown_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MyPawn_eventUpDown_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AMyPawn_UpDown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AMyPawn_UpDown_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_UpDown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AMyPawn_UpDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AMyPawn, nullptr, "UpDown", nullptr, nullptr, Z_Construct_UFunction_AMyPawn_UpDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_UpDown_Statics::PropPointers), sizeof(Z_Construct_UFunction_AMyPawn_UpDown_Statics::MyPawn_eventUpDown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AMyPawn_UpDown_Statics::Function_MetaDataParams), Z_Construct_UFunction_AMyPawn_UpDown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_AMyPawn_UpDown_Statics::MyPawn_eventUpDown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_AMyPawn_UpDown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AMyPawn_UpDown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(AMyPawn::execUpDown)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpDown(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class AMyPawn Function UpDown

// Begin Class AMyPawn
void AMyPawn::StaticRegisterNativesAMyPawn()
{
	UClass* Class = AMyPawn::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &AMyPawn::execLook },
		{ "Move", &AMyPawn::execMove },
		{ "UpDown", &AMyPawn::execUpDown },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyPawn);
UClass* Z_Construct_UClass_AMyPawn_NoRegister()
{
	return AMyPawn::StaticClass();
}
struct Z_Construct_UClass_AMyPawn_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "MyPawn.h" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Root_MetaData[] = {
		{ "Category", "Character | Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Character | Camera" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "Category", "Character | Component" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/MyPawn.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Root;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_AMyPawn_Look, "Look" }, // 3479452699
		{ &Z_Construct_UFunction_AMyPawn_Move, "Move" }, // 3253254556
		{ &Z_Construct_UFunction_AMyPawn_UpDown, "UpDown" }, // 2513409554
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyPawn>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_Root = { "Root", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, Root), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Root_MetaData), NewProp_Root_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMyPawn_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMyPawn, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMyPawn_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_Root,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMyPawn_Statics::NewProp_SkeletalMeshComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMyPawn_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_Exam07,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyPawn_Statics::ClassParams = {
	&AMyPawn::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_AMyPawn_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams), Z_Construct_UClass_AMyPawn_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMyPawn()
{
	if (!Z_Registration_Info_UClass_AMyPawn.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyPawn.OuterSingleton, Z_Construct_UClass_AMyPawn_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMyPawn.OuterSingleton;
}
template<> EXAM07_API UClass* StaticClass<AMyPawn>()
{
	return AMyPawn::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMyPawn);
AMyPawn::~AMyPawn() {}
// End Class AMyPawn

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_soneunsu_Documents_Exam_20250131_Exam07_Exam07_Source_Exam07_Public_MyPawn_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMyPawn, AMyPawn::StaticClass, TEXT("AMyPawn"), &Z_Registration_Info_UClass_AMyPawn, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyPawn), 678222966U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_soneunsu_Documents_Exam_20250131_Exam07_Exam07_Source_Exam07_Public_MyPawn_h_422601888(TEXT("/Script/Exam07"),
	Z_CompiledInDeferFile_FID_Users_soneunsu_Documents_Exam_20250131_Exam07_Exam07_Source_Exam07_Public_MyPawn_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_soneunsu_Documents_Exam_20250131_Exam07_Exam07_Source_Exam07_Public_MyPawn_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
