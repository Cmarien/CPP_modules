/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:03:09 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 11:53:15 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void    Zombie::announce()
{
    std::cout << "<" << this->name << ">" << "BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}

Zombie::Zombie()
{
    return ;
}

Zombie::~Zombie()
{
    std::cout << "Zombie named " << this->name << " has been destroyed" << std::endl;
    return ;
}