#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main() 
{
    FragTrap frag1("Yuta"); 

    frag1.attack("Enemy1");      
    frag1.highFivesGuys();       
    std::cout << std::endl;

    FragTrap frag2;              
    frag2 = frag1;              
    frag2.attack("Enemy2");
    std::cout << std::endl;

    FragTrap frag3(frag1);  
    frag3.beRepaired(50);
    frag3.takeDamage(100);
    frag3.attack("Enemy3");
    std::cout << std::endl;

    return 0;
}