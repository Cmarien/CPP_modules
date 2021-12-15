/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:25 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 14:52:33 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
	int					a;
	static int const	nbits = 8;
public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		Fixed(const int	nb);
		Fixed(const float nb);
float	toFloat(void) const;
int		toInt(void) const;
		~Fixed();
static Fixed &	min(Fixed &fixed1, Fixed &fixed2);
static const Fixed &	min(const Fixed &fixed1, const Fixed &fixed2);
static Fixed &	max(Fixed &fixed1, Fixed &fixed2);
static const Fixed &	max(const Fixed &fixed1, const Fixed &fixed2);
Fixed &	operator = (const Fixed &fixed);
Fixed	operator * (const Fixed &fixed) const;
Fixed	operator + (const Fixed &fixed) const;
Fixed	operator - (const Fixed &fixed) const;
Fixed	operator / (const Fixed &fixed) const;
Fixed	operator ++ (int);
Fixed &	operator ++ ();
Fixed &	operator -- ();
Fixed	operator -- (int);
bool	operator < (const Fixed &fixed) const;
bool	operator <= (const Fixed &fixed) const;
bool 	operator > (const Fixed &fixed) const;
bool	operator >= (const Fixed &fixed) const;
bool	operator == (const Fixed &fixed) const;
bool	operator != (const Fixed &fixed) const;
int		getRawBits(void) const;
void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif