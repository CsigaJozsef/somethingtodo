#include "../include/Player.hpp"

Player::Player()
{
    _speed = 20;
}

Player::~Player()
{
}

int Player::getX()
{
    return _pos.x;
}

int Player::getY()
{
    return _pos.y;
}

void Player::move(direction d)
{
    if (d == UP)
    {
        _pos.y -= _speed;
    }

    if (d == DOWN)
    {
        _pos.y += _speed;
    }

    if (d == LEFT)
    {
        _pos.x -= _speed;
    }

    if (d == RIGHT)
    {
        _pos.x += _speed;
    }
}