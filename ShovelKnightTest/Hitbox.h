#pragma once

#include <raylib.h>

class Hitbox
{
private:
	bool destroy = false;

	Vector2 position;
	Vector2 size;
	float timer;
public:
	Hitbox(Vector2 getPosition, Vector2 getSize, float getTimer);
	void Update();
	void Draw();

	//Getters
	bool GetDestroy() { return destroy; }
	Vector2 GetPosition() { return position; }
	Vector2 GetSize() { return size; }
};

