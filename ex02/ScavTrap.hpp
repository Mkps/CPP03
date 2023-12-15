/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:14:32 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:14:32 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"

class ScavTrap 
	: public ClapTrap{
public:
	ScavTrap();
	ScavTrap(std::string name);
	ScavTrap(ScavTrap const & src);
	~ScavTrap();
	ScavTrap &operator =(ScavTrap const & rhs);

	void	attack(std::string const & target);
	void	guardGate(void);

private:
	bool	_isGuardingGate;
	
};

#endif
