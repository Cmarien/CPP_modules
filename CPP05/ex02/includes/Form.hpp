/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 11:10:45 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:11:10 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
class Form;
#include "Bureaucrat.hpp"

class Form
{
private:
	const	std::string name;
	const	int	grade_sign;
	const	int grade_exec;
	bool	is_signed;
public:

	Form();
	Form(std::string nam, int grade_si, int grade_ex);
	Form(const Form&);
	virtual ~Form();

	const Form&	operator=(const Form&);
	int	getSignGrade() const;
	int	getExecGrade() const;
	bool	getSigned() const;
	const std::string	getName() const;
	void	checkGrade(int newGrade);
	const Form& beSigned(Bureaucrat &bureacrat);
	void	execute(const Bureaucrat&) const;
	virtual void	exec() const = 0;


	class GradeTooHighException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
		const char* what() const throw();
	};
	
	class GradeTooLowExecException : public std::exception
	{
	public:
		const char* what() const throw();
	};

	class AlreadySignedException : public std::exception
	{
		public:
		const char* what() const throw();
	};

	class NotSignedException : public std::exception
	{
		public:
		const char* what() const throw();
	};
};

#include <iostream>
std::ostream& operator<<(std::ostream& out, Form const& rhs);

#endif