#include <iostream>

#include "hero.hpp"
#include "enemy.hpp"

int main()
{
    Hero hero("Arthur", 100, 20, 10);

    Enemy* dog = new Enemy("Dog", 10, 1, 5);

    std::cout << hero.shout() << std::endl;
    std::cout << "Hero attacks with: " << hero.attack() << " damage." << std::endl;

    hero.print();

    std::cout << dog->shout() << std::endl;

    hero.recive_damage(15);

    hero.print();

    hero.heal(5);

    hero.print();

    return 0;
}
