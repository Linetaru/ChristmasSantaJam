// Copyright Epic Games, Inc. All Rights Reserved.

#include "ChristmasSantaJamGameMode.h"
#include "ChristmasSantaJamHUD.h"
#include "ChristmasSantaJamCharacter.h"
#include "UObject/ConstructorHelpers.h"

AChristmasSantaJamGameMode::AChristmasSantaJamGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AChristmasSantaJamHUD::StaticClass();
}
