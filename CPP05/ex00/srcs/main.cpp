/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:55:35 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:04:47 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

void runTest(std::string const& name, int grade)
{
    try {
        std::cout << "< " << name << "'s test >" << std::endl;

        Bureaucrat bure(name, grade);
        std::cout << bure;

        bure.increment();
        std::cout << bure;
        bure.increment();
        std::cout << bure;

        bure.decrease();
        std::cout << bure;
        bure.decrease();
        std::cout << bure;
        bure.decrease();
        std::cout << bure;

        std::cout << std::endl;
    }
	catch (std::exception& e)
	{
        std::cout << "Error: " << e.what() << std::endl;
        std::cout << std::endl;
    }
}

int main()
{
    runTest("1", 1);
    runTest("2", 150);
    runTest("3", 100);
    runTest("4", 149);
    runTest("5", -999);
    runTest("6", 999);
    return (0);
}