#pragma once
#include <SDL2/SDL.h>
#include <stdio.h>
#include <iostream>

class WindowManager 
{
public:
    WindowManager();
    ~WindowManager();

    void init(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);

    void handleEvents();
    void update();
    void render();
    void clean();

    bool isRunning();
private:
    bool _running;
    SDL_Window *_window;
    SDL_Renderer *_renderer;
};