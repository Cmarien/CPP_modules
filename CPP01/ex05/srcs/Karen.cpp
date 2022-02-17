/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:09:33 by user42            #+#    #+#             */
/*   Updated: 2022/02/17 12:26:17 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

void    Karen::debug(void)
{
    std::cout << "I love to get extra baconfor my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void    Karen::info(void)
{
    std::cout << "I cannot believe adding extrabacon cost more money. You don’t put enough! If you did I would not have to askfor it!" << std::endl;
}

void    Karen::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve beencoming here for years and you just started working here last month." << std::endl;
}

void    Karen::error(void)
{
    std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index;

    index = 0;
    while (level != levels[index] && index <= 3)
        index++;
    if (index == 4)
        std::cout << "Wrong Argument" << std::endl;
    else
    {
        (this->*f[index])();
    }
    return ; 
}

Karen::Karen(void)
{
    this->f[0] = &Karen::debug;
    this->f[1] = &Karen::info;
    this->f[2] = &Karen::warning;
    this->f[3] = &Karen::error;
    std::cout << "Karen has been created" << std::endl;
    return ;
}

Karen::~Karen(void)
{
    std::cout << "Karen has been deleted" << std::endl;
    return ;
}
