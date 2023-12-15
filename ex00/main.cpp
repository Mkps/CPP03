/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:13:34 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:13:35 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	test;
	ClapTrap	wild;
	ClapTrap	norminou("Norminou");
	ClapTrap	clone(norminou);

	test = norminou;

	wild.attack("Norminator");
	for (int i = 0; i < 2; i++)
		norminou.attack("Norminator");
	for (int i = 0; i < 12; i++)
	{
		wild.beRepaired(2);
		wild.showStatus();
	}
	for (int i = 0; i < 12; i++)
	{
		norminou.takeDamage(i);
		norminou.showStatus();
	}
	norminou.beRepaired(2);

	return (0);
}
