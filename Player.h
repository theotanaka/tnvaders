#pragma once
#include "Entity.h"

#define SPRITE_SIZE 50
#define PLAYER_SPEED 160.0f
#define PLAYER_START_X_OFFSET 0
#define PLAYER_START_Y_OFFSET -50

struct Player : public Entity
{
public: 
    float speed;
    int lives;
    int direction = 0;

    Texture2D sprite;

    void Update(float deltaTime);

    void Draw();

    void SetDirection(int direction);

    Player(int lives);

    Player() : Player(1) {};

    void StartTexture();

};

enum dir
{
    NEUTRAL,
    RIGHT,
    LEFT = -1
};
