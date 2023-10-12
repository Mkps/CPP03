#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	norminou("Norminou");
	ScavTrap	norminator("Norminator");

	norminou.attack("the Sun");
	norminator.attack("the Sun");

	return (0);
}
