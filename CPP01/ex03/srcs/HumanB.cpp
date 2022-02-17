/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:12:07 by user42            #+#    #+#             */
/*   Updated: 2022/02/17 12:19:34 by cmarien          ###   ########.fr       */
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
    std::cout << "HumanB named " << this->name << " has been created" << std::endl;
    return ;
}

HumanB::~HumanB()
{
    std::cout << "HumanB named " << this->name << " has been deleted" << std::endl;
    return ;
}
