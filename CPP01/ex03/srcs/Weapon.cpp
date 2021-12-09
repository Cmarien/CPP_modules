/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:12:11 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 13:19:48 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

void	Weapon::setType(std::string type)
{
	this->type = type;
}

std::string const &Weapon::getType()
{
    std::string const &ref = this->type;
    return (ref);
}

Weapon::Weapon(std::string type)
{
	this->type = type;
    return ;
}

Weapon::~Weapon()
{
    return ;
}