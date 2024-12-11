#include "entity.hpp"

#ifndef ENEMY_HPP
#define ENEMY_HPP

class Enemy : public Entity
{
public:
    Enemy(std::string name, int hp, int atk, int def);

    std::string shout() const override;
};

#endif // ENEMY_HPP
