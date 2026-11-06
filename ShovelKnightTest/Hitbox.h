#pragma once

#include <raylib.h>
#include "HitboxType.h"

class Hitbox
{
protected:
	bool destroy = false;

	Vector2 position;
	Vector2 size;
	float timer;
public:
	Hitbox(Vector2 getPosition, Vector2 getSize, float getTimer);
	virtual void Update();
	virtual void Draw();

	//Getters
	virtual bool GetDestroy() { return destroy; }
	Vector2 GetPosition() { return position; }
	Vector2 GetSize() { return size; }

	virtual HitboxType GetHitboxType() { return HitboxType::Hitbox; }
};

class HitboxPlayerAttack1 : public Hitbox
{
public:
	using Hitbox::Hitbox;
	void Draw() override;

	HitboxType GetHitboxType() override { return HitboxType::HitboxPlayerAttack1; }
};