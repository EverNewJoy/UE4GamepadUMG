/*
	This code was written by Nick Darnell
	
	Plugin created by Rama
*/
#include "GamepadUMGPluginPrivatePCH.h"
#include "GamepadCursorSettings.h"
#include "GameAnalogCursor.h"
#include "VirtualCursorFunctionLibrary.h"

void UVirtualCursorFunctionLibrary::EnableVirtualCursor(class APlayerController* PC)
{
	FGameAnalogCursor::EnableAnalogCursor(PC, TSharedPtr<SWidget>());
}

void UVirtualCursorFunctionLibrary::DisableVirtualCursor(class APlayerController* PC)
{
	FGameAnalogCursor::DisableAnalogCursor(PC);
}

bool UVirtualCursorFunctionLibrary::IsCursorOverInteractableWidget()
{
	TSharedPtr<FGameAnalogCursor> Analog = GetDefault<UGamepadCursorSettings>()->GetAnalogCursor();
	if ( Analog.IsValid() )
	{
		return Analog->IsHovered();
	}

	return false;
}
