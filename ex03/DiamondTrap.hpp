#ifndef DIAMONDTRAP_HPP 
# define DIAMONDTRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"

class DiamondTrap
	: public ScavTrap, public FragTrap
{
public:
	DiamondTrap();
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap const & src);
	~DiamondTrap();
	DiamondTrap &operator =(DiamondTrap const & rhs);

	void	attack(std::string const & target);
	void	showStatus(void) const;
private:
	std::string	_name;
};

#endif
