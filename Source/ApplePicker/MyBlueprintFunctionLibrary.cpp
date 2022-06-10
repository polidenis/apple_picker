// Fill out your copyright notice in the Description page of Project Settings.


#include "MyBlueprintFunctionLibrary.h"

bool UMyBlueprintFunctionLibrary::CompareStrings(FString S1, FString S2)
{
	std::string const s1 = TCHAR_TO_UTF8(*S1);
	std::string const s2 = TCHAR_TO_UTF8(*S2);
	return s1.compare(s2) < 0;
}
