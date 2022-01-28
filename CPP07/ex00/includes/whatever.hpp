/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:02:58 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 16:21:34 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>

template<typename T>
void	swap(T & x, T & y){
	T z = x;
	x = y;
	y = z;
}

template<typename T>
const T&	max(const T& x, const T& y){
	if (x > y)
		return (x);
	return (y);
}

template<typename T>
const T&	min(const T& x, const T& y){
	if (x < y)
		return (x);
	return (y);
}

#endif