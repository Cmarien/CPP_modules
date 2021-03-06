/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:09:42 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/18 12:08:44 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria;
#include "ICharacter.hpp"

class AMateria
{
protected:
	std::string type;
private:

public:
	AMateria();
	AMateria(std::string const & type);
	AMateria(const AMateria&);
	const AMateria&	operator=(const AMateria&);
	virtual ~AMateria();

	std::string const & getType() const;
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif