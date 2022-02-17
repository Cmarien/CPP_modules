/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 18:19:42 by cmarien           #+#    #+#             */
/*   Updated: 2022/02/17 13:42:49 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{
private:

public:
	FragTrap(void);
	FragTrap(const FragTrap &);
	FragTrap(const std::string);
	const FragTrap&	operator=(const FragTrap &);
	~FragTrap();

	void attack(std::string const & target);
	void	highFivesGuys(void);
};


#endif