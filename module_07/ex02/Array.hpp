/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 17:02:16 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/29 20:03:38 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template<typename T>

class Array {
	private:
		T*				_array;
		unsigned int	_n;

	public:
		Array() : _array(NULL), _n(0) {};

		Array(unsigned int n) : _array(new T[n]()), _n(n) {}; //re check it

		Array(const Array & copy_const) : _array(new T[copy_const._n]), _n(copy_const._n)
		{
			for (unsigned int i = 0; i < _n; ++i)
				_array[i] = copy_const._array[i];
		}
		Array & operator=(const Array &assign_op)
		{
			if (this != &assign_op)
			{
				if (_n)
					delete[] _array;
				_array = new T[assign_op._n];
				_n = assign_op._n;
				for (unsigned int i = 0; i < _n; ++i)
					_array[i] = assign_op._array[i];
			}
			return (*this);
		}
		T& operator[](unsigned int n) {
			if (0 <= n && n < _n) {
				return _array[n];
			} else {
				throw std::out_of_range("Out of range Index...");
			}
		}

	/* 	const T& operator[](unsigned int n) const {
			if (0 <= n && n < _n) {
				return _array[n];
			} else {
				throw std::out_of_range("Out of range Index...");
			}
		} */
		unsigned int size() const
		{
			return _n;
		}
		~Array()
		{
			if (_n)
				delete[] _array;
		}
};


#endif
