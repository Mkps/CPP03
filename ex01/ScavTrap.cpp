#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("Wild ScavTrap", 100, 50, 20)
{
	std::cout << "ScavTrap named " << this->getName() << "constructed" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap named " << this->getName() << " constructed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
	: ClapTrap(src.getName(), src.getHP(), src.getEnergy(), src.getAttack())
{
	std::cout << "ScavTrap " << this->getName() << " cloned itself :O" << std::endl;
}

ScavTrap	&ScavTrap::operator =(ScavTrap const &rhs)
{
	if (!this->getName().empty())
		std::cout << "ScavTrap " << this->getName() << " becomes " << rhs.getName() << std::endl;
	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " goes away..." << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (!this->canAct())
		return ;
	this->setEnergy(this->getEnergy() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage!" << std::endl;
}
