/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:55:35 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 14:49:20 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

void runTest(std::string const& name, int grade)
{
    ShrubberyCreationForm   shrub(name);
    RobotomyRequestForm rob(name);
    PresidentialPardonForm  pres(name);
    Intern  slave;
    Form* rrf;


    try {
        std::cout << "< " << name << "'s test >" << std::endl;
        Bureaucrat bure(name, grade);
        std::cout << bure;
        rrf = slave.makeForm("Shrubbery Creation", name);
        std::cout << *rrf;
        bure.signForm(*rrf);
        bure.executeForm(*rrf);
        rrf->execute(bure);
        std::cout << std::endl;

        rrf = slave.makeForm("Robotomy Request", name);
        std::cout << *rrf;
        bure.signForm(*rrf);
        bure.executeForm(*rrf);
        rrf->execute(bure);
        std::cout << std::endl;
        
        rrf = slave.makeForm("Presidential Pardon", name);
        std::cout << *rrf;
        bure.signForm(*rrf);
        bure.executeForm(*rrf);
        rrf->execute(bure);
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
    runTest("Bureaucrat_1", 1);
    runTest("Bureaucrat_2", 5);
    runTest("Bureaucrat_3", 25);
    runTest("Bureaucrat_4", 45);
    runTest("Bureaucrat_5", 72);
    runTest("Bureaucrat_6", 137);
    runTest("Bureaucrat_7", 145);
    runTest("Bureaucrat_8", 150);
    runTest("Bureaucrat_9", 999);
    return (0);
}