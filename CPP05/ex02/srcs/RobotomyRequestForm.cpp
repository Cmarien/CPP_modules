/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:06:36 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 14:04:41 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

const std::string	RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::exec() const
{
	srand(time(NULL));
	int	random = rand() % 2;
	std::cout << "*Bruits de perceuses* ";
	if (random == 1)
		std::cout << this->getTarget() << " a bien été robotomizé. ";
	else
		std::cout << "Echec! ";
	std::cout << "*Bruits de perceuses*" << std::endl;
}

const RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& copy)
{
		(void)copy;
		return (*this);
}

//Constructors/Destructor

RobotomyRequestForm::RobotomyRequestForm(std::string targe) : Form("Robotomy Request", 72, 45), target(targe)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	*this = copy;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}