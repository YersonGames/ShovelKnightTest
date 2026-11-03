#pragma once

#include <vector>
#include <raylib.h>

#include "Player.h"
#include "AssetManagement.h"
#include "GameTextures.h"

class ObjectManagement
{
private:
	std::vector<Player> objPlayer;
public:
	ObjectManagement();
	void Update();
	void Draw(GameTextures& getGameTextures);

	//Player
	void CreatePlayer(Vector2 getPosition, Vector2 getSize);
	void ClearPlayer();
};

