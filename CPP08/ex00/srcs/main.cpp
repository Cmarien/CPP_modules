/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 09:46:18 by cmarien           #+#    #+#             */
/*   Updated: 2022/04/28 13:08:14 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
	std::vector<int>	v1;
	v1.push_back(1);
	v1.push_back(3);
	v1.push_back(5);
	v1.push_back(7);
	if (easyfind(v1, 4) == v1.end())
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;
	////////////////////
	if (easyfind(v1, 5) == v1.end())
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;

	std::deque<int>	d1;
	d1.push_back(1);
	d1.push_back(3);
	d1.push_back(5);
	d1.push_back(7);
	if (easyfind(d1, 4) == d1.end())
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;
	//////////////////////
	if (easyfind(d1, 5) == d1.end())
		std::cout << "not found" << std::endl;
	else
		std::cout << "found" << std::endl;
	return (0);
}