#include "WindowManager.hpp"

WindowManager::WindowManager()
{}

WindowManager::~WindowManager()
{}

void WindowManager::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if(fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if(SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "SDL Initialized..." << std::endl;

        _window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);
        if(_window)
        {
            std::cout << "Windows created" << std::endl;
        }

        _renderer = SDL_CreateRenderer(_window, -1, 0);
        if(_renderer)
        {
            SDL_SetRenderDrawColor(_renderer, 173, 216, 230, 255);
            std::cout << "Renderer created" << std::endl;
        }

        _running = true;
    }
    else
    {
        _running = false;
    }

    // SDL_SetRenderDrawColor(renderer, 0, 255, 0, 255);

    // 

    // SDL_RenderPresent(renderer);

    // SDL_Delay(3000);
}

void WindowManager::handleEvents()
{
    SDL_Event event;
    SDL_PollEvent(&event);

    switch(event.type)
    {
        case SDL_QUIT:
            _running = false;
            break;

        default:
            break;
    }
}

void WindowManager::update()
{
    SDL_RenderClear(_renderer);
    //add stuff to render
    SDL_RenderPresent(_renderer);
}

void WindowManager::render()
{}

void WindowManager::clean()
{
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}

bool WindowManager::isRunning()
{
    return _running ? true : false;
}