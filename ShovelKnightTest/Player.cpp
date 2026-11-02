#include "Player.h"

Player::Player(Vector2 getPosition, Vector2 getSize)
{
	destroy = false;
	position = getPosition;
	size = getSize;
}

void Player::Update()
{
	hmove = IsKeyDown(KEY_D) - IsKeyDown(KEY_A);
	vmove += gravity;

	position.x += speed * hmove;
	position.y += vmove;

}

void Player::Draw()
{
	DrawRectangle(position.x, position.y, size.x, size.y, RED);
}

//Getters
bool Player::GetDestroy()
{
	return destroy;
}