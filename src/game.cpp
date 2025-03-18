#include "../include/game.h"
#include "../include/textManager.h"

Game::Game()
{
    InitWindow(WINDOW_WIDTH, WINDOW_HEIGHT, "Name");
    SetTargetFPS(60);
}

Game::~Game()
{
    CloseWindow();
}

void Game::drawUI()
{
    Game::GameState state = Game::GameState::MAIN_MENU;

    switch (Game::GameState::MAIN_MENU)
    {
        case Game::GameState::MAIN_MENU:
            textManager.drawCenterText("Hello", 30, RED, 0, 0);
            break;
    }
}

void Game::start()
{
    while (!WindowShouldClose())
    {
        ClearBackground(BLACK);
        BeginDrawing();

        Game::drawUI();

        EndDrawing();
    }
}