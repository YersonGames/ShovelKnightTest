#include "AssetManagement.h"

void AssetManagement::LoadGameTextures()
{
	Image imageTemp;
	Color colorTemp;

	//Player Idle
	imageTemp = LoadImage("assets/textures/playerIdle.png");
	ImageFormat(&imageTemp, PIXELFORMAT_UNCOMPRESSED_R8G8B8A8);
	ImageColorReplace(&imageTemp, { 112,112,112,255 }, BLANK);
	gameTextures.texPlayer = LoadTextureFromImage(imageTemp);
	UnloadImage(imageTemp);
}

void AssetManagement::UnloadGameTextures()
{
	UnloadTexture(gameTextures.texPlayer);
}

GameTextures& AssetManagement::GetGameTextures()
{
	return gameTextures;
}