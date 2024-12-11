#include "enemy.hpp"

Enemy::Enemy(std::string name, int hp, int atk, int def) : Entity(name, hp, atk, def) {}

std::string Enemy::shout() const
{
    return "Waaargghhhh";
}