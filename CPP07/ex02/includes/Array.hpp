/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/28 16:54:32 by user42            #+#    #+#             */
/*   Updated: 2022/01/28 17:45:38 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

template<typename T>
class Array
{
private:
	unsigned int n;
	T	*array;
public:
	Array() : n(0), array(NULL)
	{
	}
	Array(unsigned int nb) : n(nb), array(NULL)
	{
		this->array = new T[nb]();
	}
	Array(const Array<T>& copy) : n(copy.n), array(NULL)
	{
		*this = copy;
	}
	~Array()
	{
		if (this->n > 0)
			delete[] this->array;
	}
	Array<T>&  operator=(const Array<T>& copy)
	{
		if (this->n > 0)
			delete[] this->array;
		this->n = copy.n;
		if (copy.n > 0){
			this->array = new T[copy.n]();
			for(size_t i = 0; i < copy.n; i++){
				this->array[i] = copy.array[i];
			}
		}
		else
			this->array = NULL;
		return (*this);
	};
	const T &operator[](unsigned int index) const
	{
		return (this->array[index]);
	}

	T&	operator[](unsigned int index)
	{
		if (index >= this->n)
			throw Array<T>::OutOfBoundsException();
		return (this->array[index]);
	}

	class OutOfBoundsException : public std::exception{
		const char* what() const throw()
		{
			return "Error: Out of bouds.";
		}
	};

};


#endif