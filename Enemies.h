#pragma once
#include "Entity.h"

#define ENEMY_BASE_SPEED 60.f
#define NUM_ENEMIES 50
#define ENEMIES_ROW 10
#define ENEMY_START_X 25
#define ENEMY_START_Y 25

struct Enemies : public Entity
{
	float x[NUM_ENEMIES];
	float y[NUM_ENEMIES];
	bool alive[NUM_ENEMIES];
	float speed = ENEMY_BASE_SPEED;
	Texture2D sprite;

	void Update(float deltaTime);
	void Draw();

	void Initialize();

private:
	void Move(float deltaTime);
};

