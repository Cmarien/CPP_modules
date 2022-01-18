/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:09:25 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/18 12:17:52 by cmarien          ###   ########.fr       */
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
	return ;
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &Am)
{
	*this = Am;
}

const AMateria&	AMateria::operator=(const AMateria &am)
{
	this->type = am.type;
	return (*this);
}

AMateria::~AMateria()
{
	return ;
}
