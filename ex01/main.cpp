
#include "ScavTrap.hpp"

int main() 
{
    ScavTrap scav1("Vilgax");  
    scav1.attack("Enemy1");
    scav1.guardGate();            
    std::cout << std::endl;

    ScavTrap scav2;               
    scav2 = scav1;               
    scav2.attack("Enemy2");
    std::cout << std::endl;

    ScavTrap scav3(scav1);        
    scav3.takeDamage(50);
    scav3.beRepaired(30);
    std::cout << std::endl;
    
    return 0;
}