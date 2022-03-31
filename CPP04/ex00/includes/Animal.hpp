/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:06:13 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/31 10:59:45 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class Animal
{
protected:
	std::string type;

private:

public:
	Animal();
	Animal(const Animal &);
	const Animal& operator=(const Animal &);
	virtual ~Animal();

	virtual void MakeSound() const;
	std::string	getType() const;
};


#endif