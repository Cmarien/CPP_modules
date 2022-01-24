/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:59:00 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/24 15:10:55 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::execute(const Bureaucrat &obj) const
{
	std::string		file;
	std::ofstream	fout;

	if (this->getExecGrade() >= obj.getGrade())
	{
		if (this->getSigned())
		{
			file = this->target + "_shrubbery";
			fout.open(file);

			fout << "        *                    *                    *        " << std::endl;
			fout << "       ***                  ***                  ***       " << std::endl;
			fout << "      *****                *****                *****      " << std::endl;
			fout << "     *******              *******              *******     " << std::endl;
			fout << "    *********            *********            *********    " << std::endl;
			fout << "   ***********          ***********          ***********   " << std::endl;
			fout << "  *************        *************        *************  " << std::endl;
			fout << " ***************      ***************      *************** " << std::endl;
			fout << "*****************    *****************    *****************" << std::endl;
			fout << "       ###                  ###                   ###      " << std::endl;

			fout.close();
		}
		else
			std::cout << this->getName() << " is not signed" << std::endl;
	}
	else
		throw Form::GradeTooLowExecException();
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreation", 145, 137), target(target)
{
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	*this = copy;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	(void)copy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
}