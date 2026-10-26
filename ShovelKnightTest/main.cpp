#include <raylib.h>

int main()
{
	InitWindow(400,240,"Shovel Knight");
	SetTargetFPS(60);
	SetExitKey(0);

	while (!WindowShouldClose())
	{
		BeginDrawing();
		EndDrawing();
	}

	CloseWindow();
	return 0;
}