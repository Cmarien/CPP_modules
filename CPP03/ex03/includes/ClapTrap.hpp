/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:06:45 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 18:03:27 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string	Name;
	int			Hitpoints = 10;
	int			EnergyPoints = 10;
	int			AtackDamage = 0;
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &ClapTrap);
	ClapTrap(const std::string name);
	const ClapTrap&	operator=(const ClapTrap &clap);
	~ClapTrap();

	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif