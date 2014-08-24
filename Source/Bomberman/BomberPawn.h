

#pragma once

#include "GameFramework/Character.h"
#include "BomberPawn.generated.h"

/**
 * 
 */
UCLASS()
class BOMBERMAN_API ABomberPawn : public ACharacter
{
	GENERATED_UCLASS_BODY()

protected:
	virtual void SetupPlayerInputComponent(class UInputComponent* InputComponent) override;
	
	UFUNCTION()
	void MoveUp(float Val);
	
	UFUNCTION()
	void MoveRight(float Val);

	UFUNCTION()
	void MoveDown(float Val);

	UFUNCTION()
	void MoveLeft(float Val);
};
