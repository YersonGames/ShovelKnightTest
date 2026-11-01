#pragma once

#include <raylib.h>
class Player
{
private:
	bool destroy;

	Vector2 position;
	Vector2 size;
public:
	Player(Vector2 getPosition, Vector2 getSize);
	void Update();
	void Draw();

	//Getters
	bool GetDestroy();
};

