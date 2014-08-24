

#include "Bomberman.h"
#include "BombermanGameMode.h"
#include "BombermanPlayerController.h"

int blocks[13][15] = {
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1 },
	{ 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1 },
	{ 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 },
};

ABombermanGameMode::ABombermanGameMode(const class FPostConstructInitializeProperties& PCIP)
	: Super(PCIP)
{
	static ConstructorHelpers::FObjectFinder<UBlueprint> BPBlock(TEXT("Blueprint'/Game/Blueprints/cUBE.cUBE'"));

	if (BPBlock.Object != NULL) {
		BlockClass = (UClass*) BPBlock.Object->GeneratedClass;
	}
}


void ABombermanGameMode::StartPlay()
{
	Super::StartPlay();
	
	for (int y = 0; y < 13; y++) {
		for (int x = 0; x < 15; x++) {
			const FVector location(y * 100 - 650, x * 100 - 750, 0);
			const FRotator rotator(0, 0, 0);

			if (blocks[y][x] == 1) {
				GWorld->SpawnActor(BlockClass, &location, &rotator);
			}
		}
	}

}