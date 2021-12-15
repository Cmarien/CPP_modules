/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:25 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 10:17:31 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
	int					a;
	static int const	nbits = 8;
public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed();
Fixed & operator = (const Fixed &fixed);
int		getRawBits(void) const;
void	setRawBits(int const raw);
};

#endif