// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "ComparableInterface.generated.h"

// This class does not need to be modified.
UINTERFACE(MinimalAPI)
class UComparableInterface : public UInterface
{
	GENERATED_BODY()
};

/**
 * 
 */
class APPLEPICKER_API IComparableInterface
{
	GENERATED_BODY()

	// Add interface functions to this class. This is the class that will be inherited to implement this interface.
public:
	UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = Sort)
	bool Compare(UObject* other);
};
