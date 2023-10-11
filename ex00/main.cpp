#include "ClapTrap.hpp"

int	main(void)
{
	ClapTrap	wild;
	ClapTrap	norminou("Norminou");
	ClapTrap	clone(norminou);

	wild = norminou;

	return (0);
}
