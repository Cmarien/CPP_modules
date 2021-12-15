/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:52:40 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 18:15:42 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	std::cout << "ScavTrap constructor called" << std::endl;
}

ScavTrap::ScavTrap(const std::string name)
{
	this->Name = name;
	this->Hitpoints = 100;
	this->EnergyPoints = 50;
	this->AtackDamage = 20;
	std::cout << "ScavTrap constructor called" << std::endl;
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
	std::cout << "ScavTrap destructor called" << std::endl;
}