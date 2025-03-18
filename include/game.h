#ifndef GAME_H
#define GAME_H

#include <raylib.h>
#include "textManager.h"

class Game
{
    private:
        enum class GameState { MAIN_MENU, PLAYING };

    public:
        TextManager textManager;

        Game();
        ~Game();
        void start();
        void drawUI();
        void update();

        static const int WINDOW_HEIGHT  = 900;
        static const int WINDOW_WIDTH   = 900;
};

#endif