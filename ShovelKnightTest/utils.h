#pragma once

#include <raylib.h>

namespace utils
{
	bool collision(Vector2 GetPos1, Vector2 GetSize1, Vector2 GetPos2, Vector2 GetSize2)
	{
		if (GetPos1.x + GetSize1.x > GetPos2.x && GetPos1.x < GetPos2.x + GetSize2.x && GetPos1.y + GetSize1.y > GetPos2.y && GetPos1.y < GetPos2.y + GetSize2.y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
};