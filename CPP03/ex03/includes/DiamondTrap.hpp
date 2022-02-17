/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:51:37 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:00:00 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string Name;
public:
	DiamondTrap();
	DiamondTrap(const std::string);
	DiamondTrap(const DiamondTrap &);
	const DiamondTrap&	operator=(const DiamondTrap &);
	~DiamondTrap();

	void	whoAmI();
	void	attack(std::string const &);
};

#endif