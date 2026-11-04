#pragma once

#include <vector>
#include <raylib.h>

#include "Player.h"
#include "BlockCollider.h"
#include "AssetManagement.h"
#include "GameTextures.h"

class ObjectManagement
{
private:
	std::vector<Player> objPlayer;
	std::vector<BlockCollider> objBlockCollider;
public:
	ObjectManagement();
	void Update();
	void Draw(GameTextures& getGameTextures);

	//Player
	void CreatePlayer(Vector2 getPosition, Vector2 getSize);
	void ClearPlayer();

	//BlockCollider
	void CreateBlockCollider(Vector2 getPosition, Vector2 getSize);
	void ClearBlockCollider();
};

