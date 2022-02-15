// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"

DECLARE_LOG_CATEGORY_EXTERN(LogSaruman, Log, All);

UENUM(BlueprintType)
enum class ESarumanAbilityInputID : uint8 {
    // 0 None
    None UMETA(DisplayName = "None"),
    // 1 Confirm
    Confirm UMETA(DisplayName = "Confirm"),
    // 2 Cancel
    Cancel UMETA(DisplayName = "Cancel")
};