// Fill out your copyright notice in the Description page of Project Settings.


#include "UserProfile.h"

void UUserProfile::BeginPlay()
{
    UE_LOG(LogTemp,Error,TEXT("U action has test %s"),*Name);
}