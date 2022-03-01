/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 09:49:04 by cmarien           #+#    #+#             */
/*   Updated: 2022/03/01 09:43:11 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONECLASS_HPP
# define PHONECLASS_HPP

#include "ContactClass.hpp"

class	Phonebook	{

private:
	int	index;
	int jdex;

public:
	Phonebook(void);
	~Phonebook(void);
	contact contacts[8];
	int		getIndex(void);
	void	setIndex(void);
};

#endif