// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "SarumanGameplayAbility.generated.h"

/**
 * 
 */
UCLASS()
class SARUMAN_API USarumanGameplayAbility : public UGameplayAbility
{
	GENERATED_BODY()
	
public:

	USarumanGameplayAbility();

	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Ability")
	ESarumanAbilityInputID AbilityInputID = ESarumanAbilityInputID::None;
};
