// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine.h"
#include "GameFramework/GameModeBase.h"

#include "MyFirstActor.h"

#include "CppBookGameModeBase.generated.h"

/**
 * 
 */
UCLASS()
class CPPBOOK_API ACppBookGameModeBase : public AGameModeBase
{
	GENERATED_BODY()
	public:
		UPROPERTY(EditAnywhere,BlueprintReadWrite, Category= UClassNames)
		AMyFirstActor* SpawnedActor;

		UFUNCTION()
		void DestroyActorFunction();

		virtual void BeginPlay() override;
};
