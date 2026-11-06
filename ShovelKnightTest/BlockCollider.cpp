#include "BlockCollider.h"

BlockCollider::BlockCollider(Vector2 getPosition, Vector2 getSize)
{
	position = getPosition;
	size = getSize;
}

void BlockCollider::Update()
{
}

void BlockCollider::Draw()
{
	DrawRectangle(position.x, position.y, size.x, size.y, BLACK);

#ifdef _DEBUG
	DrawRectangleLines(position.x, position.y, size.x, size.y, RED);
#endif
}