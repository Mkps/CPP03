#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(std::string, unsigned int, unsigned int, unsigned int);
	ClapTrap(ClapTrap const &);
	ClapTrap &operator=(ClapTrap const &);
	~ClapTrap();

	void	attack(std::string const & target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	virtual void	showStatus(void) const;
	void	msgNoEnergy(void) const;
	void	msgNoHP(void) const;

	bool 	canAct(void) const;
	bool 	hasEnoughHP(void) const;
	bool	hasEnoughEnergy(void) const;

	std::string		getName(void) const;
	unsigned int	getHP(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getAttack(void) const;

	void	setName(std::string const & name);
	void	setHP(unsigned int amount);
	void	setEnergy(unsigned int amount);
	void	setAttack(unsigned int amount);


protected:
	std::string		_name;
	unsigned int	_hitP;
	unsigned int	_energyP;
	unsigned int	_attackDamage;
};

#endif