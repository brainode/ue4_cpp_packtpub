﻿#pragma once

#include "UObject/ObjectMacros.h"
#include "Engine/Texture.h"
#include "ColoredTexture.generated.h"

USTRUCT(Blueprintable)
struct FColoredTexture
{
    GENERATED_USTRUCT_BODY()
public:
    UPROPERTY(EditAnywhere,BlueprintReadWrite,Category=HUD)
    UTexture* Texture;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category=HUD)
    FLinearColor Color;
    
};
