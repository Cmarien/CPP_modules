/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:55:31 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:49:00 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	this->type = "Weird";
	std::cout << "WrongAnimal Constructor Called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &anim)
{
	*this = anim;
	std::cout << "WrongAnimal Copy Constructor Called" << std::endl;
}

void	WrongAnimal::MakeSound() const
{
	std::cout << "Weird WrongAnimal Sound" << std::endl;
}

const WrongAnimal& WrongAnimal::operator=(const WrongAnimal &anim)
{
	this->type = anim.type;
	return (*this);
}

std::string WrongAnimal::getType() const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor Called" << std::endl;
}