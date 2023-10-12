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
