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

void AMoonshotGameMode::StartMission()
{
	if (UWorld* World = GetWorld())
	{
		if (World->IsServer() && GEngine)
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Green, "on server!");
		}
		else
		{
			GEngine->AddOnScreenDebugMessage(-1, 15.0f, FColor::Red, "NOT on server!");
		}

		World->ServerTravel(FString("/Game/Moonshot/Maps/Level_1?listen"), true);
	}
}
