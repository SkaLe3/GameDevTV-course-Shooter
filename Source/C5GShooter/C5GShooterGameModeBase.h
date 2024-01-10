// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "C5GShooterGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class C5GSHOOTER_API AC5GShooterGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
public:
	virtual void PawnKilled(APawn* PawnKilled);
};
