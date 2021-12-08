/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 09:06:58 by user42            #+#    #+#             */
/*   Updated: 2021/12/06 09:30:09 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    for (int i = 1; i < ac; i++)
    {
        std::string str = av[i];
        for (unsigned long j = 0; j < str.length(); j++)
            str[j] = toupper(str[j]);
        std::cout << str << std::endl;
    }
    return (0);
}