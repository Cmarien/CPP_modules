/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:19:24 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 19:09:27 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AtackDamage = 30;
	std::cout << "FragTrap Constructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AtackDamage = 30;
	std::cout << "FragTrag Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag)
{
	*this = frag;
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
}

const FragTrap&	FragTrap::operator=(const FragTrap &frag)
{
	this->Name = frag.Name;
	this->Hitpoints = frag.Hitpoints;
	this->EnergyPoints = frag.EnergyPoints;
	this->AtackDamage = frag.AtackDamage;
	std::cout << "FragTrap Copy Constructor Called" << std::endl;
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::string str;

	std::cout << "[" << this->Name << "]: \"High Five!\"" << std::endl;
	std::cin >> str;
	(void) str;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor Called" << std::endl;
}