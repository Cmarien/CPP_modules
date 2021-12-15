/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:05:35 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 18:46:51 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(void)
{
	FragTrap	z("Pierre");
	ScavTrap	x("Jean");
	ClapTrap	y("Paul");

	x.attack("Paul");
	x.guardGate();
	x.takeDamage(5);
	x.beRepaired(5);

	y.attack("Jean");
	y.takeDamage(5);
	y.beRepaired(5);

	z.attack("Jean et Paul");
	z.takeDamage(0);
	z.beRepaired(100);
	z.highFivesGuys();
	return (0);
}