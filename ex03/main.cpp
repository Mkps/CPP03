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
	shinyTrap.showStatus();
	norminator.showStatus();
	norminou.attack("the Sun");
	norminator.attack("the Sun");
	norminator.highFivesGuys();

	return (0);
}
