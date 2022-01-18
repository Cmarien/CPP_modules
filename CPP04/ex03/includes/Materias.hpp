/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Materias.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 15:36:04 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/18 12:13:38 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIAS_HPP
# define MATERIAS_HPP

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
private:
public:
	Ice();
	Ice(const Ice& ice);
	const Ice&	operator=(const Ice&);
	~Ice();

	AMateria* clone() const;
	void use(ICharacter& target);
};


class Cure : public AMateria
{
private:
public:
	Cure();
	Cure(const Cure& cure);
	const Cure&	operator=(const Cure&);
	~Cure();

	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif