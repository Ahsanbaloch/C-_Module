/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 12:24:59 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/25 12:35:28 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T>
void swap(T & x, T & y)
{
	T temp;
	temp = x;
	x = y;
	y = temp;
}

template< typename T>
T max(T & x, T & y)
{
	return ((x > y) ? x : y);
}

template<typename T>
T min(T & x, T & y)
{
	return ((x < y) ? x : y);
}