/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:27 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 12:52:39 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

//Constructors

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

//Get/SetBits

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
	
	std::cout << "Addition operator called" << std::endl;
	tmp.a = this->a + fixed.a;
	return (tmp);
}

Fixed	Fixed::operator - (const Fixed &fixed) const
{
	Fixed	tmp;

	std::cout << "Substraction operator called" << std::endl;
	tmp.a = this->a - fixed.a;
	return (tmp);
}

Fixed	Fixed::operator * (const Fixed &fixed) const
{
	Fixed	tmp;

	std::cout << "Multiplication operator called" << std::endl;
	tmp.a = this->a * fixed.toFloat();
	return (tmp);
}

Fixed	Fixed::operator / (const Fixed &fixed) const
{
	Fixed	tmp;

	std::cout << "Division operator called" << std::endl;
	tmp.a = this->a / fixed.toFloat();
	return (tmp);
}

// Inc/dec Operators

Fixed	Fixed::operator ++ (int)
{
	Fixed	tmp(*this);

	std::cout << "PostInc operator called" << std::endl;
	this->a++;
	return (tmp);
}

Fixed &	Fixed::operator ++ ()
{
	std::cout << "PreInc operator called" << std::endl;
	this->a++;
	return (*this);
}

Fixed	Fixed::operator -- (int)
{
	Fixed	tmp(*this);
	
	std::cout << "PostDec operator called" << std::endl;
	this->a--;
	return (tmp);
}

Fixed &	Fixed::operator -- ()
{
	std::cout << "PreDec operator called" << std::endl;
	--this->a;
	return (*this);
}

// Comparison operators

bool	Fixed::operator < (const Fixed &fixed) const
{
	std::cout << "Comparison operator called" << std::endl;
	if (this->a < fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator <= (const Fixed &fixed) const
{
	std::cout << "Comparison operator called" << std::endl;
	if (this->a <= fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator > (const Fixed &fixed) const
{
	std::cout << "Comparison operator called" << std::endl;
	if (this->a > fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator >= (const Fixed &fixed) const
{
	std::cout << "Comparison operator called" << std::endl;
	if (this->a >= fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator == (const Fixed &fixed) const
{
	std::cout << "Comparison operator called" << std::endl;
	if (this->a == fixed.a)
		return (true);
	return (false);
}

bool	Fixed::operator != (const Fixed &fixed) const
{
	std::cout << "Comparison operator called" << std::endl;
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
	std::cout << "Assignation operator called" << std::endl;
	this->a = fixed.getRawBits();
	return (*this);
}

//Destructor

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}