/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/27 15:13:13 by user42            #+#    #+#             */
/*   Updated: 2022/03/31 13:32:36 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

int is_number(char c)
{
    if (c <= '9' && c >= '0')
        return (1);
    return (0);
}

int is_ascii(char c)
{
    if (c > 0 && c < 127)
        return (1);
    return (0);
}

const std::string   check_dot(std::string arg, int index)
{
    while (is_number(arg[index]))
        index++;
    if (arg[0] == '.')
    {
        if (!(arg[index]))
            return "double";
        if (arg[index] == 'f' && !(arg[index + 1]) && arg[index - 1] != '.')
           return "double";
    }
    else
    {
        if (!(arg[index]))
            return "double";
        if (arg[index] == 'f' && !(arg[index + 1]))
           return "double";
    }
    return "invalid";
}

const std::string   getType(std::string &arg, Convert &conv)
{
    int index = 0;

    if ((arg.compare("inff") == 0 || arg.compare("+inff") == 0 || arg.compare("-inff") == 0 || arg.compare("nanf") == 0))
    {
        conv.setSpe();
        arg[arg.length() - 1] = 0;
        return "double";
    }
    if ((arg.compare("inf") == 0 || arg.compare("+inf") == 0 || arg.compare("-inf") == 0 || arg.compare("nan") == 0))
    {
        conv.setSpe();
        return "double";
    }
    if (arg[index] == '+' || arg[index] == '-')
        index++;
    if (!(is_number(arg[index])))
    {
        if (is_ascii(arg[index]) && !(arg[index + 1]))
            return "char";
        return (check_dot(arg, ++index));
    }
    while (is_number(arg[index]))
        index++;
    if (!(arg[index]))
        return "double";
    if (arg[index] == '.')
        index++;
    return (check_dot(arg, index));
}

int main(int ac, char **av)
{
    Convert conv;
    std::string arg = av[1];
    if (ac != 2)
    {
        std::cout << "Argument Error" << std::endl;
        return (-1);
    }
    const std::string type = getType(arg, conv);
    conv.setValues(type, arg);
    std::cout << conv;
    return (0);
}