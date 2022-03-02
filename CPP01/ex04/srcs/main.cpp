/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmarien <cmarien@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 13:29:04 by user42            #+#    #+#             */
/*   Updated: 2022/03/02 12:32:44 by cmarien          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

std::string replace(std::string strings, std::string s1, std::string s2)
{
    std::string found;
    int         len1 = s1.length();
    int         len2 = s2.length();
	if (len1 == 0)
		return (strings);
    int         pos = strings.find(s1, 0);
	
    while (pos >= 0)
    {
        strings = strings.substr(0, pos) + s2 + strings.substr(pos + len1, strings.length());
        pos += len2;
        pos = strings.find(s1, pos);
    }
    return (strings);
}

int check_args(int ac, char *file)
{
    std::ifstream   ifs(file);
	if (ac != 4)
    {
        std::cout << "Wrong Number of Arguments" << std::endl;
        return (1);
    }
    if (!ifs)
    {
        std::cout << "Couldn't open " << file << std::endl;
        return (1);
    }
    ifs.close();
    return (0);
}

std::string get_string(char *file)
{
    std::string     str;
    std::ifstream   ifs(file);
    
    str.assign(std::istreambuf_iterator<char>(ifs), std::istreambuf_iterator<char>());
    ifs.close();
    return (str);
}

int main(int ac, char **av)
{
    std::string str;

    if (check_args(ac, av[1]) == 1)
        return (1);
    str = get_string(av[1]);
    str = replace(str, av[2], av[3]);
    std::string tmp = av[1];
    tmp = tmp + ".replace";
    std::ofstream ofs(tmp.c_str());
    ofs << str;
	ofs.close();
    return (0);
}
