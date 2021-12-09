/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 10:45:25 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 11:10:17 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie* zombie1;

    zombie1 = newZombie("z1");
    zombie1->announce();
    delete zombie1;
    randomChump("z2");
    Zombie  zombie3("z3");
    zombie3.announce();
    return (0);
}