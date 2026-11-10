#pragma once

#include <raylib.h>
#include "ObjectManagement.h"
#include "AssetManagement.h"
#include "CameraSystem.h"
#include "LevelManagement.h"

class Game
{
private:
	AssetManagement assetManagement;
	ObjectManagement objectManagement;
	CameraSystem cameraSystem;
	LevelManagement levelManagement;
public:
	Game();
	void Update();
	void Draw();

};