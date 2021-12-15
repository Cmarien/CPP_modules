/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:59:01 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 16:48:44 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Fixed	Point::getX() const
{
	return (x);
}

Fixed	Point::getY() const
{
	return (y);
}

Point::Point() : x(0), y(0)
{
	return ;
}

Point::Point(const Point &point) : x(point.x), y(point.y)
{
	return ;
}

Point::Point(const float _x, const float _y) : x(_x), y(_y)
{
	return ;
}

const Point &	Point::operator = (const Point &point)
{
	(void) point;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, const Point& nb)
{
	out << "(" << nb.getX() << ", " << nb.getY() << ")";
	return (out);
}

Point::~Point()
{
	return ;
}