// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Sound/SoundWaveProcedural.h"
#include "MyBlueprintFunctionLibrary.generated.h"


/**
 * 
 */
UCLASS()
class TCP_API UMyBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()
public:
	UFUNCTION(BlueprintCallable,Category="MyCategory")
	static FString BytesToString(const TArray<uint8>& Bytes);
	UFUNCTION(BlueprintCallable, Category = "MyCategory")
	static USoundWaveProcedural* CreateProceduralSoundWaveFromWav(const TArray<uint8>& BinaryData);

};
