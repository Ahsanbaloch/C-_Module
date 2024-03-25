/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:09:24 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/25 13:12:27 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename t, typename F>
void iter(T* array, size_t length, F func)
{
	for (int i = 0; i < length ; ++i)
		func(array[i]);
}