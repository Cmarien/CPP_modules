/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:36:00 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 15:48:56 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Materias.hpp"

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at NAME *" << std::endl;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals NAME’s wounds *" <<  std::endl;
}

//Constructors////////////////

Ice::Ice()
{
	this->type = "ice";
}

Cure::Cure()
{
	this->type = "cure";
}

//Copy Constructors

Ice::Ice(const Ice& ice)
{
	*this = ice;
}

Cure::Cure(const Cure& cure)
{
	*this = cure;
}

//Operators

const Ice& Ice::operator=(const Ice &ice)
{
	return (*this);
}

const Cure& Cure::operator=(const Cure &cure)
{
	return (*this);
}

//Destructors

Ice::~Ice()
{
}

Cure::~Cure()
{
}
