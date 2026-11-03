#include "AssetManagement.h"

void AssetManagement::LoadGameTextures()
{
	gameTextures.texPlayer = LoadTexture("assets/textures/player.png");
}

void AssetManagement::UnloadGameTextures()
{
	UnloadTexture(gameTextures.texPlayer);
}

GameTextures& AssetManagement::GetGameTextures()
{
	return gameTextures;
}