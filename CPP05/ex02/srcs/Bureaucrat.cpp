/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:55:34 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/24 13:43:34 by cmarien          ###   ########.fr       */
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

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
		std::cout << this->getName() << " signs " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << this->getName() << " cannot sign because ";
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
}

Bureaucrat::Bureaucrat(std::string nam, int _note) : name(nam)
{
	checkGrade(_note);
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat)
{
	*this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
}
