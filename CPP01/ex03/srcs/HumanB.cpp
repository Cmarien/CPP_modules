/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:12:07 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 13:06:36 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void    HumanB::setWeapon(Weapon &wea)
{
    this->weapon = &wea;
}

void    HumanB::attack()
{
    std::string str = this->weapon->getType();
    std::cout << this->name << " attacks with his " << str << std::endl;
}

HumanB::HumanB(std::string name)
{
    this->weapon = 0;
    this->name = name;
    return ;
}

HumanB::~HumanB()
{
    return ;
}
