#pragma once

#include <vector>
#include <raylib.h>
#include <memory>

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
	std::vector<std::unique_ptr<Hitbox>> objHitbox;
public:
	ObjectManagement();
	void Update();
	void Draw(GameTextures& getGameTextures);
	void DrawGUI(GameTextures& getGameTextures);

	//Player
	void CreatePlayer(Vector2 getPosition) { objPlayer.emplace_back(Player(getPosition)); }
	void ClearPlayer() {objPlayer.clear(); objPlayer.shrink_to_fit();}

	//BlockCollider
	void CreateBlockCollider(Vector2 getPosition, Vector2 getSize) { objBlockCollider.emplace_back(BlockCollider(getPosition, getSize)); }
	void ClearBlockCollider() { objBlockCollider.clear(); objBlockCollider.shrink_to_fit(); }

	//Hitbox
	void CreateHitbox(Vector2 getPosition, Vector2 getSize, float getTimer) { objHitbox.emplace_back(std::make_unique<Hitbox>(getPosition, getSize, getTimer)); }
	void ClearHitbox() { objHitbox.clear(); objHitbox.shrink_to_fit(); }

	//HitboxPlayerAttack1
	void CreateHitboxPlayerAttack1(Vector2 getPosition, Vector2 getSize, float getTimer) { objHitbox.emplace_back(std::make_unique<HitboxPlayerAttack1>(getPosition, getSize, getTimer)); }
};

