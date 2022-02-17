/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:50:50 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:37:44 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

const PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm &copy)
{
	(void)copy;
	return (*this);
}

const std::string	PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::exec() const
{
	std::cout << this->getTarget() << " a été pardonnée par Zafod Beeblebrox." << std::endl;
}

//Constructors/Destructor

PresidentialPardonForm::PresidentialPardonForm(std::string targe) : Form("Presidential Pardon", 25, 5), target(targe)
{
	std::cout << "President Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	std::cout << "President Copy Constructor" << std::endl;
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "President Destructor" << std::endl;
}
