/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:46:15 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/14 11:17:28 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <vector>
#include <deque>
#include <algorithm>

template<typename T>
const typename T::const_iterator	easyfind(T &tab, int value)
{
	typename T::const_iterator i = tab.begin();
	typename T::const_iterator ie = tab.end();
	return (std::find(i, ie, value));
}

#endif