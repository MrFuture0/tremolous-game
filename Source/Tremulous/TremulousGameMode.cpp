// Copyright Epic Games, Inc. All Rights Reserved.

#include "TremulousGameMode.h"
#include "TremulousHUD.h"
#include "TremulousCharacter.h"
#include "UObject/ConstructorHelpers.h"

ATremulousGameMode::ATremulousGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = ATremulousHUD::StaticClass();
}
