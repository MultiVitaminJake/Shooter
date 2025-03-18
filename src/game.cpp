#include "../include/game.h"

Game::Game()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Name");
    SetTargetFPS(60);
}

Game::~Game()
{
    CloseWindow();
}

void Game::Start()
{
    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);
        BeginDrawing();

        DrawText("Hello", 450, 450, 20, GREEN);

        EndDrawing();
    }
}