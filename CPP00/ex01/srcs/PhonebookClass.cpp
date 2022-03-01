/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:48:56 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/01 10:51:02 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhonebookClass.hpp"
#include <iostream>

void	Phonebook::setIndex(void)
{
	this->jdex++;;
	this->index = this->jdex;
}

int		Phonebook::getIndex(void)
{
	if (this->jdex >= 8)
		return (8);
	return(this->index);
}

int		Phonebook::getJdex(void)
{
	int tmp = this->jdex % 8;
	return(tmp);
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