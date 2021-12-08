/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.class.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:49:04 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/08 11:51:17 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANNUAIRE_CLASS_HPP
# define ANNUAIRE_CLASS_HPP

#include <string>

class	contact	{

private:

public:
	contact(void);
	~contact(void);
	std::string	coords[5];
	std::string coords_name[5];
};

class	phone_book	{

private:

public:

	int	index;
	phone_book(void);
	~phone_book(void);
	contact contact[8];
};

#endif