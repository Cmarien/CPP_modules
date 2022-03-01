/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:28:01 by user42            #+#    #+#             */
/*   Updated: 2022/03/01 09:39:48 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <string>

class	contact	{

private:
	std::string	coords[5];
	std::string coords_name[5];
public:
	contact(void);
	~contact(void);
	void	setCoord(std::string, int);
	std::string	getCoord(int);
	std::string getCoordName(int);
};

#endif