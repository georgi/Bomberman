

#pragma once

#include "GameFramework/GameMode.h"
#include "BombermanGameMode.generated.h"


/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABombermanGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

	UClass *BlockClass;

	virtual void StartPlay() override;
};
