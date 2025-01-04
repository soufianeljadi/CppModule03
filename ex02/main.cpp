#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main() 
{
    ClapTrap claptrap("Ben10");
    ScavTrap scavtrap("Vilgax");
    FragTrap fragtrap("Eon");

    fragtrap.attack("Enemy");
    fragtrap.highFivesGuys();
    fragtrap.takeDamage(50);
    fragtrap.beRepaired(40);

    return 0;
}