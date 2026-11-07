#pragma once

#include <raylib.h>
class CameraSystem
{
private:
	Camera2D camera = { 0 };

public:
	CameraSystem()
	{
		camera.zoom = 1.0f;
	}

	//Setters
	void SetCameraPos(Vector2 GetPos) { camera.target = GetPos; }
	void SetCameraZoom(float GetZoom) { camera.zoom = GetZoom; }
	void SetCameraRot(float GetRot) { camera.rotation = GetRot; }
	void SetCameraOffset(Vector2 GetOff) { camera.offset = GetOff; }

	//Getters
	Camera2D& GetCamera() { return camera; }
	Vector2 GetCameraPos() { return camera.target; }
};

