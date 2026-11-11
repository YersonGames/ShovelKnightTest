#include <raylib.h>
#include "Game.h"

int main()
{
	const float gameScreenWidth = 400, gameScreenHeight = 240;
	SetConfigFlags(FLAG_WINDOW_RESIZABLE);
	InitWindow(gameScreenWidth, gameScreenHeight,"Shovel Knight");
	SetWindowMinSize(gameScreenWidth, gameScreenHeight);
	SetTargetFPS(60);
	SetExitKey(0);

	RenderTexture2D target = LoadRenderTexture(gameScreenWidth, gameScreenHeight);
	float scale, scaleX, scaleY, screenWidth, screenHeight, offsetX, offsetY;


	Game game;

	while (!WindowShouldClose())
	{
		game.Update();
		BeginTextureMode(target);

			game.Draw();

		EndTextureMode();

		scaleX = (float)GetScreenWidth() / gameScreenWidth;
		scaleY = (float)GetScreenHeight() / gameScreenHeight;

		if (scaleX < scaleY)
		{
			scale = scaleX;
		}
		else
		{
			scale = scaleY;
		}

		screenWidth = gameScreenWidth * scale;
		screenHeight = gameScreenHeight * scale;
		offsetX = (GetScreenWidth() - screenWidth) / 2.0f;
		offsetY = (GetScreenHeight() - screenHeight) / 2.0f;

		BeginDrawing();
		ClearBackground(MAGENTA);
		DrawTexturePro(target.texture, { 0,0,(float)target.texture.width,(float)-target.texture.height }, { offsetX,offsetY,screenWidth,screenHeight}, {0,0}, 0, WHITE);
		EndDrawing();
	}

	UnloadRenderTexture(target);
	CloseWindow();
	return 0;
}