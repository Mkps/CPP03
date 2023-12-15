/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:15:17 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:15:17 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "DiamondTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	norminou("Norminou");
	FragTrap	norminator("Norminator");
	DiamondTrap	shinyTrap("Shainay");

	shinyTrap.attack("Norminator");
	shinyTrap.ClapTrap::showStatus();
	shinyTrap.beRepaired(10);
	shinyTrap.showStatus();
	shinyTrap.whoAmI();
	shinyTrap.highFivesGuys();
	shinyTrap.guardGate();
	shinyTrap.guardGate();
	norminator.showStatus();
	norminou.attack("the Sun");
	norminator.attack("the Sun");
	norminator.highFivesGuys();

	return (0);
}
