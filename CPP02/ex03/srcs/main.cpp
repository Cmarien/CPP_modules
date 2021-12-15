/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 09:56:02 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 14:55:54 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void)
{
	Fixed 		a;
	Fixed const	b(10);
	Fixed const	c(42.42f);
	Fixed const	d(b);
	Fixed		e(10.00f);
	Fixed		f(10);
	Fixed add;	//52.42
	Fixed sou;	//-32.42
	Fixed div;	//0.2357
	Fixed mul;	//424.2

	a = Fixed(1234.4321f);
	add = Fixed(10) + Fixed(42.42f);
	sou = Fixed(10) - Fixed(42.42f);
	div = Fixed(10) / Fixed(42.42f);
	mul = Fixed(10) * Fixed(42.42f);
	
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e++ << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "e is " << ++e << std::endl;
	std::cout << "e is " << e-- << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "e is " << --e << std::endl;
	std::cout << "e is " << e << std::endl;
	std::cout << "f is " << f << std::endl;
	std::cout << "add is " << add << std::endl;
	std::cout << "sou is " << sou << std::endl;
	std::cout << "div is " << div << std::endl;
	std::cout << "mul is " << mul << std::endl;


	if (f <= e)
	{
		if (f != e)
			if (f < e)
				std::cout << "f < e" << std::endl;
		if (f == e)
			std::cout << "f == e" << std::endl;
	}
	if (f >= e)
	{
		if (f != e)
			if (f > e)
				std::cout << "f > e" << std::endl;
		if (f == e)
			std::cout << "f == e" << std::endl;
	}

	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	std::cout << "add is " << add.toInt() << " as integer" << std::endl;
	std::cout << "sou is " << sou.toInt() << " as integer" << std::endl;
	std::cout << "div is " << div.toInt() << " as integer" << std::endl;
	std::cout << "mul is " << mul.toInt() << " as integer" << std::endl;

	std::cout << "Max e/f is " << Fixed::max(e, f) << std::endl;
	std::cout << "Max b/c is " << Fixed::max(b, c) << std::endl;
	std::cout << "Min e/f is " << Fixed::min(e, f) << std::endl;
	std::cout << "Min b/c is " << Fixed::min(b, c) << std::endl;

	return (0);
}