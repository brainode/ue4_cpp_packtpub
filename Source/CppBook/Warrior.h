#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Warrior.generated.h"

UCLASS()
class CPPBOOK_API AWarrior : public AActor
{
	GENERATED_BODY()
	public:	
	// Sets default values for this actor's properties
	AWarrior();

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=Properties)
	FString Name;

	UFUNCTION(BlueprintCallable,Category=Properties)
	FString ToString();

	protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	virtual  void BeginDestroy() override;

	public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
