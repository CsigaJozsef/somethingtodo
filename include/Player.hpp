#pragma once

#include "../src/Vector2.cpp"
#include "Directions.hpp"

class Player{
public:
    Player();
    ~Player();
    int getX();
    int getY();
    void move(direction d);
private:
    Vector2<int> _pos;
    int _speed;
};