#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 100;
    this->_damage = 30;
    std::cout << "FragTrap parameterized constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy): ClapTrap(copy)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &copy)
{
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	if(this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_energy = copy._energy;
		this->_damage = copy._damage;
	}
	return *this;
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
