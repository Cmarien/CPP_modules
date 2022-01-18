/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 12:50:57 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/18 13:34:05 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

void	MateriaSource::learnMateria(AMateria* mat)
{
	if (this->idx < 4 && this->idx >= 0)
	{
		materias[this->idx] = mat;
		this->idx++;
	}
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for(int i = 0; i < 4; i++)
	{
		if (type == this->materias[i]->getType())
		{
			AMateria* x = this->materias[i];
			return (x);
		}
	}
	return (0);
}

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource& mat)
{
	*this = mat;
}

const MateriaSource&	MateriaSource::operator=(const MateriaSource& mat)
{
	for(int i = 0; i < 4; i++)
	{
		this->materias[i] = mat.materias[i];
	}
	return (*this);
}

MateriaSource::~MateriaSource()
{
}
