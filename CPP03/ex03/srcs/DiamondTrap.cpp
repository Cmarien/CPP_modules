/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:52:20 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 13:59:54 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void)
{
	this->Name = "Default";
	ClapTrap::Name = this->Name + "_clap_name";
	this->AtackDamage = FragTrap::AtackDamage;
	this->Hitpoints = FragTrap::Hitpoints;
	this->EnergyPoints = ScavTrap::EnergyPoints;
	std::cout << "DiamondTrap " << this->Name << " Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const std::string name) : FragTrap(name), ScavTrap(name)
{
	ClapTrap::Name = name + "_clap_name";
	this->Name = name;
	this->AtackDamage = 30;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	std::cout << "DiamondTrap " << this->Name << " Constructor Called" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap &dia)
{
	*this = dia;
	std::cout << "Diamond Copy Constructor Called" << std::endl;
}

const	DiamondTrap &	DiamondTrap::operator=(const DiamondTrap &dia)
{
	this->Name = dia.Name;
	this->AtackDamage = dia.AtackDamage;
	this->EnergyPoints = dia.EnergyPoints;
	this->Hitpoints = dia.Hitpoints;
	return (*this);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "[Diamond Name] : " << this->Name << " [Clap Name] : " << ClapTrap::Name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor Called" << std::endl;
}
