#pragma once
#include "raylib.h"
#include "Player.h"
#include "Missile.h"
#include "Enemies.h"

class Engine
{
private:
	const int screenWidth = 800;
	const int screenHeight = 600;

	Player player;
	Missile missile;
	Enemies enemies;

	void InitializeGame();

	void InputUpdate();
	void Update();
	void Draw();
	void DrawUI();
	void Terminate();

public:
	void Initialize();

	void GameLoop();
};

