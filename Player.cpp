#include "Player.h"

void Player::Update(float deltaTime)
{
    position.x += deltaTime * speed * direction;
    
    if (position.x < 0)
        position.x = 0.0f;
    else if (position.x > GetScreenWidth() - SPRITE_SIZE)
        position.x = GetScreenWidth() - SPRITE_SIZE;
}

void Player::Draw()
{
    DrawTexture(sprite, position.x - sprite.width / 2, position.y - sprite.height / 2, WHITE);
}

void Player::SetDirection(int direction)
{
    if (direction >= RIGHT)
        this->direction = RIGHT;
    else if (direction <= LEFT)
        this->direction = LEFT;
    else
        this->direction = NEUTRAL;
}

Player::Player(int lives)
{
    position.x = GetScreenWidth()/2 + PLAYER_START_X_OFFSET;
    position.y = GetScreenHeight() + PLAYER_START_Y_OFFSET;
    this->speed = PLAYER_SPEED;
    this->lives = lives;
    //sprite = LoadTexture("resources/textures/playerShip.png");
}

void Player::StartTexture()
{
    sprite = LoadTexture("resources/textures/playerShip.png");
    sprite.height = SPRITE_SIZE;
    sprite.width = SPRITE_SIZE;
}