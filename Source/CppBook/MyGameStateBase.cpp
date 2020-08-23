// Fill out your copyright notice in the Description page of Project Settings.


#include "MyGameStateBase.h"

AMyGameStateBase::AMyGameStateBase(){
    Score = 0;
}

int32 AMyGameStateBase::GetScore(){
    return Score;
}

void AMyGameStateBase::SetScore(int32 NewScore){
    Score = NewScore;
}