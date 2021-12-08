/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Annuaire.class.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:48:56 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/08 12:33:12 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Annuaire.class.hpp"

phone_book::phone_book(void)
{
	phone_book::index = -1;
	return ;
}

phone_book::~phone_book(void)
{
	return ;
}

contact::contact(void)
{
	contact::coords_name[0] = "first_name";
	contact::coords_name[1] = "last_name";
	contact::coords_name[2] = "nickname";
	contact::coords_name[3] = "phone_number";
	contact::coords_name[4] = "darkest_secret";
	return ;
}

contact::~contact(void)
{
	return ;
}