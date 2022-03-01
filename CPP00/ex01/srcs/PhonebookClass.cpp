/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:48:56 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/01 09:52:39 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"

void	Phonebook::setIndex(void)
{
	this->jdex++;;
	this->index = this->jdex;
}

int		Phonebook::getIndex(void)
{
	if (this->jdex >= 7)
		return (7);
	return(this->index);
}

Phonebook::Phonebook(void)
{
	this->index = -1;
	this->jdex = -1;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}