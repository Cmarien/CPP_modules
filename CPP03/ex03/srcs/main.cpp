/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:05:35 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 19:34:07 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int	main(void)
{
	DiamondTrap	a("Jacques");
	FragTrap	z("Pierre");
	ScavTrap	x("Jean");
	ClapTrap	y("Paul");

	std::cout << std::endl;

	x.attack("Paul");
	x.guardGate();
	x.takeDamage(5);
	x.beRepaired(5);

	std::cout << std::endl;

	y.attack("Jean");
	y.takeDamage(5);
	y.beRepaired(5);

	std::cout << std::endl;

	z.attack("Jean et Paul");
	z.takeDamage(0);
	z.beRepaired(100);
	z.highFivesGuys();

	std::cout << std::endl;

	a.attack("all");
	a.guardGate();
	a.takeDamage(-1);
	a.beRepaired(1000);
	a.whoAmI();
	a.highFivesGuys();

	std::cout << std::endl;

	return (0);
}