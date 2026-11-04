#pragma once

#include <raylib.h>
#include <vector>
#include "GameTextures.h"
#include "BlockCollider.h"
#include "utils.h"

class Player
{
private:
	bool destroy = false;
	bool jump = false;

	Vector2 position;
	Vector2 size;
	float hmove;
	float vmove = 0;
	float speed = 5;
	float gravity = 0.3;
public:
	Player(Vector2 getPosition, Vector2 getSize);
	void Update(std::vector<BlockCollider>& objBlockCollider);
	void Draw(GameTextures& getGameTextures);

	//Getters
	bool GetDestroy() { return destroy; }
	Vector2 GetPosition() { return position; }
	Vector2 GetSize() { return size; }
};

