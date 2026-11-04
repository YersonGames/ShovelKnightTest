#pragma once

#include <raylib.h>

class BlockCollider
{
private:
	bool destroy = false;
	Vector2 position;
	Vector2 size;
public:
	BlockCollider(Vector2 getPosition, Vector2 getSize);
	void Update();
	void Draw();

	//Getters
	bool GetDestroy() { return destroy; }
	Vector2 GetPosition() { return position; }
	Vector2 GetSize() { return size; }
};
