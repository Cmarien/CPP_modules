/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:27 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 12:05:27 by cmarien          ###   ########.fr       */
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

Fixed::Fixed(const int nb) : a(nb << nbits)
{
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;
	a = roundf(nb * (float)(1 << nbits));
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->a = raw;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->a);
}

int		Fixed::toInt(void) const
{
	return (a >> nbits);
}

float	Fixed::toFloat(void) const
{
	return ((float)a / (float)(1 << nbits));
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
	std::cout << "Assignation operator called" << std::endl;
	this->a = fixed.getRawBits();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Fixed& nb) {
	
	out << nb.toFloat();
	return (out);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}