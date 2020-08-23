#include "Warrior.h"

AWarrior::AWarrior()
{
    PrimaryActorTick.bCanEverTick = true;
}

void AWarrior::BeginPlay()
{
    Super::BeginPlay();
	SetLifeSpan(10);
}

void AWarrior::BeginDestroy()
{
    Super::BeginDestroy();
    UE_LOG(LogTemp,Warning,TEXT("Warrior begin destroy started"));
}


void AWarrior::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);

}

FString AWarrior::ToString()
{
    return FString::Printf(TEXT("An instance of a Warrior: %s"), *Name);
}
