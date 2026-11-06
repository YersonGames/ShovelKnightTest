#include "Game.h"

Game::Game()
{
	assetManagement.LoadGameTextures();
	objectManagement.CreatePlayer({ 0,0 }, { 32,32 });
	objectManagement.CreateBlockCollider({ 0,128 },{128,32});
	objectManagement.CreateBlockCollider({ 128,96 }, { 128,32 });
}

void Game::Update()
{
	objectManagement.Update();

	ClearBackground(WHITE);

#ifdef _DEBUG
	if (IsKeyPressed(KEY_KP_0)) { objectManagement.CreatePlayer({ 32,32 }, { 32,32 }); }
	if (IsKeyPressed(KEY_KP_1)) { objectManagement.ClearPlayer(); }
	if (IsKeyPressed(KEY_KP_2)) { assetManagement.UnloadGameTextures(); }
	if (IsKeyPressed(KEY_KP_3)) { assetManagement.LoadGameTextures(); }
	if (IsKeyPressed(KEY_KP_4)) { objectManagement.CreateHitbox({ 0,32 }, { 64,64 }, GetRandomValue(1,5)); }
#endif	
}

void Game::Draw()
{
	objectManagement.Draw(assetManagement.GetGameTextures());
}
