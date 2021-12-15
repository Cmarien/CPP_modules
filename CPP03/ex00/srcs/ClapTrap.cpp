/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:06:46 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 17:35:24 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : Name(name)
{
	std::cout << "Constructor call" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &ClapTrap)
{
	*this = ClapTrap;
}

const ClapTrap &	ClapTrap::operator = (const ClapTrap &clap)
{
	this->AtackDamage = clap.AtackDamage;
	this->Name = clap.Name;
	this->Hitpoints = clap.Hitpoints;
	this->EnergyPoints = clap.EnergyPoints;
	return (*this);
}

void ClapTrap::attack(std::string const & target)
{
	std::cout << "ClapTrap " << this->Name << " atacks " << target << ", causing " << this->AtackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " takes " << amount << " damage!" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "ClapTrap " << this->Name << " is repaired by " << amount << " points!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called" << std::endl;
}