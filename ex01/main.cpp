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
	ClapTrap	norminou("Norminou");
	ScavTrap	norminator("Norminator");

	norminator.showStatus();
	norminou.attack("the Sun");
	norminator.attack("the Sun");
	norminator.guardGate();
	norminator.guardGate();

	return (0);
}
