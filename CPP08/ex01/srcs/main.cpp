/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 10:58:43 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/16 14:31:48 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int	main(void)
{
{
	Span	x(10001);
	std::vector<int> y;
	for (int i = 0; i < 10001; i++){
		y.push_back(i*5);
	}
	try
	{
		x.addMultipleNumber(y.begin(), y.end());
		std::cout << x.shortestSpan() << std::endl;
		std::cout << x.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
{
	Span	x(5);
	try
	{
		x.addNumber(-3);
		x.addNumber(-1);
		x.addNumber(1);
		x.addNumber(3);
		x.addNumber(9);
		// x.addNumber(7);
		std::cout << x.shortestSpan() << std::endl;
		std::cout << x.longestSpan() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
	return 1;
}