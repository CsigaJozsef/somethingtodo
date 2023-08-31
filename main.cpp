#include <stdlib.h>
#include <SDL2/SDL.h>
#include "WindowManager.hpp"

WindowManager *windowManager;

int main(int argc, char **argv)
{
    windowManager = new WindowManager();

    windowManager->init("HugyosFOs", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 600, 400, false);

    while(windowManager->isRunning())
    {
        windowManager->handleEvents();
        windowManager->update();
        windowManager->render();
    }

    windowManager->clean();

    return 0;
}
