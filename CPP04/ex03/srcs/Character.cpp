/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 11:28:28 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/18 13:34:53 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

void	Character::equip(AMateria *m)
{
	if (this->index < 4 && this->index >= 0)
	{
		Materias[this->index] = m;
		this->index++;
	}
}

void	Character::unequip(int idx)
{
	if (idx < 4 && idx >= 0)
	{
		Materias[idx] = 0;
	}
}

void	Character::use(int idx, ICharacter &target)
{
	if (idx < 4 && idx >= 0)
	{
		Materias[idx]->use(target);
	}
}

std::string const &Character::getName() const
{
	return (this->name);
}

//Constructors/Destructor

Character::Character(std::string nam) : name(nam)
{
}

Character::Character(const Character &chara)
{
	*this = chara;
}

const Character&	Character::operator=(const Character &chara)
{
	this->name = chara.getName();
	return (*this);
}

Character::~Character()
{
	for(int i = 0; i < this->index; i++)
	{
		delete this->Materias[i];
	}
//	std::cout << "Character Desctructor Called" << std::endl;
}
