/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:19:08 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 14:25:21 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	this->_brain = new Brain();
	std::cout << "Dog Constructor Called" << std::endl;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
	std::cout << "Deep" << std::endl;
}

void	Dog::MakeSound() const
{
	std::cout << "Bark" << std::endl;
}

Brain* Dog::GetBrain() const
{
	return (this->_brain);
}

/*Dog& Dog::operator=(const Animal &dog)
{
	this->type = dog.getType();
	*(this->_brain) = *(dog.GetBrain());
	std::cout << "Dog Assignment Called" << std::endl;
	return (*this);
}*/

Dog & Dog::operator = (const Animal &dog)
{
	this->type = dog.getType();
	*(this->_brain) = *(dog.GetBrain());

	std::cout << "dog assignment operator called\n";
	return *this;
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog Destructor Called" << std::endl;
}
