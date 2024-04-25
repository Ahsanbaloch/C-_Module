/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:16:36 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/25 18:47:45 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
	std::vector<int> num;
   for (int i = 0; i < 10; i++)
	{
		num.push_back(i);
	}

	std::vector<int>::iterator it = easyFind(num, 4);
	it = easyFind(num, -1);

	std::cout << "-------------" << std::endl;

	std::string str = "Hello";
	std::string::iterator strIt;
	strIt = easyFind(str, 'e');

	strIt = easyFind(str, 'z');
		
	return (0);
}
