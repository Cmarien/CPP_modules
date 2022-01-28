/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:55:35 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/24 13:41:03 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"

void runTest(std::string const& name, int grade)
{
    Form test("test", 26, 2);
    try {
        std::cout << "< " << name << "'s test >" << std::endl;
        Bureaucrat bure(name, grade);
        std::cout << bure;

        bure.signForm(test);
        std::cout << test;
        test.beSigned(bure);

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
    runTest("Kaneda", 1);
    runTest("Tetsuo", 54);
    runTest("Akira", 100);
    runTest("Kiyoko", 149);
    runTest("Takashi", -999);
    return (0);
}