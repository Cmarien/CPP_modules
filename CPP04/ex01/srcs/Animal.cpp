/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:06:05 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/31 11:51:40 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	this->type = "Weird";
	std::cout << "Animal Constructor Called" << std::endl;
}

Animal::Animal(const Animal &anim)
{
	*this = anim;
	std::cout << "Animal Copy Constructor Called" << std::endl;
}

void	Animal::MakeSound() const
{
	std::cout << "Weird Animal Sound" << std::endl;
}

const Animal& Animal::operator=(const Animal &anim)
{
	this->type = anim.getType();
	return (*this);
}

std::string Animal::getType() const
{
	return (this->type);
}

Brain* Animal::GetBrain() const{
	return new Brain();
}

Animal::~Animal()
{
	std::cout << "Animal Destructor Called" << std::endl;
}