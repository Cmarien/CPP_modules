/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/26 12:48:20 by cmarien           #+#    #+#             */
/*   Updated: 2022/01/26 14:45:46 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

class PresidentialPardonForm : public Form
{
private:
	const std::string target;
public:
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm&);
	~PresidentialPardonForm();

	const PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
	void	exec() const;
	const std::string	getTarget() const;
};



#endif