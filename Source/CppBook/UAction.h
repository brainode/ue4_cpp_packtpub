// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BehaviorTree/BehaviorTreeTypes.h"
#include "UObject/NoExportTypes.h"
#include "UAction.generated.h"

/**
 * 
 */
UCLASS(BlueprintType,Blueprintable, meta=(ShortTooltip="Base class for any Action type"))
class CPPBOOK_API UUAction : public UObject
{
	GENERATED_BODY()
	public:
		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Properties)
		FString Text;

		UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Properties)
		FKey ShortcutKey;

		
		void PostInitProperties();
		void BeginDestroy();
};
