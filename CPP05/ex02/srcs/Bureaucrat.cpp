/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:55:34 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:10:58 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

char const* Bureaucrat::GradeTooHighException::what() const throw()
{
    return "Grade is too high.";
}

char const* Bureaucrat::GradeTooLowException::what() const throw()
{
    return "Grade is too low.";
}

int	Bureaucrat::getGrade() const
{
	return (this->note);
}

const std::string	Bureaucrat::getName() const
{
	return (this->name);
}

void	Bureaucrat::increment()
{
	checkGrade(this->note - 1);
}

void	Bureaucrat::decrease()
{
	checkGrade(this->note + 1);
}

void	Bureaucrat::checkGrade(int newGrade)
{
	if (newGrade > 150)
		throw Bureaucrat::GradeTooHighException();
	else if (newGrade < 1)
		throw Bureaucrat::GradeTooLowException();
	else
		this->note = newGrade;
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->getName() << " executs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot execut " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
	
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign " << form.getName() << " because ";
		std::cerr << e.what() << '\n';
	}
}

//Overloads

const Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
	this->note = bureaucrat.getGrade();
	return (*this);
}

std::ostream& operator<<(std::ostream& out, Bureaucrat const& bureaucrat)
{
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << ".";
	out << std::endl;
    return (out);
}

//Constructors/Destructor

Bureaucrat::Bureaucrat() : note(150), name("Random Bureaucrat")
{
	std::cout << "Bureaucrat Constructor" << std::endl;
}

Bureaucrat::Bureaucrat(std::string nam, int _note) : name(nam)
{
	std::cout << "Bureaucrat Constructor" << std::endl;
	checkGrade(_note);
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	std::cout << "Bureaucrat Copy Constructor" << std::endl;
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat Destructor" << std::endl;
}
