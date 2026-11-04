#include "ObjectManagement.h"

ObjectManagement::ObjectManagement()
{
}

void ObjectManagement::Update()
{
	//Update Player
	for (auto obj = objPlayer.begin(); obj != objPlayer.end();)
	{
		if (obj->GetDestroy())
		{
			objPlayer.erase(obj);
		}
		else
		{
			obj->Update(objBlockCollider);
			obj++;
		}
		
	}

	//Update BlockCollider
	for (auto obj = objBlockCollider.begin(); obj != objBlockCollider.end();)
	{
		if (obj->GetDestroy())
		{
			objBlockCollider.erase(obj);
		}
		else
		{
			obj->Update();
			obj++;
		}

	}
}

void ObjectManagement::Draw(GameTextures& getGameTextures)
{
	//Draw Player
	for (auto obj = objPlayer.begin(); obj != objPlayer.end(); obj++)
	{
		obj->Draw(getGameTextures);
	}

	//Draw BlockCollider
	for (auto obj = objBlockCollider.begin(); obj != objBlockCollider.end(); obj++)
	{
		obj->Draw();
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


//BlockCollider
void ObjectManagement::CreateBlockCollider(Vector2 getPosition, Vector2 getSize)
{
	objBlockCollider.push_back(BlockCollider(getPosition,getSize));
}
void ObjectManagement::ClearBlockCollider()
{
	objBlockCollider.clear();
	objBlockCollider.shrink_to_fit();
}