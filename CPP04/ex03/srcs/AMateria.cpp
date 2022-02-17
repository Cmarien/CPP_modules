/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:09:25 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:56:53 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "AMateria.hpp"

std::string const & AMateria::getType() const
{
	return (this->type);
}

void	AMateria::use(ICharacter &target)
{
	(void)target;
}

//Constructors

AMateria::AMateria()
{
	std::cout << "AMateria Constructor" << std::endl;
	return ;
}

AMateria::AMateria(std::string const & type)
{
	std::cout << "AMateria Constructor" << std::endl;
	this->type = type;
}

AMateria::AMateria(const AMateria &Am)
{
	std::cout << "AMateria Copy constructor" << std::endl;
	*this = Am;
}

const AMateria&	AMateria::operator=(const AMateria &am)
{
	this->type = am.type;
	return (*this);
}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor" << std::endl;
	return ;
}
