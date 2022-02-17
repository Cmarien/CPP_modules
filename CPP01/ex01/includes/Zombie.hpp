/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:03:14 by user42            #+#    #+#             */
/*   Updated: 2022/02/17 12:07:34 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;
public:
             Zombie(void);
             Zombie(std::string name);
            ~Zombie(void);
    void    set_name(std::string name);
    void    announce(void);
};

Zombie*     newZombie(std::string name);
void		randomChump(std::string name);
Zombie*     zombieHorde(int N, std::string name);

#endif