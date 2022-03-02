/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:03:09 by user42            #+#    #+#             */
/*   Updated: 2022/03/02 12:20:05 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    std::cout << "A new Zombie" << this->name << " has been created" << std::endl;
    return ;
}

Zombie::Zombie(std::string nam)
{
    this->name = nam;
    std::cout << "Zombie named " << this->name << " has been created" << std::endl;
    return ;
}

Zombie::~Zombie()
{
    std::cout << "Zombie named " << this->name << " has been destroyed" << std::endl;
    return ;
}