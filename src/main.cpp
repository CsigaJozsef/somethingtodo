#include <stdlib.h>
#include <SDL2/SDL.h>
#include "../include/Game.hpp"

Game *game;

int main(int argc, char **argv)
{
    game = new Game();

    game->init("HugyosFos", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 1200, 800, false);

    Uint32 start = SDL_GetTicks();

    while(game->isRunning())
    {
        
        Uint64 start = SDL_GetPerformanceCounter();

        game->handleEvents();
        game->update();
        game->render();

        Uint64 end = SDL_GetPerformanceCounter();

        float elapsed = (end - start) / (float)SDL_GetPerformanceFrequency();
        std::cout << "Current FPS: " << std::to_string(1.0f / elapsed) << std::endl;

        // float elapsedMS = (end - start) / (float)SDL_GetPerformanceFrequency() * 1000.0f;
        // Cap to 60 FPS
        // SDL_Delay(floor(16.666f - elapsedMS));
    }

    game->clean();

    return 0;
}
