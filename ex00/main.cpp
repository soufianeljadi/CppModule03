
#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap("Ben10");

    claptrap.attack("Target 1");
    claptrap.attack("Target 2");

    claptrap.takeDamage(3);
    claptrap.takeDamage(8);

    claptrap.beRepaired(11);

    ClapTrap claptrap2("Vilgax");

    claptrap2.beRepaired(3);
    claptrap2.beRepaired(10);

    for (int i = 0; i < 11; i++) {
        claptrap2.attack("Random Target");
    }
    return 0;
}