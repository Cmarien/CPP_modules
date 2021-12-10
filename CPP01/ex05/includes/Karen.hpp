/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:09:43 by user42            #+#    #+#             */
/*   Updated: 2021/12/10 14:07:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef KAREN_HPP
# define KAREN_HPP

#include <iostream>

class Karen
{
private:
    void    debug(void);
    void    info(void);
    void    warning(void);
    void    error(void);
    void    (Karen::*f[4])(void);
public:
    Karen(void);
    ~Karen(void);
    void    complain(std::string level);
};

#endif