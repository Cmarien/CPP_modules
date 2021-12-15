/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:27 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 16:47:12 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors

Fixed::Fixed(void) : a(0)
{
}

Fixed::Fixed(const Fixed &fixed)
{
	*this = fixed;
}

Fixed::Fixed(const int nb) : a(nb << nbits)
{
}

Fixed::Fixed(const float nb)
{
	a = roundf(nb * (float)(1 << nbits));
}

//Get/SetBits

void	Fixed::setRawBits(int const raw)
{
	this->a = raw;
}

int	Fixed::getRawBits(void) const
{
	return (this->a);
}

//toInt/Float

int		Fixed::toInt(void) const
{
	return (a >> nbits);
}

float	Fixed::toFloat(void) const
{
	return ((float)a / (float)(1 << nbits));
}

//+ - / * Operators

Fixed	Fixed::operator + (const Fixed &fixed) const
{
	Fixed	tmp;
	
	tmp.a = this->a + fixed.a;
	return (tmp);
}

Fixed	Fixed::operator - (const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.a = this->a - fixed.a;
	return (tmp);
}

Fixed	Fixed::operator * (const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.a = this->a * fixed.toFloat();
	return (tmp);
}

Fixed	Fixed::operator / (const Fixed &fixed) const
{
	Fixed	tmp;

	tmp.a = this->a / fixed.toFloat();
	return (tmp);
}

// Inc/dec Operators

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	this->a++;
	return (tmp);
}

Fixed &	Fixed::operator ++ ()
{
	this->a++;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp(*this);
	
	this->a--;
	return (tmp);
}

Fixed &	Fixed::operator -- ()
{
	--this->a;
	return (*this);
}

// Comparison operators

bool	Fixed::operator < (const Fixed &fixed) const
{
	if (this->a < fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &fixed) const
{
	if (this->a <= fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator > (const Fixed &fixed) const
{
	if (this->a > fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &fixed) const
{
	if (this->a >= fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed &fixed) const
{
	if (this->a == fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &fixed) const
{
	if (this->a != fixed.a)
		return (true);
	return (false);
}

//MaxMin

Fixed &	Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.a > fixed2.a)
		return (fixed2);
	return (fixed1);
}

Fixed &	Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1.a > fixed2.a)
		return (fixed1);
	return (fixed2);
}

const Fixed &	Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.a > fixed2.a)
		return (fixed2);
	return (fixed1);
}

const Fixed &	Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1.a > fixed2.a)
		return (fixed1);
	return (fixed2);
}

//Utility Overloads

std::ostream& operator<<(std::ostream& out, const Fixed& nb) {
	
	out << nb.toFloat();
	return (out);
}

Fixed & Fixed::operator = (const Fixed &fixed)
{
	this->a = fixed.getRawBits();
	return (*this);
}

//Destructor

Fixed::~Fixed()
{
}