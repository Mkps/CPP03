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

ClapTrap::ClapTrap(ClapTrap &src)
	: _name(src.getName()), _hitP(src.getHP()), _energyP(src.getEnergy()), _attackDamage(src.getAttack()) 
{
	std::cout << "ClapTrap " << this->_name << " cloned itself :O" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << this->_name << " goes away...\nGoodbye " << this->_name << std::endl;

}
std::string	ClapTrap::getName(void)
{
	return (this->_name);
}
unsigned int	ClapTrap::getHP(void)
{
	return (this->_hitP);
}
	
unsigned int	ClapTrap::getEnergy(void)
{
	return (this->_energyP);
}

unsigned int	ClapTrap::getAttack(void)
{
	return (this->_attackDamage);
}
