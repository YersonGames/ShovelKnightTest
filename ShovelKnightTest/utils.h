#pragma once

#include <raylib.h>

namespace utils
{

	bool collision(Vector2 getPos1, Vector2 getSize1, Vector2 getPos2, Vector2 getSize2)
	{
		if (getPos1.x + getSize1.x > getPos2.x && getPos1.x < getPos2.x + getSize2.x && getPos1.y + getSize1.y > getPos2.y && getPos1.y < getPos2.y + getSize2.y)
		{
			return true;
		}
		else
		{
			return false;
		}
	}

	
};