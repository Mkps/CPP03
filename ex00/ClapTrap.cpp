/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:13:22 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/17 18:16:58 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
	: _name("Wild ClapTrap"), _hitP(10), _energyP(10), _attackDamage(0) 
{
	std::cout << "A Wild ClapTrap appears..." << std::endl;
}

ClapTrap::ClapTrap(std::string name)
	: _name(name), _hitP(10), _energyP(10), _attackDamage(0) 
{
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

void	ClapTrap::msgNoEnergy(void) const
{
	std::cout << this->_name << " has no energy left..." << std::endl;
}

void	ClapTrap::msgNoHP(void) const
{
	std::cout << this->_name << " is passed out and can no longer move..." << std::endl;
}

void	ClapTrap::attack(std::string const & target)
{
	if (!this->canAct())
		return ;
	this->_energyP -= 1;
	std::cout << "ClapTrap " << this->getName() << " attacks " << target << ", causing ";
	std::cout << this->getAttack() << " points of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (!this->canAct())
		return ;
	this->_energyP -= 1;
	std::cout << "ClapTrap " << this->getName() << " repairs itself for ";
	std::cout << amount << " HP!" << std::endl;
	this->_hitP += amount;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (!this->hasEnoughHP())
	{
		std::cout << "Stop it! He's already dead..." << std::endl;
		return ;
	}
	std::cout << "ClapTrap " << this->getName() << " has taken ";
	std::cout << amount << " points of damage!" << std::endl;
	this->_hitP -= amount;
}

void	ClapTrap::showStatus(void) const
{
	std::cout << "ClapTrap " << this->getName() ;
	std::cout << " HP: "<< this->getHP();
	std::cout << " Energy: "<< this->getEnergy() << std::endl;
}

bool	ClapTrap::canAct(void) const
{
	if (!this->hasEnoughHP())
	{
		this->msgNoHP();
		return (false);
	}
	if (!this->hasEnoughEnergy())
	{
		this->msgNoEnergy();
		return (false);
	}
	return (true);
	
}
bool ClapTrap::hasEnoughEnergy(void) const
{
	return (this->_energyP > 0);
}
bool ClapTrap::hasEnoughHP(void) const
{
	return (this->_hitP > 0);
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
