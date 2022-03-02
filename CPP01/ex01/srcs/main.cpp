/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:35:58 by user42            #+#    #+#             */
/*   Updated: 2022/03/02 12:23:27 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* horde;
    horde = zombieHorde(5, "Zombie");
    horde[3].set_name("Zomby");
    horde[3].announce();
    delete [] horde;
    return(0) ;
}