#include "Player.h"

Player::Player(Vector2 getPosition, Vector2 getSize)
{
	destroy = false;
	position = getPosition;
	size = getSize;
}

void Player::Update()
{
	if (IsKeyDown(KEY_W)){position.y -= 5;}
	if (IsKeyDown(KEY_S)) { position.y += 5; }
	if (IsKeyDown(KEY_A)) { position.x -= 5; }
	if (IsKeyDown(KEY_D)) { position.x += 5; }

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