#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _hitP(10), _energyP(10), _attackDamage(0) 
{
	this->_name = "Wild ClapTrap";
	std::cout << "A Wild ClapTrap appears..." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _hitP(10), _energyP(10), _attackDamage(0) 
{
	this->_name = name; 
	std::cout << "A ClapTrap named " << this->_name << " appears..." << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
	*this = src;
	std::cout << "ClapTrap " << this->_name << " cloned itself :O" << std::endl;
}

ClapTrap	&ClapTrap::operator =(ClapTrap const &rhs)
{
	if (!this->getName().empty())
		std::cout << this->getName() << " becomes " << rhs.getName() << std::endl;
	this->_name = rhs.getName();
	this->_hitP = rhs.getHP();
	this->_energyP = rhs.getEnergy();
	this->_attackDamage = rhs.getAttack();

	return (*this);
}
ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " goes away..." << std::endl;

}
std::string	ClapTrap::getName(void) const
{
	return (this->_name);
}
unsigned int	ClapTrap::getHP(void) const
{
	return (this->_hitP);
}
	
unsigned int	ClapTrap::getEnergy(void) const
{
	return (this->_energyP);
}

unsigned int	ClapTrap::getAttack(void) const
{
	return (this->_attackDamage);
}
