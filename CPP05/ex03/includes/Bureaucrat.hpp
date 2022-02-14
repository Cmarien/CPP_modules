/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/20 13:55:56 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 13:19:56 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
class Bureaucrat;
#include "Form.hpp"

class Bureaucrat
{
private:
	int	note;
	const std::string name;
public:
	Bureaucrat();
	Bureaucrat(std::string nam, int _note);
	Bureaucrat(const Bureaucrat&);
	~Bureaucrat();


	int	getGrade() const;
	const std::string	getName()const ;
	void	increment();
	void	decrease();
	void	checkGrade(int newGrade);
	void	signForm(Form&);
	void	executeForm(Form const & form);
	const Bureaucrat&	operator=(const Bureaucrat&);
	class GradeTooHighException : public std::exception
	{
	public:
		char const* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
	public:
	    char const* what() const throw();
	};

};
#include <iostream>
std::ostream& operator<<(std::ostream& out, Bureaucrat const& rhs);

#endif