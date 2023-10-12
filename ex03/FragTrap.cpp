#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap()
{
	this->_hitP = 100;
	if (this->_energyP < 15)
		this->_energyP = 100;
	this->_attackDamage = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name)
{
	this->_hitP = 100;
	if (this->_energyP < 15)
		this->_energyP = 100;
	this->_attackDamage = 100;
	std::cout << "FragTrap named " << this->getName() << " constructed" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src)
	: ClapTrap(src.getName(), src.getHP(), src.getEnergy(), src.getAttack())
{
	std::cout << "FragTrap " << this->getName() << " cloned itself :O" << std::endl;
}

FragTrap	&FragTrap::operator =(FragTrap const &rhs)
{
	if (!this->getName().empty())
		std::cout << "FragTrap " << this->getName() << " becomes " << rhs.getName() << std::endl;
	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());

	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::attack(std::string const &target)
{
	if (!this->canAct())
		return ;
	this->setEnergy(this->getEnergy() - 1);
	std::cout << "FragTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->getName() << " high fives everyone!" << std::endl;
}
