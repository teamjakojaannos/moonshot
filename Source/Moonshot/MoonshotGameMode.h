// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "MoonshotGameMode.generated.h"

UCLASS(Blueprintable, BlueprintType, minimalapi)
class AMoonshotGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:
	AMoonshotGameMode();

	UFUNCTION(BlueprintCallable, Category = Game)
	void StartMission();
};



