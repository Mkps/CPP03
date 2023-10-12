#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	ClapTrap	norminou("Norminou");
	FragTrap	norminator("Norminator");

	norminator.showStatus();
	norminou.attack("the Sun");
	norminator.attack("the Sun");
	norminator.highFivesGuys();

	return (0);
}
