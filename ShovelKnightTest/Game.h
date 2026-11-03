#pragma once

#include <raylib.h>
#include "ObjectManagement.h"
#include "AssetManagement.h"

class Game
{
private:
	AssetManagement assetManagement;
	ObjectManagement objectManagement;
public:
	Game();
	void Update();
	void Draw();

};