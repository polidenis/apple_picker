// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ListView.h"
#include "SortableListView.generated.h"



/**
 * 
 */
UCLASS()
class APPLEPICKER_API USortableListView : public UListView
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable, Category = "Sort")
		void Sort();
};
