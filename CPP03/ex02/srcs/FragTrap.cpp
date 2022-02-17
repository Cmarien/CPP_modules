/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:19:24 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:02:45 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->Name = "Default";
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AtackDamage = 30;
	std::cout << "FragTrap " << this->Name << " Constructor Called" << std::endl;
}

FragTrap::FragTrap(const std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 100;
	this->AtackDamage = 30;
	std::cout << "FragTrag " << this->Name << " Constructor Called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &frag) : ClapTrap(frag.Name)
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
	return (*this);
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->Name << " atacks " << target << ", causing " << this->AtackDamage << " points of damage!" << std::endl;
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
	std::cout << "FragTrap " << this->Name << " Destructor Called" << std::endl;
}