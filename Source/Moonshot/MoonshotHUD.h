// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "MoonshotHUD.generated.h"

UCLASS()
class AMoonshotHUD : public AHUD
{
	GENERATED_BODY()

public:
	AMoonshotHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

