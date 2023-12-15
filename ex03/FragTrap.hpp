/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aloubier <alex.loubiere@42.fr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/15 12:15:10 by aloubier          #+#    #+#             */
/*   Updated: 2023/12/15 12:15:11 by aloubier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP 
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"

class FragTrap 
	: virtual public ClapTrap{
public:
	FragTrap();
	FragTrap(std::string name);
	FragTrap(FragTrap const & src);
	~FragTrap();
	FragTrap &operator =(FragTrap const & rhs);

	void	attack(std::string const & target);
	void	highFivesGuys(void);
};

#endif
