/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:30:32 by user42            #+#    #+#             */
/*   Updated: 2022/01/24 15:20:52 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ContactClass.hpp"

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