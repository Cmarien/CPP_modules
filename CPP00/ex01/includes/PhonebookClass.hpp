/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:49:04 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/08 15:41:35 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONECLASS_HPP
# define PHONECLASS_HPP

#include "ContactClass.hpp"

class	Phonebook	{

public:

	int	index;
	Phonebook(void);
	~Phonebook(void);
	contact contacts[8];
};

#endif