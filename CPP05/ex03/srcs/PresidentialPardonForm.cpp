/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:50:50 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 14:45:13 by cmarien          ###   ########.fr       */
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
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	*this = copy;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}
