#pragma once
#include "raylib.h"
#include "Engine.h"
#include "Player.h"
#include <iostream>

void Engine::Initialize()
{
	InitWindow(screenWidth, screenHeight, "Tnvaders from Outer Space");
	SetTargetFPS(60);

	InitializeGame();
}

void Engine::InitializeGame()
{
	player = Player(10);

	player.StartTexture();
	enemies.Initialize();
}

void Engine::GameLoop()
{
	while (!WindowShouldClose())
	{
		InputUpdate();
		Update();
		Draw();
	}

	Terminate();
}

void Engine::InputUpdate()
{
	if (IsKeyDown(KEY_SPACE))
		missile.Fire(player.position);

	if (IsKeyDown(KEY_RIGHT))
		player.SetDirection(RIGHT);
	else if (IsKeyDown(KEY_LEFT))
		player.SetDirection(LEFT);
	else
		player.SetDirection(NEUTRAL);
}

void Engine::Update()
{
	float deltaTime = GetFrameTime();
	player.Update(deltaTime);
	missile.Update(deltaTime);
	enemies.Update(deltaTime);
}

void Engine::Draw()
{
	BeginDrawing();
	{
		ClearBackground(Color { 20, 20, 30, 255 });

		DrawUI();

		DrawCircleV(player.position, 25, MAROON);

		player.Draw();
		missile.Draw();
		enemies.Draw();
	}
	EndDrawing();
}

void Engine::DrawUI()
{
	
}

void Engine::Terminate()
{

	CloseWindow();
}