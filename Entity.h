#pragma once
#include "raylib.h"

struct Entity
{
public:
	Vector2 position;

	virtual void Update(float deltaTime) = 0;
	virtual void Draw() = 0;
};

