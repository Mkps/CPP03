#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap()
{
	this->_isGuardingGate = 0;
	this->_hitP = 100;
	this->_energyP = 50;
	this->_attackDamage = 20;
	std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name)
{
	this->_hitP = 100;
	this->_energyP = 50;
	this->_attackDamage = 20;
	this->_isGuardingGate = 0;
	std::cout << "ScavTrap named " << this->getName() << " constructed" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src)
	: ClapTrap(src.getName(), src.getHP(), src.getEnergy(), src.getAttack())
{
	this->_isGuardingGate = 0;
	std::cout << "ScavTrap " << this->getName() << " cloned itself :O" << std::endl;
}

ScavTrap	&ScavTrap::operator =(ScavTrap const &rhs)
{
	if (!this->getName().empty())
		std::cout << "ScavTrap " << this->getName() << " becomes " << rhs.getName() << std::endl;
	this->_isGuardingGate = rhs._isGuardingGate;
	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());

	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}

void	ScavTrap::attack(std::string const &target)
{
	if (!this->canAct())
		return ;
	this->setEnergy(this->getEnergy() - 1);
	std::cout << "ScavTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (!this->canAct())
		return ;
	if (this->_isGuardingGate)
	{
		std::cout << "ScavTrap " << this->getName() << " is already guarding the gate." << std::endl;
		return ;
	}
	this->setEnergy(this->getEnergy() - 1);
	std::cout << "ScavTrap " << this->getName() << " is now guarding the gates." << std::endl;
	this->_isGuardingGate = 1;
}
