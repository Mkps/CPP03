#include "FragTrap.hpp"

FragTrap::FragTrap()
	: ClapTrap("Wild FragTrap", 100, 100, 30)
{
	std::cout << "FragTrap named " << this->getName() << "constructed" << std::endl;
}

FragTrap::FragTrap(std::string name)
	: ClapTrap(name, 100, 100, 30)
{
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
	std::cout << "FragTrap " << this->getName() << " goes away..." << std::endl;
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
