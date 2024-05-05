/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:06:47 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/25 18:51:27 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>
#include <vector>
#include <iostream>

template<typename T>
typename T::iterator easyFind(T& container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		std::cout << "Value isn't in there... schade!!!" << std::endl;
	else
		std::cout << "Found the value!!! :)" << std::endl;
	return it;
}

#endif