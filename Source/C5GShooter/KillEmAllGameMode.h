// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "C5GShooterGameModeBase.h"
#include "KillEmAllGameMode.generated.h"

/**
 * 
 */
UCLASS()
class C5GSHOOTER_API AKillEmAllGameMode : public AC5GShooterGameModeBase
{
	GENERATED_BODY()

public:
	virtual void PawnKilled(APawn* PawnKilled) override;
private:
	void EndGame(bool bIsPlayerWinner);
};
