/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:13:59 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/17 18:25:48 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
	: ClapTrap("Wild ScavTrap", 100, 50, 20)
{
	this->_isGuardingGate = 0;
	std::cout << "A ScavTrap named " << this->getName() << " appears" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
	: ClapTrap(name, 100, 50, 20)
{
	this->_isGuardingGate = 0;
	std::cout << "A ScavTrap named " << this->getName() << " appears" << std::endl;
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
