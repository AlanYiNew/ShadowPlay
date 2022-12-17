#pragma once

#include "Engine/DataTable.h"
#include "CharacterBaseInfo.generated.h"

USTRUCT(BlueprintType)
struct FCharacterBaseInfo: public FTableRowBase
{
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	int ID{};
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	TSubclassOf<ACharacter> Character;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	FString Name;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
	UTexture2D* Image{};
};
