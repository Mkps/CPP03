/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:14:25 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:14:26 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
    std::cout << "Constructors (should be different) : " << std::endl;
	ClapTrap	norminou("Norminou");
    std::cout << "Constructors (should be ClapTrap then ScavTrap) : " << std::endl;
	FragTrap	norminator("Norminator");

    std::cout << "Attacks should be made as a FragTrap: " << std::endl;
	norminou.attack("the Sun");
	norminator.attack("the Sun");
    std::cout << "highFiveGuys being exclusive to FragTrap should obviously be made as a FragTrap: " << std::endl;
	norminator.highFivesGuys();
    std::cout << "These member functions are inherited from ClapTrap as such they should be done as ClapTrap : " << std::endl;
    norminou.beRepaired(10);
    norminator.beRepaired(10);
    norminou.takeDamage(10);
    norminator.takeDamage(10);
    std::cout << "While the function showStatus is inherited from ClapTrap, they should reflect the difference in status: " << std::endl;
    norminou.showStatus();
    norminator.showStatus();
    std::cout << "Destructors (should be FragTrap then ClapTrap) : " << std::endl;

	return (0);
}
