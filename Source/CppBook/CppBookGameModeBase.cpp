// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.


#include "CppBookGameModeBase.h"

void ACppBookGameModeBase::BeginPlay()
{
    // Call the parent class version of this function
    Super::BeginPlay();

    
    // Displays a red message on the screen for 10 seconds
    GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, 
                                     TEXT("Actor Spawning")); 

    // Spawn an instance of the AMyFirstActor class at the
    //default location.
    FTransform SpawnLocation;
    SpawnedActor = GetWorld()->SpawnActor<AMyFirstActor>
                               (AMyFirstActor::StaticClass(), 
                                SpawnLocation);

    // FTimerHandle Timer;
    // GetWorldTimerManager().SetTimer(Timer,this,&ACppBookGameModeBase::DestroyActorFunction,10);
}

void ACppBookGameModeBase::DestroyActorFunction()
{
    // if(SpawnedActor!=nullptr)
    // {
    //     GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Red, 
    //                                      TEXT("Actor deleting"));
    //     SpawnedActor->Destroy();
    // }
}
