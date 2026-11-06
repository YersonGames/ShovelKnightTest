#include <raylib.h>
#include <iostream>
#include "Game.h"

int main()
{
	InitWindow(400,240,"Shovel Knight");
	SetTargetFPS(60);
	SetExitKey(0);


	Game game;

	while (!WindowShouldClose())
	{
		game.Update();
		BeginDrawing();

		game.Draw();

		EndDrawing();
	}

	CloseWindow();
	return 0;
}