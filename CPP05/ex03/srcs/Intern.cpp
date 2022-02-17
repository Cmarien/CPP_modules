/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:13:25 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:39:35 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Form* makePresidentialForm(std::string target)
{
    return new PresidentialPardonForm(target);
}
Form* makeRobotomyForm(std::string target)
{
    return new RobotomyRequestForm(target);
}
Form* makeShrubberyForm(std::string target)
{
    return new ShrubberyCreationForm(target);
}

const char* Intern::NoSuchFormException::what() const throw()
{
	return "This form doesn't exist!";
}

Form*	Intern::makeForm(std::string formName, std::string target)
{
	std::string names[3] = {"Shrubbery Creation", "Robotomy Request", "Presidential Pardon"};
	Form *(*form[3])( std::string target) = {makeShrubberyForm, makeRobotomyForm, makePresidentialForm};
	try {
		for (int i = 0; i < 3; ++i) {
			if (formName == names[i]) {
				std::cout << "Intern creates " << formName << std::endl;
				return form[i](target);
			}
		}
	}
	catch (std::exception &e) {
		throw Intern::NoSuchFormException();
	}
	return (NULL);
}

const Intern& Intern::operator=(const Intern &copy)
{
	(void)copy;
	return (*this);
}

//Constructors/Destructor

Intern::Intern()
{
	std::cout << "Intern Constructor" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	std::cout << "Inter COpy CConstructor" << std::endl;
	*this = copy;
}

Intern::~Intern()
{
	std::cout << "Intern Destructor" << std::endl;
}
