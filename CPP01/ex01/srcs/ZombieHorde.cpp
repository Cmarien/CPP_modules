/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 11:18:48 by user42            #+#    #+#             */
/*   Updated: 2022/02/17 12:12:49 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	Zombie*	horde = new Zombie[N];
	for (int i = 0; i < N; i++)
	{
		horde[i].set_name(name);
		horde[i].announce();
	}
	return (horde);
}