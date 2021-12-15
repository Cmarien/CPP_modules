/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 15:43:07 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 17:04:24 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool bsp( Point const a, Point const b, Point const c, Point const point)
{
	Fixed	tmpx;
	Fixed	tmpy;

	(void) point;
	tmpx = b.getX() - a.getX();
	tmpy = b.getY() - a.getY();
	Point	vect_ab(tmpx.toFloat(), tmpy.toFloat());
	tmpx = c.getX() - a.getX();
	tmpy = c.getY() - a.getY();
	Point	vect_ac(tmpx.toFloat(), tmpy.toFloat());
	tmpx = c.getX() - b.getX();
	tmpy = c.getY() - b.getY();
	Point	vect_bc(tmpx.toFloat(), tmpy.toFloat());


	std::cout << "point a = " << a << std::endl;
	std::cout << "point b = " << b << std::endl;
	std::cout << "point c = " << c << std::endl;
	std::cout << "vect_ab = " << vect_ab << std::endl;
	std::cout << "vect_ac = " << vect_ac << std::endl;
	std::cout << "vect_bc = " << vect_bc << std::endl;

	return (true);
}