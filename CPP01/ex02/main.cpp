/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/09 12:00:14 by user42            #+#    #+#             */
/*   Updated: 2021/12/09 12:05:30 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::string *ptr;

    str = "HI THIS IS BRAIN";
    std::string &ref = str;
    ptr = &str;

    std::cout << "address memory of the string : " << &str << std::endl;
    std::cout << "address by using PTR : " << ptr << std::endl;
    std::cout << "address by using REF : " << &ref << std::endl;
    std::cout << "Displaying the string using PTR : " << *ptr << std::endl;
    std::cout << "Displaying the string using REF : " << ref << std::endl;
    return (0);
}