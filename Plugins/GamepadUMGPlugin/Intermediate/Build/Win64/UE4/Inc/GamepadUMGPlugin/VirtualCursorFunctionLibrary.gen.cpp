// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "Private/GamepadUMGPluginPrivatePCH.h"
#include "Public/VirtualCursorFunctionLibrary.h"
PRAGMA_DISABLE_OPTIMIZATION
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeVirtualCursorFunctionLibrary() {}
// Cross Module References
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor();
	GAMEPADUMGPLUGIN_API UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget();
	GAMEPADUMGPLUGIN_API UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_GamepadUMGPlugin();
// End Cross Module References
	void UVirtualCursorFunctionLibrary::StaticRegisterNativesUVirtualCursorFunctionLibrary()
	{
		UClass* Class = UVirtualCursorFunctionLibrary::StaticClass();
		static const TNameNativePtrPair<ANSICHAR> AnsiFuncs[] = {
			{ "DisableVirtualCursor", (Native)&UVirtualCursorFunctionLibrary::execDisableVirtualCursor },
			{ "EnableVirtualCursor", (Native)&UVirtualCursorFunctionLibrary::execEnableVirtualCursor },
			{ "IsCursorOverInteractableWidget", (Native)&UVirtualCursorFunctionLibrary::execIsCursorOverInteractableWidget },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, AnsiFuncs, ARRAY_COUNT(AnsiFuncs));
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor()
	{
		struct VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		UObject* Outer = Z_Construct_UClass_UVirtualCursorFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("DisableVirtualCursor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms));
			UProperty* NewProp_PC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PC"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PC, VirtualCursorFunctionLibrary_eventDisableVirtualCursor_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VirtualCursorFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor()
	{
		struct VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms
		{
			APlayerController* PC;
		};
		UObject* Outer = Z_Construct_UClass_UVirtualCursorFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("EnableVirtualCursor"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x04022401, 65535, sizeof(VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms));
			UProperty* NewProp_PC = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("PC"), RF_Public|RF_Transient|RF_MarkAsNative) UObjectProperty(CPP_PROPERTY_BASE(PC, VirtualCursorFunctionLibrary_eventEnableVirtualCursor_Parms), 0x0010000000000080, Z_Construct_UClass_APlayerController_NoRegister());
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VirtualCursorFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UFunction* Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget()
	{
		struct VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms
		{
			bool ReturnValue;
		};
		UObject* Outer = Z_Construct_UClass_UVirtualCursorFunctionLibrary();
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			ReturnFunction = new(EC_InternalUseOnlyConstructor, Outer, TEXT("IsCursorOverInteractableWidget"), RF_Public|RF_Transient|RF_MarkAsNative) UFunction(FObjectInitializer(), nullptr, (EFunctionFlags)0x14022401, 65535, sizeof(VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms));
			CPP_BOOL_PROPERTY_BITMASK_STRUCT(ReturnValue, VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms);
			UProperty* NewProp_ReturnValue = new(EC_InternalUseOnlyConstructor, ReturnFunction, TEXT("ReturnValue"), RF_Public|RF_Transient|RF_MarkAsNative) UBoolProperty(FObjectInitializer(), EC_CppProperty, CPP_BOOL_PROPERTY_OFFSET(ReturnValue, VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), 0x0010000000000580, CPP_BOOL_PROPERTY_BITMASK(ReturnValue, VirtualCursorFunctionLibrary_eventIsCursorOverInteractableWidget_Parms), sizeof(bool), true);
			ReturnFunction->Bind();
			ReturnFunction->StaticLink();
#if WITH_METADATA
			UMetaData* MetaData = ReturnFunction->GetOutermost()->GetMetaData();
			MetaData->SetValue(ReturnFunction, TEXT("Category"), TEXT("Game"));
			MetaData->SetValue(ReturnFunction, TEXT("ModuleRelativePath"), TEXT("Public/VirtualCursorFunctionLibrary.h"));
#endif
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary_NoRegister()
	{
		return UVirtualCursorFunctionLibrary::StaticClass();
	}
	UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary()
	{
		static UClass* OuterClass = NULL;
		if (!OuterClass)
		{
			Z_Construct_UClass_UBlueprintFunctionLibrary();
			Z_Construct_UPackage__Script_GamepadUMGPlugin();
			OuterClass = UVirtualCursorFunctionLibrary::StaticClass();
			if (!(OuterClass->ClassFlags & CLASS_Constructed))
			{
				UObjectForceRegistration(OuterClass);
				OuterClass->ClassFlags |= (EClassFlags)0x20100080u;

				OuterClass->LinkChild(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor());
				OuterClass->LinkChild(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor());
				OuterClass->LinkChild(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget());

				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_DisableVirtualCursor(), "DisableVirtualCursor"); // 49264813
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_EnableVirtualCursor(), "EnableVirtualCursor"); // 3444071970
				OuterClass->AddFunctionToFunctionMapWithOverriddenName(Z_Construct_UFunction_UVirtualCursorFunctionLibrary_IsCursorOverInteractableWidget(), "IsCursorOverInteractableWidget"); // 3474110611
				static TCppClassTypeInfo<TCppClassTypeTraits<UVirtualCursorFunctionLibrary> > StaticCppClassTypeInfo;
				OuterClass->SetCppTypeInfo(&StaticCppClassTypeInfo);
				OuterClass->StaticLink();
#if WITH_METADATA
				UMetaData* MetaData = OuterClass->GetOutermost()->GetMetaData();
				MetaData->SetValue(OuterClass, TEXT("IncludePath"), TEXT("VirtualCursorFunctionLibrary.h"));
				MetaData->SetValue(OuterClass, TEXT("ModuleRelativePath"), TEXT("Public/VirtualCursorFunctionLibrary.h"));
#endif
			}
		}
		check(OuterClass->GetClass());
		return OuterClass;
	}
	IMPLEMENT_CLASS(UVirtualCursorFunctionLibrary, 1137807576);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UVirtualCursorFunctionLibrary(Z_Construct_UClass_UVirtualCursorFunctionLibrary, &UVirtualCursorFunctionLibrary::StaticClass, TEXT("/Script/GamepadUMGPlugin"), TEXT("UVirtualCursorFunctionLibrary"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UVirtualCursorFunctionLibrary);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
PRAGMA_ENABLE_OPTIMIZATION
