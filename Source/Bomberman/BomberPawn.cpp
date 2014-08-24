

#include "Bomberman.h"
#include "BomberPawn.h"


ABomberPawn::ABomberPawn(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;\
}


void ABomberPawn::SetupPlayerInputComponent(UInputComponent* InputComponent)
{
	InputComponent->BindAxis("Up", this, &ABomberPawn::MoveUp);
	InputComponent->BindAxis("Right", this, &ABomberPawn::MoveRight);
	InputComponent->BindAxis("Down", this, &ABomberPawn::MoveDown);
	InputComponent->BindAxis("Left", this, &ABomberPawn::MoveLeft);
}

void ABomberPawn::MoveUp(float Val)
{
	if (Val > 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("UP"));
		AddMovementInput(FVector(1, 0, 0));
		SetActorRotation(FRotator(0, 0, 0));
	}
}

void ABomberPawn::MoveRight(float Val)
{
	if (Val > 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("RIGHT"));
		AddMovementInput(FVector(0, 1, 0));
		SetActorRotation(FRotator(0, 90, 0));
	}
}

void ABomberPawn::MoveDown(float Val)
{
	if (Val > 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("DOWN"));
		AddMovementInput(FVector(-1, 0, 0));
		SetActorRotation(FRotator(0, 180, 0));
	}
}

void ABomberPawn::MoveLeft(float Val)
{
	if (Val > 0) {
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Blue, TEXT("LEFT"));
		AddMovementInput(FVector(0, -1, 0));
		SetActorRotation(FRotator(0, 270, 0));
	}
}