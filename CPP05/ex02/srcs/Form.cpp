/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:10:47 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:13:50 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

const char* Form::GradeTooHighException::what() const throw()
{
    return "Grade is too high.";
}

const char* Form::GradeTooLowException::what() const throw()
{
    return "Grade is too low.";
}

const char* Form::AlreadySignedException::what() const throw()
{
	return "Form is already signed.";
}

const char* Form::GradeTooLowExecException::what() const throw()
{
	return "Grade is too low to exec.";
}

const char*	Form::NotSignedException::what() const throw()
{
	return "Form is not signed.";
}

void	Form::checkGrade(int newGrade)
{
	if (newGrade > 150)
		throw Form::GradeTooHighException();
	else if (newGrade < 1)
		throw Form::GradeTooLowException();
}

int	Form::getSignGrade() const
{
	return (this->grade_sign);
}

int	Form::getExecGrade() const
{
	return(this->grade_exec);
}

void	Form::execute(const Bureaucrat& bure) const
{
	if (this->getExecGrade() >= bure.getGrade())
	{
		if (this->getSigned())
		{
			this->exec();
		}
		else
			throw Form::NotSignedException();
	}
	else
		throw Form::GradeTooLowExecException();
}


const std::string	Form::getName() const
{
	return (this->name);
}

bool	Form::getSigned() const
{
	return (this->is_signed);
}

const Form& Form::beSigned(Bureaucrat &bureaucrat)
{
	if(this->getSigned() == true)
		throw Form::AlreadySignedException();
	if(bureaucrat.getGrade() > this->getSignGrade())
		throw Form::GradeTooLowException();
	else
		this->is_signed = true;
	return (*this);
}

//Overloads

const Form&	Form::operator=(const Form& old)
{
	this->is_signed = old.is_signed;
	return (*this);
}

std::ostream& operator<<(std::ostream& out, Form const& form)
{
    out << form.getName() << ", form signGrade " << form.getSignGrade() << ", form execGrade " << form.getExecGrade() << ", SIGNED = ";
	if (form.getSigned() == true)
		out << "Yes.";
	else
		out << "No.";
	out << std::endl;
    return (out);
}

//Constructors/Destructor

Form::Form() : name("Default"), grade_sign(150), grade_exec(150), is_signed(false)
{
	std::cout << "Form Constructor" << std::endl;
}

Form::Form(std::string nam, int sign, int exe) : name(nam), grade_sign(sign), grade_exec(exe), is_signed(false)
{
	std::cout << "Form Constructor" << std::endl;
	checkGrade(sign);
	checkGrade(exe);
}

Form::Form(const Form& old) : name("Default"), grade_sign(150), grade_exec(150)
{
	std::cout << "Form Copy Constructor" << std::endl;
	*this = old;
}

Form::~Form()
{
	std::cout << "Form Destructor" << std::endl;
}