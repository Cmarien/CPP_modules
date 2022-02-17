/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:54:18 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:49:20 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat()
{
	this->type = "WrongCat";
	std::cout << "WrongCat Constructor Called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat)
{
	*this = cat;
	std::cout << "WrongCat Copy Constructor Called" << std::endl;
}

void	WrongCat::MakeSound() const
{
	std::cout << "Meow" << std::endl;
}

const WrongCat& WrongCat::operator=(const WrongCat &cat)
{
	this->type = cat.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
}
