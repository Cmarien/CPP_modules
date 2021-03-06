/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 10:03:33 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/01 10:49:38 by cmarien          ###   ########.fr       */
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

int		checkCin(std::string &tmp)
{
	int index = 0;
	while(tmp[index] && (tmp[index] == ' ' || tmp[index] == '\t' || tmp[index] == '\n'))
		index++;
	if (tmp[index])
	{
		tmp.erase(0, index);
		return 1;
	}
	return 0;
}

void	cmd_search(Phonebook *Phonebook)
{
	int		index;
	int		jdex;
	char	c;
	std::string tmp;

	index = -1;
	jdex = -1;
	display_10("index");
	while (++jdex < 3)
		display_10(Phonebook->contacts->getCoordName(jdex));
	std::cout << std::endl;
	while (++index <= Phonebook->getIndex() && index < 8)
	{
		jdex = -1;
		c = '0' + index;
		std::cout << "         " << c << "|";
		while (++jdex < 3)
			display_10(Phonebook->contacts[index].getCoord(jdex));
		std::cout << std::endl;
	}
	std::cout << "Enter index : ";
	std::cin >> tmp;
	if (tmp.length() > 1)
		index = 9;
	else
		index = tmp[0] - '0';
	if (index <= Phonebook->getIndex() && index < 8)
	{
		jdex = -1;
		while (++jdex < 5)
		{
			std::cout << Phonebook->contacts[index].getCoordName(jdex) << " : " << Phonebook->contacts[index].getCoord(jdex) << std::endl;
		}
	}
	else
		std::cout << "Wrong index" << std::endl;
	
}

void	cmd_add(Phonebook *Phonebook)
{
	int	index;
	std::string tmp;

	index = -1;
	Phonebook->setIndex();
	while (index++ < 4)
	{
		std::cout << Phonebook->contacts[Phonebook->getJdex()].getCoordName(index) << std::endl;
		std::getline(std::cin, tmp);
		if (checkCin(tmp))
			Phonebook->contacts[Phonebook->getJdex()].setCoord(tmp, index);
		else
			index--;
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