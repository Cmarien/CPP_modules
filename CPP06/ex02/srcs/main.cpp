/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 11:29:51 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 12:25:04 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "a.hpp"
#include "b.hpp"
#include "c.hpp"
#include <time.h>
#include <cstdlib>
#include <iostream>

Base*   generate(void)
{
    srand(time(0));
    int x = rand() % 3;
    if (x == 0)
    {
        std::cout << "a" << std::endl;
        return (new a ());
    }
    else if (x == 1)
    {
        std::cout << "b" << std::endl;
        return (new b ());
    }
    std::cout << "c" << std::endl;
    return (new c ());
}

void    identify(Base *p)
{
    if (dynamic_cast<a*>(p))
    {
        std::cout << "A" << std::endl;
        return ;
    }
    if (dynamic_cast<b*>(p))
    {
        std::cout << "B" << std::endl;
        return ;
    }
    if (dynamic_cast<c*>(p))
    {
        std::cout << "C" << std::endl;
        return ;
    }
}

void    identify(Base &p)
{
    try
    {
        dynamic_cast<a&>(p);
        std::cout << "A" << std::endl;
        return ;
    }
    catch(const std::exception& e){
    }
    try
    {
        dynamic_cast<b&>(p);
        std::cout << "B" << std::endl;
        return ;
    }
    catch(const std::exception& e){
    }
    try
    {
        dynamic_cast<c&>(p);
        std::cout << "C" << std::endl;
        return ;
    }
    catch(const std::exception& e){
    }
}

int main(void)
{
    Base *random_base;
    random_base = generate();
    identify(random_base);
    identify(*random_base);
    delete random_base;
    return (0);
}