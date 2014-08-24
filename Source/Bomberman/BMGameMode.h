

#pragma once

#include "GameFramework/GameMode.h"
#include "BMGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABMGameMode : public AGameMode
{
	GENERATED_UCLASS_BODY()

	virtual void BeginPlay() OVERRIDE;
	
	
};
