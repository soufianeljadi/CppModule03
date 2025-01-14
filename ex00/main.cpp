
#include "ClapTrap.hpp"

int main() 
{
    ClapTrap clap1("Ben10");       
    clap1.attack("Enemy1");
    clap1.takeDamage(3);
    clap1.beRepaired(5);
    std::cout << std::endl;

    ClapTrap clap2;            
    clap2 = clap1;                  
    clap2.attack("Enemy2");
    std::cout << std::endl;
    
    ClapTrap clap3(clap1);         
    clap3.takeDamage(10);
    clap3.beRepaired(5);            
    clap3.attack("Enemy3");
    std::cout << std::endl;

    return 0;
}