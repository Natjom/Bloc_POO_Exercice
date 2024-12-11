#include "entity.hpp"

#ifndef HERO_HPP
#define HERO_HPP

class Hero : public Entity
{
public:
    Hero(std::string name, int hp, int atk, int def);

    std::string shout() const override;
};

#endif // HERO_HPP
