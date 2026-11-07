#pragma once

#include <raylib.h>
#include "ObjectManagement.h"
#include "AssetManagement.h"
#include "CameraSystem.h"

class Game
{
private:
	AssetManagement assetManagement;
	ObjectManagement objectManagement;
	CameraSystem cameraSystem;
public:
	Game();
	void Update();
	void Draw();

};