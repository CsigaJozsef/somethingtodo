#include <stdlib.h>
#include <SDL2/SDL.h>
#include "../include/Game.hpp"

Game *game;

int main(int argc, char **argv)
{
    game = new Game();

    game->init("HugyosFos", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, false);

    while(game->isRunning())
    {
        game->handleEvents();
        game->update();
        game->render();
    }

    game->clean();

    return 0;
}
