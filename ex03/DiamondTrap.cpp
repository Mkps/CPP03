/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:15:01 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:15:02 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

// Constructor
DiamondTrap::DiamondTrap(void)
	: _name("Wild DiamondTrap")
{
	this->setName(this->_name + "_clap_name");
	this->_hitP = FragTrap::_hitP;
	std::cout << "inherited values "<< FragTrap::_hitP << " " << FragTrap::_energyP << " " << ScavTrap::_attackDamage << std::endl;
	this->_energyP = FragTrap::_energyP;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "A " << this->getName() << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name)
	: ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name; 
	this->_hitP = FragTrap::_hitP;
	this->_energyP = ScavTrap::_energyP;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "DiamondTrap named " << this->_name << " constructed" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const &src)
	: ClapTrap(src.getName() + "_clap_name"), ScavTrap(), FragTrap()
{
	ClapTrap::setName(this->getName() + "_clap_name");
	this->_name = src.getName();
	this->setHP(src.getHP());
	this->setEnergy(src.getEnergy());
	this->setAttack(src.getAttack());
	std::cout << "DiamondTrap " << this->getName() << " cloned itself :O" << std::endl;
}

//Assign operator
DiamondTrap	&DiamondTrap::operator =(DiamondTrap const &rhs)
{
	if (!this->getName().empty())
		std::cout << "DiamondTrap " << this->getName() << " becomes " << rhs.getName() << std::endl;
	this->setName(rhs.getName());
	this->setHP(rhs.getHP());
	this->setEnergy(rhs.getEnergy());
	this->setAttack(rhs.getAttack());

	return (*this);
}

//Destructor
DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap " << this->_name << " goes away..." << std::endl;
}

// Member functions
// Overrides others
void	DiamondTrap::attack(std::string const &target)
{
	if (!this->canAct())
		return ;
	this->setEnergy(this->getEnergy() - 1);
	std::cout << "DiamondTrap " << this->_name << " attacks " << target << ", causing ";
	std::cout << this->_attackDamage << " points of damage!" << std::endl;
}

// Overrides ClapTrap::showStatus(void)
void	DiamondTrap::showStatus(void) const
{
	std::cout << "DiamondTrap " << this->_name ;
	std::cout << " HP: "<< this->_hitP;
	std::cout << " Energy: "<< this->_energyP << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
    std::cout << "Am I ClapTrap " << this->ClapTrap::getName() << " or DiamondTrap " << this->_name << ". Who am I???" << std::endl;
    std::cout << "* Smoke starts coming out of the DiamondTrap's BrainBox *" << std::endl;
}
