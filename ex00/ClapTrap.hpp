#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>
#include <string>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(ClapTrap &);
	ClapTrap &operator=(ClapTrap &);
	ClapTrap &operator=(const ClapTrap &);
	~ClapTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	std::string		getName(void);
	unsigned int	getHP(void);
	unsigned int	getEnergy(void);
	unsigned int	getAttack(void);


private:
	std::string		_name;
	unsigned int	_hitP;
	unsigned int	_energyP;
	unsigned int	_attackDamage;
};

#endif
