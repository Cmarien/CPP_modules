/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:05:19 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/31 11:57:28 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	Animal meta;
	const Animal* i = new Cat();
	const Animal* j = new Dog();
	const WrongAnimal* h = new WrongCat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	std::cout << h->getType() << " " << std::endl;
	std::cout << meta.getType() << " " << std::endl;

	j->MakeSound();
	i->MakeSound();
	h->MakeSound();
	meta.MakeSound();
	
	delete h;
	delete j;
	delete i;

	return(0);
}