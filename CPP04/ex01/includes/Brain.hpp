/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 13:16:17 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 14:28:24 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain
{
private:

public:
	Brain();
	Brain(const Brain&);
	Brain&	operator=(const Brain&);
	~Brain();

	std::string ideas[100];
};

#endif