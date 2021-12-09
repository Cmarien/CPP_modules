/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:03:14 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 11:56:42 by user42           ###   ########.fr       */
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
            ~Zombie(void);
    void    set_name(std::string name);
    void    announce(void);
};

Zombie*     newZombie(std::string name);
void		randomChump(std::string name);
Zombie*     zombieHorde(int N, std::string name);

#endif