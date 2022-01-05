/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:05:19 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 14:05:35 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "WrongCat.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main(void)
{
	int	i;

	Animal *animals[10];
	i = -1;
	while (++i < 5)
		animals[i] = new Dog();
	while (i < 10)
		animals[i++] = new Cat();

	std::cout << std::endl;
	
	animals[0]->GetBrain()->ideas[0] = "OUI\n";
	std::cout << "animals 0 idea[0] " << animals[0]->GetBrain()->ideas[0];
	*(animals[1]) = *(animals[0]);
	animals[0]->GetBrain()->ideas[0] = "NON\n";
	std::cout << "animals 0 idea[0] " << animals[0]->GetBrain()->ideas[0];
	std::cout << "animals 1 idea[0] " << animals[1]->GetBrain()->ideas[0];
	std::cout << std::endl;

	i = -1;
	while (++i < 10)
		delete animals[i];
	return(0);
}