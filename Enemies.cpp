#include "Enemies.h"

void Enemies::Update(float deltaTime)
{
	Move(deltaTime);
}

void Enemies::Draw()
{
    for (int i = 0; i < NUM_ENEMIES; i++)
    {
        if (alive[i])
        {
            DrawTexture(sprite, x[i] - sprite.width / 2, y[i] - sprite.height / 2, WHITE);
        }
    }
}

void Enemies::Initialize()
{
    for (int i = 0; i < NUM_ENEMIES; i++)
    {
        x[i] = ENEMY_START_X + (i % ENEMIES_ROW * 60);
        y[i] = ENEMY_START_Y + (i / ENEMIES_ROW * 60);
        alive[i] = true;
    }

    sprite = LoadTexture("resources/textures/enemyRed1.png");
    sprite.width = 50;
    sprite.height = 50;
}

void Enemies::Move(float deltaTime)
{
    if ((int(x[ENEMIES_ROW - 1]) == (GetScreenWidth() - 25) && speed > 0) || (int(x[0]) == 25 && speed < 0))
    {
        speed = -speed;
        for (int i = 0; i < NUM_ENEMIES; i++)
        {
            y[i] += 50;
        }
    }
    else
    {
        for (int i = 0; i < NUM_ENEMIES; i++)
        {
            x[i] += deltaTime * speed;
        }
    }
}
