/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 10:59:14 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 11:12:41 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdint.h>

typedef struct  Data{
    int         val;
}               Data;

uintptr_t serialize(Data* ptr)
{
    std::cout << "Serialize data" << std::endl;
    return (reinterpret_cast<uintptr_t>(ptr));
}

Data*   deserialize(uintptr_t raw)
{
    std::cout << "Deserialize ptr" << std::endl;
    return (reinterpret_cast<Data*>(raw));
}

int main(void)
{
    Data        datas;
    uintptr_t   serialized;
    Data        *deserialized;

    datas.val = 5;
    std::cout << "Data value = " << datas.val << std::endl;
    std::cout << "Data address = " << &datas << std::endl;
    serialized = serialize(&datas);
    deserialized = deserialize(serialized);
    std::cout << "Deserialized value = " << deserialized->val << std::endl;
    std::cout << "Deserialized address = " << deserialized << std::endl;
    return (0);
}