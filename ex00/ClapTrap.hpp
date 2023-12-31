/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <aloubier@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:13:30 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/20 15:24:22 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <iostream>

class ClapTrap {
public:
	ClapTrap();
	ClapTrap(std::string);
	ClapTrap(ClapTrap const &);
	ClapTrap &operator=(ClapTrap const &);
	~ClapTrap();

	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	void	showStatus(void) const;

	std::string		getName(void) const;
	unsigned int	getHP(void) const;
	unsigned int	getEnergy(void) const;
	unsigned int	getAttack(void) const;

private:
	bool 	canAct(void) const;
	bool 	hasEnoughHP(void) const;
	bool 	hasEnoughEnergy(void) const;
	void	msgNoEnergy(void) const;
	void	msgNoHP(void) const;

	std::string		_name;
	unsigned int	_hitP;
	unsigned int	_energyP;
	unsigned int	_attackDamage;
};

#endif
