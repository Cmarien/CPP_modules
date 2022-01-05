/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:06:13 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/05 14:38:21 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include "Brain.hpp"

class Animal
{
protected:
	std::string type;

private:

public:
	Animal();
	Animal(const Animal &);
	virtual const Animal& operator=(const Animal &) = 0;
	virtual ~Animal();

	virtual void MakeSound() const = 0;
	std::string	getType() const;
	virtual Brain *GetBrain() const = 0;
};


#endif