/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:19:08 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/31 11:35:28 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Dog Constructor Called" << std::endl;
	this->_brain = new Brain();
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

Brain* Dog::GetBrain() const
{
	return (this->_brain);
}

Dog & Dog::operator = (const Animal &dog)
{
	this->type = dog.getType();
	*(this->_brain) = *(dog.GetBrain());
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor Called" << std::endl;
}
