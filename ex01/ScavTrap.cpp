#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->_hit = 100;
    this->_energy = 50;
    this->_damage = 20;
    std::cout << "ScavTrap parameterized constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy): ClapTrap(copy)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &copy)
{
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	if(this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_energy = copy._energy;
		this->_damage = copy._damage;
	}
	return *this;
}

void ScavTrap::attack(const std::string &target) 
{
    if (this->_energy > 0 && this->_hit > 0) {
        std::cout << "ScavTrap " << this->_name << " attacks " << target
                  << ", causing " << this->_damage << " points of damage!" << std::endl;
        this->_energy--;
    } 
    else if (this->_energy == 0) 
        std::cout << "ScavTrap " << this->_name << " has no energy points!" << std::endl;
    else 
        std::cout << "ScavTrap " << this->_name << " doesn't have enough hit points!" << std::endl;
}

void ScavTrap::guardGate() 
{
    std::cout << "ScavTrap " << this->_name << " is now in Gatekeeper mode!" << std::endl;
}

ScavTrap::~ScavTrap() 
{
    std::cout << "ScavTrap destructor called"<< std::endl;
}
