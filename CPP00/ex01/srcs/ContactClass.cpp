/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:30:32 by user42            #+#    #+#             */
/*   Updated: 2022/03/01 09:39:31 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

std::string contact::getCoord(int index)
{
	return (this->coords[index]);
}

std::string contact::getCoordName(int index)
{
	return (this->coords_name[index]);
}

void	contact::setCoord(std::string name, int index)
{
	this->coords[index] = name;
}

contact::contact(void)
{
	this->coords_name[0] = "first_name";
	this->coords_name[1] = "last_name";
	this->coords_name[2] = "nickname";
	this->coords_name[3] = "phone_number";
	this->coords_name[4] = "darkest_secret";
	return ;
}

contact::~contact(void)
{
	return ;
}