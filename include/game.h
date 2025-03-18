#ifndef GAME_H
#define GAME_H

#include <raylib.h>

class Game
{
    private:
        constexpr static int WINDOW_HEIGHT = 900;
        constexpr static int WINDOW_WIDTH = 900;

    public:
        Game();
        ~Game();
        void Start();
};

#endif