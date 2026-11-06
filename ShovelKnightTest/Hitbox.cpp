#include "Hitbox.h"

//Hitbox
Hitbox::Hitbox(Vector2 getPosition, Vector2 getSize, float getTimer)
{
	position = getPosition;
	size = getSize;
	timer = getTimer;
}

void Hitbox::Update()
{
	if (timer <= 0)
	{
		destroy = true;
	}

	timer -= 1;
}

void Hitbox::Draw()
{
#ifdef _DEBUG
	DrawRectangleLines(position.x, position.y, size.x, size.y, BLUE);
	DrawText(TextFormat("%f", timer),position.x,position.y-16,16,BLACK);
#endif
}

//HitboxPlayerAttack1
void HitboxPlayerAttack1::Draw()
{
#ifdef _DEBUG
	DrawRectangleLines(position.x, position.y, size.x, size.y, RED);
	DrawText(TextFormat("%f", timer), position.x, position.y - 16, 16, BLACK);
#endif
}