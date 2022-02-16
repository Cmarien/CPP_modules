/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/16 12:29:14 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/16 14:28:20 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <cstdlib>
#include <set>
#include <vector>

class Span
{
private:
	unsigned int n;

public:
	Span(unsigned int number);
	Span(const Span& newSpan);
	~Span();
	std::multiset<int> tab;

	Span& operator=(const Span& newSpan);

	void	addNumber(int number);
	template<class InputIterator>
	void	addMultipleNumber(InputIterator it, InputIterator it1){
		if (this->tab.size() + std::distance(it, it1) > this->n)
			throw SetFullException();
		this->tab.insert(it, it1);
	}
	int		shortestSpan(void);
	int		longestSpan(void);

	class SetFullException : public std::exception
	{
		public:
		const char *what() const throw();
	};
	class NotEnoughNumbersException : public std::exception
	{
		public:
		const char *what() const throw();
	};
};

#endif