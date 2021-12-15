/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 14:59:00 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 16:41:49 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

#include "Fixed.hpp"

class Point
{
private:
	Fixed const x;
	Fixed const y;
public:
	Point(void);
	Point(const Point &point);
	Point(const float _x, const float _y);
	
	Fixed	getX() const;
	Fixed	getY() const;
const Point & operator = (const Point &point);
	~Point();
};

std::ostream& operator<<(std::ostream& out, const Point& nb);
bool bsp( Point const a, Point const b, Point const c, Point const point);

#endif