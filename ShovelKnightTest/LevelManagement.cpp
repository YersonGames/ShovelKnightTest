#include "LevelManagement.h"

void LevelManagement::LoadLevel(ObjectManagement& getObjectManagement, const std::vector<std::vector<int>>& getLevel)
{
	for (size_t col = 0; col < getLevel.size(); col++)
	{
		for (size_t row = 0; row < getLevel[col].size(); row++)
		{
			int tileNum = getLevel[col][row];
			Vector2 tilePosition = { row * 16,(col * 16) + 32 };

			if (tileNum == 1)
			{
				getObjectManagement.CreateBlockCollider({ tilePosition.x,tilePosition.y }, { 16,16 });
			}
		}
	}
}