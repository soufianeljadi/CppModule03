
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(): _name("default"), _hit(10), _energy(10), _damage(0)
{
	std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name):_name(name), _hit(10), _energy(10), _damage(0)
{
    std::cout << "Parameterized constructor called" << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if(this != &copy)
	{
		this->_name = copy._name;
		this->_hit = copy._hit;
		this->_energy = copy._energy;
		this->_damage = copy._damage;
	}
	return *this;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = copy;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_hit > 0)
	{
		std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_damage << " points of damage!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " has no energy points!" << std::endl;
	else
		std::cout << "ClapTrap " << this->_name << " doesn't have enough hit points!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_hit > amount)
		this->_hit -= amount;
	else if (this->_hit <= amount && this->_hit > 0)
		this->_hit = 0;
	else if (this->_hit == 0)
	{
		std::cout << "ClapTrap " << this->_name << " is dead already!" << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->_name << " now has only " << this->_hit << " hit points !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->_energy > 0 && this->_hit > 0 && this->_hit + amount <= 10)
	{
		this->_hit += amount;
		std::cout << "ClapTrap " << this->_name << " now he has " << this->_hit << " hit points after the repair!" << std::endl;
		this->_energy--;
	}
	else if (this->_energy == 0)
		std::cout << "ClapTrap " << this->_name << " cannot repair, doesn't have enough energy points!" << std::endl;
	else if (this->_hit == 0)
		std::cout << "ClapTrap " << this->_name << " cannot repair, doesn't have enough hit points!" << std::endl;
	else 
		std::cout<< "ClapTrap " << this->_name << " can\'t be repaired to have more than 10 hit points." << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Destructor called" << std::endl;
}
