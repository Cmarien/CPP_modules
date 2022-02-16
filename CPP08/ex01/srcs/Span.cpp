/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:46:12 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/16 13:51:17 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

const char *Span::SetFullException::what() const throw()
{
	return "Already Maximum Elements\n";
}

const char *Span::NotEnoughNumbersException::what() const throw()
{
	return "Not Enough Numbers\n";
}

void	Span::addNumber(int number)
{
	if (this->tab.size() == this->n)
	{
		throw SetFullException();
	}
	this->tab.insert(number);
}

int		Span::shortestSpan()
{
	std::multiset<int>::iterator it = this->tab.begin();
	std::multiset<int>::iterator it1 = ++this->tab.begin();
	int diff = abs(*it1 - *it);
	int	new_diff;

	while (it1 != this->tab.end())
	{
		new_diff = abs(*it1 - *it);
		if (new_diff < diff)
			diff = new_diff;
		it++;
		it1++;
	}
	return (diff);
}

int		Span::longestSpan()
{
	std::multiset<int>::iterator it = this->tab.begin();
	std::multiset<int>::iterator it1 = --this->tab.end();
	return (abs(*it1 - *it));
}

Span::Span(unsigned int number) : n(number)
{
	std::cout << "Default Constructor for Span called" << std::endl;
	if (this->n <= 1)
	{
		throw NotEnoughNumbersException();
	}
	return ;
}

Span::Span(const Span& newSpan)
{
	*this = newSpan;
	std::cout << "Copy Constructor for Span called" << std::endl;
	return ;
}

Span::~Span(void)
{
	std::cout << "Default Destructor for Span called" << std::endl;
	return ;
}

Span& Span::operator=(const Span& newSpan)
{
	this->n = newSpan.n;
	std::cout << "Span Assignement Operator called" << std::endl;
	return *this;
}