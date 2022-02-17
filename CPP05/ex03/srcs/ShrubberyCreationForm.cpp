/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 13:59:00 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 15:38:02 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

void	ShrubberyCreationForm::exec() const
{
	std::string		file;
	std::ofstream	fout;
	file = this->target + "_shrubbery";
	fout.open(file.c_str());

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

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("Shrubbery Creation", 145, 137), target(target)
{
	std::cout << "Shrubb Constructor" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& copy)
{
	std::cout << "Shrubb Copy Constructor" << std::endl;
	*this = copy;
}

const ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& copy)
{
	(void)copy;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "Shrubb Destructor" << std::endl;
}