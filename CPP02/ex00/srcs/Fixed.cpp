/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:27 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 10:45:43 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : a(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = fixed;
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->a = fixed.getRawBits();
	return (*this);
}

void	Fixed::setRawBits(int const raw)
{
	this->a = raw;
	std::cout << "setRawBits member function called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	int	x = this->a;
	std::cout << "getRawBits member function called" << std::endl;
	return (x);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}