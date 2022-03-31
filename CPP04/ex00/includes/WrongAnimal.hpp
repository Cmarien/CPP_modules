/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 12:55:33 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/31 11:05:25 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
	std::string type;

private:

public:
	WrongAnimal();
	WrongAnimal(const WrongAnimal &);
	const WrongAnimal& operator=(const WrongAnimal &);
	virtual ~WrongAnimal();

	void MakeSound() const;
	std::string	getType() const;
};

#endif