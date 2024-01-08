#include "../include/Game.hpp"

Game::Game()
{
    player = new Player();
}

Game::~Game()
{
}

void Game::init(const char *title, int xpos, int ypos, int width, int height, bool fullscreen)
{
    int flags = 0;
    if (fullscreen)
    {
        flags = SDL_WINDOW_FULLSCREEN;
    }

    if (SDL_Init(SDL_INIT_EVERYTHING) == 0)
    {
        std::cout << "SDL Initialized..." << std::endl;

        _window = SDL_CreateWindow(title, xpos, ypos, width, height, flags);

        if (_window)
        {
            std::cout << "Windows created" << std::endl;
        }

        // _renderer = SDL_CreateRenderer(_window, -1, 0);
        _renderer = SDL_CreateRenderer(_window, -1, SDL_RENDERER_PRESENTVSYNC | SDL_RENDERER_ACCELERATED );

        if (_renderer)
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

    switch (event.type)
    {
        // Closing window
        case SDL_QUIT:
            _running = false;
            break;

        // Keyboard events
        case SDL_KEYDOWN:
            if(event.key.keysym.scancode == SDL_SCANCODE_W || event.key.keysym.scancode == SDL_SCANCODE_UP)
            {
                player->move(UP);
            }

            if(event.key.keysym.scancode == SDL_SCANCODE_S || event.key.keysym.scancode == SDL_SCANCODE_DOWN)
            {
                player->move(DOWN);
            }

            if(event.key.keysym.scancode == SDL_SCANCODE_A || event.key.keysym.scancode == SDL_SCANCODE_LEFT)
            {
                player->move(LEFT);
            }

            if(event.key.keysym.scancode == SDL_SCANCODE_D || event.key.keysym.scancode == SDL_SCANCODE_RIGHT)
            {
                player->move(RIGHT);
            }

        default:
            break;
    }
}

void Game::update()
{
    _count += 1;

    // std::cout << _count << std::endl;
}

void Game::render()
{
    // SDL_SetRenderDrawColor(_renderer, 173, 216, 230, 255);
    // SDL_RenderClear(_renderer);

    SDL_SetRenderDrawColor(_renderer, 173, 216, 230, 255);
    SDL_RenderClear(_renderer);

    SDL_Rect rect;
    rect.x = player->getX();
    rect.y = player->getY();
    rect.w = 20;
    rect.h = 20;

    SDL_SetRenderDrawColor(_renderer, 255, 255, 255, 255);
    SDL_RenderFillRect(_renderer, &rect);

    // SDL_SetRenderDrawColor(_renderer, 0, 0, 0, 255);

    // SDL_RenderPresent(_renderer);

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