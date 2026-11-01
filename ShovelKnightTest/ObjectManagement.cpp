#include "ObjectManagement.h"

ObjectManagement::ObjectManagement()
{
	
}

void ObjectManagement::Update()
{
	//Update Player
	for (auto player = objPlayer.begin(); player != objPlayer.end();)
	{
		if (player->GetDestroy())
		{
			objPlayer.erase(player);
		}
		else
		{
			player->Update();
			player++;
		}
		
	}
}

void ObjectManagement::Draw()
{
	//Draw Player
	for (auto player = objPlayer.begin(); player != objPlayer.end(); player++)
	{
		player->Draw();
	}
}

//Player
void ObjectManagement::CreatePlayer(Vector2 getPosition, Vector2 getSize)
{
	objPlayer.push_back(Player(getPosition, getSize));
}

void ObjectManagement::ClearPlayer()
{
	objPlayer.clear();
	objPlayer.shrink_to_fit();
}
