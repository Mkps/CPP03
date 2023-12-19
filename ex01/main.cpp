/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:13:54 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:13:54 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    std::cout << "Constructors (should be different) : " << std::endl;
	ClapTrap	norminou("Norminou");
    std::cout << "Constructors (should be ClapTrap then ScavTrap) : " << std::endl;
	ScavTrap	norminator("Norminator");

	norminator.showStatus();
    std::cout << "Attacks should be made as a Scavtrap : " << std::endl;
	norminou.attack("the Sun");
	norminator.attack("the Sun");
    std::cout << "guardGate being exclusive to ScavTrap should obviously be made as a Scavtrap : " << std::endl;
	norminator.guardGate();
	norminator.guardGate();
    std::cout << "These member functions are inherited from ClapTrap as such they should be done as ClapTrap : " << std::endl;
    norminou.beRepaired(10);
    norminator.beRepaired(10);
    norminou.takeDamage(10);
    norminator.takeDamage(10);
    std::cout << "While the function showStatus is inherited from ClapTrap, they should reflect the difference in status: " << std::endl;
	norminou.showStatus();
	norminator.showStatus();

    std::cout << "Destructors (should be ScavTrap then ClapTrap) : " << std::endl;
	return (0);
}
