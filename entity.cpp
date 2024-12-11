#include "entity.hpp"

Entity::Entity(std::string name, int hp, int atk, int def) : name(name), hp(hp), atk(atk), def(def) {}

int Entity::attack() const
{
    return atk;
}

void Entity::recive_damage(int dmg)
{
    int damage_taken = dmg - def;
    if (damage_taken > 0)
    {
        hp -= damage_taken;
    }
    if (hp < 0)
    {
        hp = 0;
    }
}

void Entity::heal(int pts)
{
    hp += pts;
}
