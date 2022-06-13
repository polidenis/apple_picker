// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/VerticalBox.h"
#include "SortedVerticalBox.generated.h"

/**
 * 
 */
UCLASS()
class APPLEPICKER_API USortedVerticalBox : public UVerticalBox
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Sort")
		void Sort();
};
