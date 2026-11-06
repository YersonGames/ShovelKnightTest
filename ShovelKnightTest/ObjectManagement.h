#pragma once

#include <vector>
#include <raylib.h>

#include "Player.h"
#include "BlockCollider.h"
#include "Hitbox.h"
#include "AssetManagement.h"
#include "GameTextures.h"

class ObjectManagement
{
private:
	std::vector<Player> objPlayer;
	std::vector<BlockCollider> objBlockCollider;
	std::vector<Hitbox> objHitbox;
public:
	ObjectManagement();
	void Update();
	void Draw(GameTextures& getGameTextures);

	//Player
	void CreatePlayer(Vector2 getPosition, Vector2 getSize) { objPlayer.emplace_back(Player(getPosition, getSize)); }
	void ClearPlayer() {objPlayer.clear(); objPlayer.shrink_to_fit();}

	//BlockCollider
	void CreateBlockCollider(Vector2 getPosition, Vector2 getSize) { objBlockCollider.emplace_back(BlockCollider(getPosition, getSize)); }
	void ClearBlockCollider() { objBlockCollider.clear(); objBlockCollider.shrink_to_fit(); }

	//Hitbox
	void CreateHitbox(Vector2 getPosition, Vector2 getSize, float getTimer) { objHitbox.emplace_back(Hitbox(getPosition, getSize, getTimer)); }
	void ClearHitbox() { objHitbox.clear(); objHitbox.shrink_to_fit(); }
};

