
#include "ScavTrap.hpp"

int main() 
{
    ClapTrap claptrap("Clappy");
    ScavTrap scavtrap("Scavy");

    scavtrap.attack("Enemy");
    scavtrap.guardGate();
    scavtrap.takeDamage(30);
    scavtrap.beRepaired(20);

    return 0;
}