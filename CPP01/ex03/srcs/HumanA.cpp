/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:12:03 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 13:19:27 by user42           ###   ########.fr       */
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
    return ;
}

HumanA::~HumanA()
{
    return ;
}
