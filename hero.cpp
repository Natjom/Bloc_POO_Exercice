#include "hero.hpp"

Hero::Hero(std::string name, int hp, int atk, int def) : Entity(name, hp, atk, def) {}

std::string Hero::shout() const
{
    return "For glory! I am " + name + "!";
}
