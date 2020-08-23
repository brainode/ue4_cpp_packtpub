// Fill out your copyright notice in the Description page of Project Settings.


#include "UAction.h"

void UUAction::PostInitProperties()
{
    Super::PostInitProperties();
    UE_LOG(LogTemp,Error,TEXT("PostInit Triggered"));    
}
void UUAction::BeginDestroy()
{
    Super::BeginDestroy();
    UE_LOG(LogTemp,Error,TEXT("Begin destroy triggered.U action has text: %s"),*Text);
}

