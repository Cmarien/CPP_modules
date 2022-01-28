/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 17:20:41 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 17:56:54 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <time.h>
#include <iostream>
#include <Array.hpp>

#define MAX_VAL 10
int main(void)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
	Array<int> tmp = numbers;
    Array<int> test(tmp);

	std::cout << "number address :" << &numbers << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "mirror address :" << &mirror << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "tmp address :" << &tmp << std::endl;
	std::cout << "------------------------------------" << std::endl;
	std::cout << "test address :" << &test << std::endl;
	std::cout << "------------------------------------" << std::endl;
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
		std::cout << "------------------------------------" << std::endl;
		std::cout << "numbers[" << i << "] :" << numbers[i] << std::endl;
		std::cout << "address :" << &numbers[i] << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "mirror[" << i << "] :" << mirror[i] << std::endl;
		std::cout << "address :" << &mirror[i] << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "tmp[" << i << "] :" << tmp[i] << std::endl;
		std::cout << "address :" << &tmp[i] << std::endl;
		std::cout << "------------------------------------" << std::endl;
		std::cout << "test[" << i << "] :" << test[i] << std::endl;
		std::cout << "address :" << &test[i] << std::endl;
		std::cout << "------------------------------------" << std::endl;
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    return 0;
}