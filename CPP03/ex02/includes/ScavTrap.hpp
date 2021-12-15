/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:52:42 by cmarien           #+#    #+#             */
/*   Updated: 2021/12/15 18:24:42 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:

public:
	ScavTrap(void);
	ScavTrap(const ScavTrap &);
	ScavTrap(const std::string);
	const ScavTrap&	operator=(const ScavTrap &);
	~ScavTrap();

	void attack(std::string const & target);
	void guardGate();
};


#endif