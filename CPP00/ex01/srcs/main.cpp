/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:03:33 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/08 15:52:46 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ContactClass.hpp"
#include "PhonebookClass.hpp"


void	display_10(std::string str)
{
	if (str.length() <= 10)
	{
		for (int i = str.length(); i < 10; i++)
			std::cout << " ";
		std::cout << str;
	}
	else
	{
		for (int k = 0; k < 9; k++)
			std::cout << str[k];
		std::cout << ".";
	}
	std::cout << "|";
}

void	cmd_search(Phonebook *Phonebook)
{
	int		index;
	int		jdex;
	char	c;

	index = -1;
	jdex = -1;
	display_10("index");
	while (++jdex < 3)
		display_10(Phonebook->contacts->coords_name[jdex]);
	std::cout << std::endl;
	while (++index <= Phonebook->index && index < 8)
	{
		jdex = -1;
		c = '0' + index;
		std::cout << "         " << c << "|";
		while (++jdex < 3)
			display_10(Phonebook->contacts[index].coords[jdex]);
		std::cout << std::endl;
	}
	std::cout << "Enter index : ";
	std::cin >> index;
	if (index <= Phonebook->index)
	{
		jdex = -1;
		while (++jdex < 5)
		{
			std::cout << Phonebook->contacts[index].coords_name[jdex] << " : " << Phonebook->contacts[index].coords[jdex] << std::endl;
		}
	}
	else
		std::cout << "Wrong index" << std::endl;
	
}

void	cmd_add(Phonebook *Phonebook)
{
	int	index;

	index = -1;
	Phonebook->index++;
	if (Phonebook->index >= 8)
		std::cout << "Already 8 membres in the book" << std::endl;
	else
	{
		while (index++ < 4)
		{
			std::cout << Phonebook->contacts[Phonebook->index].coords_name[index] << std::endl;
			std::getline(std::cin, Phonebook->contacts[Phonebook->index].coords[index]);
		}
	}
}

int	launch_cmd(int	cmd, Phonebook *Phonebook)
{
	if (cmd == 0)
		cmd_add(Phonebook);
	if (cmd == 1)
		cmd_search(Phonebook);
	if (cmd == 2)
	{
		std::cout << "Good Bye" << std::endl;
		return (0);
	}
	return (1);
}

int	check_cmd(std::string	str)
{
	int			index;
	int			jdex;
	int			check;
	std::string	cmd[3];

	jdex = -1;
	cmd[0] = "ADD";
	cmd[1] = "SEARCH";
	cmd[2] = "EXIT";
	while (++jdex < 3)
	{
		index = -1;
		check = 1;
		if (str.length() != cmd[jdex].length())
			check = 0;
		while (str[++index] && check == 1)
			if (str[index] != cmd[jdex][index])
				check = 0;
		if (check == 1)
			break ;
	}
	return (jdex);
}

void	init(void)
{
	std::cout << "Welcome to the Phonebook" << std::endl << "You can ADD up to 8 contacts"
	<< std::endl << "You can also SEARCH for added contacts" << std::endl << "And you can EXIT the Phonebook" << std::endl;
}

int	main(void)
{
	std::string	str;
	Phonebook book;

	init();
	while (1)
	{
		std::getline(std::cin, str);
		if (launch_cmd(check_cmd(str), &book) == 0)
			break ;
	}
	return (0);
}