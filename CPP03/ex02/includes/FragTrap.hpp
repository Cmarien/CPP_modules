/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:19:42 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 18:42:07 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:

public:
	FragTrap(void);
	FragTrap(const FragTrap &);
	FragTrap(const std::string);
	const FragTrap&	operator=(const FragTrap &);
	~FragTrap();

	void	highFivesGuys(void);
};


#endif