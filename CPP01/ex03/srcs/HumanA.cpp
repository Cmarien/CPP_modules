/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:12:03 by user42            #+#    #+#             */
/*   Updated: 2022/02/17 12:18:30 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void    HumanA::attack()
{
    std::string str = this->weapon.getType();
    std::cout << this->name << " attacks with his " << this->weapon.getType() << std::endl;
}

HumanA::HumanA(std::string nam, Weapon &wea) : name(nam), weapon(wea)
{
    std::cout << "HumanA named " << this->name << " has been created" << std::endl;
    return ;
}

HumanA::~HumanA()
{
    std::cout << "HumanA named " << this->name << " has been deleted" << std::endl;
    return ;
}
