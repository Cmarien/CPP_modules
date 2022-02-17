/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:36:00 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 14:58:34 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ICharacter.hpp"
#include "Materias.hpp"

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << " wounds *" <<  std::endl;
}

AMateria* Ice::clone() const
{
	AMateria *x = new Ice;
	return (x);
}

AMateria* Cure::clone() const
{
	AMateria *x = new Cure;
	return (x);
}

//Constructors////////////////

Ice::Ice()
{
	std::cout << "Ice Constructor" << std::endl;
	this->type = "ice";
}

Cure::Cure()
{
	std::cout << "Cure Constructor" << std::endl;
	this->type = "cure";
}

//Copy Constructors

Ice::Ice(const Ice& ice)
{
	std::cout << "Ice Copy Constructor" << std::endl;
	*this = ice;
}

Cure::Cure(const Cure& cure)
{
	std::cout << "Cure Copy Constructor" << std::endl;
	*this = cure;
}

//Operators

const Ice& Ice::operator=(const Ice &ice)
{
	this->type = ice.getType();
	return (*this);
}

const Cure& Cure::operator=(const Cure &cure)
{
	this->type = cure.getType();
	return (*this);
}

//Destructors

Ice::~Ice()
{
	std::cout << "Ice Destructor Called" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor Called" << std::endl;
}
