#include "Player.h"

Player::Player(Vector2 getPosition, Vector2 getSize)
{
	position = getPosition;
	size = getSize;
}

void Player::Update(std::vector<BlockCollider>& objBlockCollider)
{
	hmove = IsKeyDown(KEY_D) - IsKeyDown(KEY_A);
	vmove += gravity;
	jump = false;

	if (hmove != 0) { texScaleX = hmove; }

	//Jump
	for (auto obj : objBlockCollider)
	{
		//jump
		if (utils::collision({ position.x,position.y + 1 }, size, obj.GetPosition(), obj.GetSize()))
		{
			jump = true;
			break;
		}
	}

	if (jump == true && IsKeyPressed(KEY_W))
	{
		vmove = -5;
	}

	//BlockCollider
	for (auto obj : objBlockCollider)
	{
		//Vertical
		if (utils::collision({position.x,position.y+vmove}, size, obj.GetPosition(), obj.GetSize()))
		{
			if (vmove > 0) { position.y = obj.GetPosition().y - size.y;}
			else { position.y = obj.GetPosition().y + obj.GetSize().y; }
			vmove = 0;
		}

		//Horizontal
		if (utils::collision({ position.x+speed*hmove,position.y }, size, obj.GetPosition(), obj.GetSize()))
		{
			if (hmove > 0) { position.x = obj.GetPosition().x - size.x; }
			else { position.x = obj.GetPosition().x + obj.GetSize().x; }
			hmove = 0;
		}
	}

	position.x += speed * hmove;
	position.y += vmove;

}

void Player::Draw(GameTextures& getGameTextures)
{
	Rectangle srcrec = { 0,0,getGameTextures.texPlayer.width*texScaleX,getGameTextures.texPlayer.height };
	Rectangle dstrec = { position.x+7,position.y+9,getGameTextures.texPlayer.width,getGameTextures.texPlayer.height };
	DrawTexturePro(getGameTextures.texPlayer, srcrec, dstrec, { 128,98 }, 0.0f, WHITE);

#ifdef _DEBUG
	DrawText(TextFormat("%i", jump), position.x, position.y-16, 16, BLACK);
	DrawRectangleLines(position.x, position.y, size.x, size.y, LIME);
#endif
}