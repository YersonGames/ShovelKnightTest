#pragma once
#include <vector>
#include <raylib.h>
#include "ObjectManagement.h"

class LevelManagement
{
public:
	void LoadLevel(ObjectManagement& getObjectManagement ,const std::vector<std::vector<int>>& getLevel);
};

