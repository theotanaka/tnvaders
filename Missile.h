#pragma once
#include "Entity.h"

#define MISSILE_SPEED 250.0f

struct Missile : Entity
{
	float speed = MISSILE_SPEED;
	bool alive = false;
	Texture2D sprite;

	void Update(float deltatime);
	void Draw();

	void Fire(Vector2 position);
};

