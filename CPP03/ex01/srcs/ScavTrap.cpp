/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:52:40 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:14:02 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->Name = "Default";
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AtackDamage = 20;
	std::cout << "ScavTrap " << this->Name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name) : ClapTrap(name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AtackDamage = 20;
	std::cout << "ScavTrap " <<this->Name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& newScav) : ClapTrap(newScav.Name)
{
	*this = newScav;
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

const ScavTrap &	ScavTrap::operator=(const ScavTrap &scav)
{
	this->Name = scav.Name;
	this->Hitpoints = scav.Hitpoints;
	this->EnergyPoints = scav.EnergyPoints;
	this->AtackDamage = scav.AtackDamage;
	return (*this);
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->Name << " atacks " << target << ", causing " << this->AtackDamage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->Name << " have enterred GateKeeper Mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->Name << " destructor called" << std::endl;
}