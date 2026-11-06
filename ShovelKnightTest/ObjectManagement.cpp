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
			obj = objPlayer.erase(obj);
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
			obj = objBlockCollider.erase(obj);
		}
		else
		{
			obj->Update();
			obj++;
		}

	}

	//Update Hitbox
	for (auto obj = objHitbox.begin(); obj != objHitbox.end();)
	{
		if ((*obj)->GetDestroy())
		{
			obj = objHitbox.erase(obj);
		}
		else
		{
			(*obj)->Update();
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

	//Draw Hitbox
	for (auto obj = objHitbox.begin(); obj != objHitbox.end(); obj++)
	{
		(*obj)->Draw();
	}
}