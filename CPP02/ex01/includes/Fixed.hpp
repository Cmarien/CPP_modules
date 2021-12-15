/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:25 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 12:10:02 by cmarien          ###   ########.fr       */
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
Fixed & operator = (const Fixed &fixed);
int		getRawBits(void) const;
void	setRawBits(int const raw);
};

std::ostream& operator<<(std::ostream& out, const Fixed& value);

#endif