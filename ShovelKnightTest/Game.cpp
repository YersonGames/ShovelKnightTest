#include "Game.h"

Game::Game()
{
	assetManagement.LoadGameTextures();
	objectManagement.CreatePlayer({ 0,0 }, { 32,32 });
}

void Game::Update()
{
	objectManagement.Update();

	//test
	if (IsKeyPressed(KEY_SPACE)) { objectManagement.CreatePlayer({ 32,32 }, { 32,32 }); }
	if (IsKeyPressed(KEY_C)) { objectManagement.ClearPlayer(); }

	ClearBackground(WHITE);
}

void Game::Draw()
{
	objectManagement.Draw(assetManagement.GetGameTextures());
}
