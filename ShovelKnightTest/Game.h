#pragma once

#include <raylib.h>
#include "ObjectManagement.h"

class Game
{
private:
	ObjectManagement objectManagement;
public:
	Game();
	void Update();
	void Draw();

};