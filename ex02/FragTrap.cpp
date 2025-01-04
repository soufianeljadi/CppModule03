#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap constructor called" << std::endl;
}

void FragTrap::attack(const std::string &target) 
{
    if (this->_energy > 0 && _hit > 0) {
        std::cout << "FragTrap " << this->_name << " attacks " << target
                  << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_energy--;
    } 
    else if (this->_energy == 0) 
        std::cout << "FragTrap " << this->_name << " has no energy points!" << std::endl;
    else 
        std::cout << "FragTrap " << this->_name << " doesn't have enough hit points!" << std::endl;
}

void FragTrap::highFivesGuys() 
{
    std::cout << "FragTrap " << this->_name << " requests a positive high five!" << std::endl;
}

FragTrap::~FragTrap() 
{
    std::cout << "FragTrap destructor called"<< std::endl;
}
