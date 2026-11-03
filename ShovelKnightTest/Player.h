#pragma once

#include <raylib.h>
#include "GameTextures.h"
class Player
{
private:
	bool destroy;

	Vector2 position;
	Vector2 size;
	float hmove;
	float vmove = 0;
	float speed = 5;
	float gravity = 0.3;
public:
	Player(Vector2 getPosition, Vector2 getSize);
	void Update();
	void Draw(GameTextures& getGameTextures);

	//Getters
	bool GetDestroy();
};

