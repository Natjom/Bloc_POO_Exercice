#include <string>
#include <iostream>

#ifndef ENTITY_HPP
#define ENTITY_HPP

class Entity
{
protected:
    std::string name; // Name of entity
    int hp;           // Health points
    int atk;          // Attack damage
    int def;          // Defense stat
public:
    Entity(std::string name, int hp, int atk, int def);
    virtual ~Entity() = default;

    int set_atk() { return atk; };
    int set_def() { return def; };

    int attack() const;          // return atk
    void recive_damage(int dmg); // hp -= (def - dmg)
    void heal(int pts);          // hp += pts

    void print();

    virtual std::string shout() const = 0; // Scream (each entity have it own scream)
};

#endif // ENTITY_HPP