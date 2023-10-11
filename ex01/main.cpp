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
		wild.beRepaired(2);
	for (int i = 0; i < 12; i++)
		norminou.takeDamage(i);
	norminou.beRepaired(2);

	return (0);
}
