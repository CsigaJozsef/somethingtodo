#include "../include/Game.hpp"

Game::Game()
{
    player = new Player();
}

Game::~Game()
{}

void Game::init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen)
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

        _height = height;
        _width = width;
        _count = 0;
    }
    else
    {
        _running = false;
    }
}

void Game::handleEvents()
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

void Game::update()
{
    _count += 1;

    std::cout << _count << std::endl;
}

void Game::render()
{
    SDL_SetRenderDrawColor(_renderer, 173, 216, 230, 255);
    SDL_RenderClear(_renderer);
    SDL_RenderPresent(_renderer);
}

void Game::clean()
{
    SDL_DestroyWindow(_window);
    SDL_DestroyRenderer(_renderer);
    SDL_Quit();
    std::cout << "Game cleaned" << std::endl;
}

bool Game::isRunning()
{
    return _running ? true : false;
}