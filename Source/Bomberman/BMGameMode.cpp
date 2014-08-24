

#include "Bomberman.h"
#include "BMGameMode.h"


ABMGameMode::ABMGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{

}


void ABMGameMode::BeginPlay()
{
	Super::BeginPlay();

	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.f, FColor::Yellow, TEXT("HELLO WORLD"));
	}
}