/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:19:06 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 14:21:20 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	this->_brain = new Brain();
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "Deep" << std::endl;
}

void	Cat::MakeSound() const
{
	std::cout << "Meow" << std::endl;
}

Brain* Cat::GetBrain() const
{
	return (this->_brain);
}

Cat& Cat::operator=(const Animal &cat)
{
	this->type = cat.getType();
	*(this->_brain) = *(cat.GetBrain());
	return (*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat Destructor Called" << std::endl;
}
