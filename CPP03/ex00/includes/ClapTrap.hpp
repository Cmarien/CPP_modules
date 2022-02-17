/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:06:45 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 13:02:24 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
private:
	std::string	Name;
	int			Hitpoints;
	int			EnergyPoints;
	int			AtackDamage;
public:
	ClapTrap(void);
	ClapTrap(const ClapTrap &ClapTrap);
	ClapTrap(const std::string name);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	const ClapTrap &	operator = (const ClapTrap &clap);
	~ClapTrap();
};

#endif