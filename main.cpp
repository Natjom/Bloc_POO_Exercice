#include <iostream>
#include "hero.hpp"

int main()
{
    Hero hero("Arthur", 100, 20, 10);
    std::cout << hero.shout() << std::endl;
    std::cout << "Hero attacks with: " << hero.attack() << " damage." << std::endl;

    hero.print();

    hero.recive_damage(15);

    hero.print();

    hero.heal(5);

    hero.print();

    return 0;
}
