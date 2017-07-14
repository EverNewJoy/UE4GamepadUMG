// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "ObjectMacros.h"
#include "ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class APlayerController;
#ifdef GAMEPADUMGPLUGIN_VirtualCursorFunctionLibrary_generated_h
#error "VirtualCursorFunctionLibrary.generated.h already included, missing '#pragma once' in VirtualCursorFunctionLibrary.h"
#endif
#define GAMEPADUMGPLUGIN_VirtualCursorFunctionLibrary_generated_h

#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execIsCursorOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execIsCursorOverInteractableWidget) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(bool*)Z_Param__Result=UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execDisableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::DisableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execEnableVirtualCursor) \
	{ \
		P_GET_OBJECT(APlayerController,Z_Param_PC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		UVirtualCursorFunctionLibrary::EnableVirtualCursor(Z_Param_PC); \
		P_NATIVE_END; \
	}


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUVirtualCursorFunctionLibrary(); \
	friend GAMEPADUMGPLUGIN_API class UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GamepadUMGPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCursorFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUVirtualCursorFunctionLibrary(); \
	friend GAMEPADUMGPLUGIN_API class UClass* Z_Construct_UClass_UVirtualCursorFunctionLibrary(); \
public: \
	DECLARE_CLASS(UVirtualCursorFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), 0, TEXT("/Script/GamepadUMGPlugin"), NO_API) \
	DECLARE_SERIALIZER(UVirtualCursorFunctionLibrary) \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCursorFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCursorFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCursorFunctionLibrary(UVirtualCursorFunctionLibrary&&); \
	NO_API UVirtualCursorFunctionLibrary(const UVirtualCursorFunctionLibrary&); \
public:


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UVirtualCursorFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UVirtualCursorFunctionLibrary(UVirtualCursorFunctionLibrary&&); \
	NO_API UVirtualCursorFunctionLibrary(const UVirtualCursorFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UVirtualCursorFunctionLibrary); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UVirtualCursorFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UVirtualCursorFunctionLibrary)


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET
#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_14_PROLOG
#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_RPC_WRAPPERS \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_INCLASS \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_PRIVATE_PROPERTY_OFFSET \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_INCLASS_NO_PURE_DECLS \
	HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HostProject_Plugins_GamepadUMGPlugin_Source_GamepadUMGPlugin_Public_VirtualCursorFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
