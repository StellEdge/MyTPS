// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyTPSGameMode.h"
#include "MyTPSHUD.h"
#include "MyTPSCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyTPSGameMode::AMyTPSGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMyTPSHUD::StaticClass();
}
