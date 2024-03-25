/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:09:24 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/25 21:10:05 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename F>
void iter(T* array, size_t length, F func)
{
    for (size_t i = 0; i < length ; ++i)
        func(array[i]);
}
