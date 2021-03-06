/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:19:06 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:44:49 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Cat Constructor Called" << std::endl;
}

Cat::Cat(const Cat &cat)
{
	*this = cat;
	std::cout << "Cat Copy Construcctor Called" << std::endl;
}

void	Cat::MakeSound() const
{
	std::cout << "Meow" << std::endl;
}

const Cat& Cat::operator=(const Cat &cat)
{
	this->type = cat.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
}
