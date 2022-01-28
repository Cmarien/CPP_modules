/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:29:30 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 16:46:42 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>

template<typename T>
void	iter(T *array, size_t lenght, void(*f)(const T &)) {
	for(size_t i = 0; i < lenght; i++)
		f(array[i]);
}

template<typename T>
void	show_value(const T &value){
	std::cout << "value is : " << value << std::endl;
}
#endif