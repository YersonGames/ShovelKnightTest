#pragma once
#include <raylib.h>
#include "GameTextures.h"

class AssetManagement
{
private:
	GameTextures gameTextures;
public:
	void LoadGameTextures();
	void UnloadGameTextures();
	GameTextures& GetGameTextures();
};

