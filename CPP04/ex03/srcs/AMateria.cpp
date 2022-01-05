/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:09:25 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 15:35:30 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

std::string const & AMateria::getType() const
{
	return (this->type);
}

//Constructors

AMateria::AMateria()
{
}

AMateria::AMateria(std::string const & type)
{
	this->type = type;
}

AMateria::AMateria(const AMateria &Am)
{
}

const AMateria&	AMateria::operator=(const AMateria &am)
{
	return (*this);
}

AMateria::~AMateria()
{
}
