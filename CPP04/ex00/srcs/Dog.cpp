/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:19:08 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:45:04 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "Dog Copy Constructor Called" << std::endl;
}

void	Dog::MakeSound() const
{
	std::cout << "Bark" << std::endl;
}

const Dog& Dog::operator=(const Dog &dog)
{
	this->type = dog.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
}
