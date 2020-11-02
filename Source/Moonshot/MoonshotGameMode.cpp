// Copyright Epic Games, Inc. All Rights Reserved.

#include "MoonshotGameMode.h"
#include "MoonshotHUD.h"
#include "MoonshotCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMoonshotGameMode::AMoonshotGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/Moonshot/Characters/BP_PlayerCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMoonshotHUD::StaticClass();
}
