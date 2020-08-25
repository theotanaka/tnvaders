#include "Missile.h"

void Missile::Update(float deltatime)
{
	if (alive)
	{
		position.y -= deltatime * speed;

		if (position.y <= 0.f)
		{
			alive = false;
		}
	}
}

void Missile::Draw()
{
	if (alive)
		DrawTexture(sprite, position.x - sprite.width / 2, position.y - sprite.height / 2, WHITE);
}

void Missile::Fire(Vector2 position)
{
	if (!alive)
	{
		alive = true;
		this->position = position;
		sprite = LoadTexture("resources/textures/missile.png");
	}
}
