/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:28:01 by user42            #+#    #+#             */
/*   Updated: 2021/12/08 15:28:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACTCLASS_HPP
# define CONTACTCLASS_HPP

#include <string>

class	contact	{

private:

public:
	contact(void);
	~contact(void);
	std::string	coords[5];
	std::string coords_name[5];
};

#endif