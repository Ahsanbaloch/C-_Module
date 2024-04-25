/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/29 21:16:36 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/25 16:15:01 by ahsalam          ###   ########.fr       */
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
		
	return (0);
}


/* 
#define NOT_FOUND RED "not found" RESET
#define BLUE "\033[1;34m"
#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define YELLOW "\033[1;33m"
#define RESET "\033[0m"

int main()
{
	std::cout << YELLOW << "------- Testing with: std::vector<int> -------" << RESET << std::endl;
	std::vector<int> intVector;
	for (int i = 0; i < 10; i++)
	{
		intVector.push_back(i);
	}
	std::cout << BLUE << "Contents of intVector: " << RESET << GREEN << std::endl;
	for (std::vector<int>::iterator it = intVector.begin(); it != intVector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << RESET << std::endl;
	
	std::vector<int>::iterator intVectorIt;
	std::cout << BLUE << "Searching for -1 in intVector: " << RESET << std::endl;
	intVectorIt = easyFind(intVector, -1);
	if (intVectorIt != intVector.end())
		std::cout << *intVectorIt << std::endl;
	else
		std::cout << NOT_FOUND << std::endl;

	std::cout << BLUE << "Searching for 5 in intVector: " << RESET << std::endl;
	intVectorIt = easyFind(intVector, 5);
	if (intVectorIt != intVector.end())
		std::cout << *intVectorIt << std::endl;
	else
		std::cout << NOT_FOUND << std::endl;
	std::cout << std::endl;


	std::cout << YELLOW << "------- Testing with: std::string -------" << RESET << std::endl;
	std::string str = "Hello";
	std::cout << BLUE << "Contents of str: " << RESET << GREEN << str << RESET << std::endl;
	std::cout << BLUE << "Searching for 'e' in str: " << RESET << std::endl;
	std::string::iterator strIt;
	strIt = easyFind(str, 'e');
	if (strIt != str.end())
		std::cout << *strIt << std::endl;
	else
		std::cout << NOT_FOUND << std::endl;

	std::cout << BLUE << "Searching for 'z' in str: " << RESET << std::endl;
	strIt = easyFind(str, 'z');
	if (strIt != str.end())
		std::cout << *strIt << std::endl;
	else
		std::cout << NOT_FOUND << std::endl;
	std::cout << std::endl;


	std::cout << YELLOW << "------- Testing with: empty std::vector<int> -------" << RESET << std::endl;
	std::vector<int> emptyVector;
	emptyVector.resize(0);
	std::cout << BLUE << "Contents of emptyVector: " << RESET << GREEN << std::endl;
	for (std::vector<int>::iterator it = emptyVector.begin(); it != emptyVector.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << RESET << std::endl;
	std::cout << BLUE << "Searching for 5 in emptyVector: " << RESET << std::endl;
	std::vector<int>::iterator emptyVectorIt;
	emptyVectorIt = easyFind(emptyVector, 5);
	if (emptyVectorIt != emptyVector.end())
		std::cout << *emptyVectorIt << std::endl;
	else
		std::cout << NOT_FOUND << std::endl;
	std::cout << std::endl;

	return 0;
} */