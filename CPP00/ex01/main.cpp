/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:03:33 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/08 12:40:35 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Annuaire.class.hpp"

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

void	cmd_search(phone_book *phone_book)
{
	int		index;
	int		jdex;
	char	c;

	index = -1;
	jdex = -1;
	display_10("index");
	while (++jdex < 3)
		display_10(phone_book->contact->coords_name[jdex]);
	std::cout << std::endl;
	while (++index <= phone_book->index && index < 8)
	{
		jdex = -1;
		c = '0' + index;
		std::cout << "         " << c << "|";
		while (++jdex < 3)
			display_10(phone_book->contact[index].coords[jdex]);
		std::cout << std::endl;
	}
	std::cout << "Enter index :" << std::endl;
	std::cin >> int 
}

void	cmd_add(phone_book *phone_book)
{
	int	index;

	index = -1;
	phone_book->index++;
	if (phone_book->index >= 8)
		std::cout << "Already 8 membres in the book" << std::endl;
	else
	{
		while (++index < 5)
		{
			std::cout << phone_book->contact[phone_book->index].coords_name[index] << std::endl;
			std::cin >> phone_book->contact[phone_book->index].coords[index];
		}
	}
}

int	launch_cmd(int	cmd, phone_book *phone_book)
{
	if (cmd == 0)
		cmd_add(phone_book);
	if (cmd == 1)
		cmd_search(phone_book);
	if (cmd == 2)
		return (0);
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

int	main(int ac, char **av)
{
	int			index;
	std::string	str;
	phone_book book;

	index = 0;
	while (1)
	{
		std::cin >> str;
		if (launch_cmd(check_cmd(str), &book) == 0)
			break ;
	}
	return (0);
}