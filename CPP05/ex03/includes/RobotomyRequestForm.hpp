/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/24 15:04:33 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 14:45:38 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <time.h> 

class RobotomyRequestForm : public Form
{
private:
	const std::string target;
public:
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm&);
	~RobotomyRequestForm();
	const RobotomyRequestForm&	operator=(const RobotomyRequestForm&);

	void	exec() const;
	const std::string	getTarget() const;
};

#endif