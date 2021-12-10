/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/10 11:09:29 by user42            #+#    #+#             */
/*   Updated: 2021/12/10 14:15:44 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

int main(int ac, char **av)
{
    Karen   karen;

    if (ac == 1)
        std::cout << "Enter One Argument Please" << std::endl;
    else if (ac > 2)
        std::cout << "Only One Argument Please" << std::endl;
    else
        karen.complain(av[1]);
    return (0);
}