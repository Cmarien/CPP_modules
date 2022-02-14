/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 14:09:21 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 14:37:08 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"

class Intern
{
private:

public:
	Intern();
	Intern(const Intern&);
	~Intern();

	const Intern&	operator=(const Intern&);
	Form	*makeForm(std::string formName, std::string target);

	class NoSuchFormException : public std::exception
	{
	public:
		const char* what() const throw();
	};
};

#endif