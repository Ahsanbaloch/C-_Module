/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:39:48 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:32:49 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {};

PmergeMe::~PmergeMe() {};

PmergeMe::PmergeMe(const PmergeMe &other)
{
	(void)other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other)
{
	(void)other;
	return (*this);
}


int checkGetValue(const std::string str)
{
	int num;
	std::istringstream iss(str);
	if (!(iss >> num))
		throw std::runtime_error("not number...");
	else if (num < 0)
		throw std::runtime_error("negative number...");
	return (num);
}



PmergeMe::PmergeMe(int argc, char *argv[])
{
	std::vector<int> input;
	std::deque<int> dq;
	std::set<int> uniqueNumbers;
	for (int i = 0; i < argc; ++i)
	{
		int num = checkGetValue(argv[i]);
		if (!uniqueNumbers.insert(num).second)
			throw std::runtime_error("Repeated number...");
		input.push_back(num);
		dq.push_back(num);
	}
	printVector("Before : ", input);

   	clock_t start = clock();
    input = fordJohnson(input);
    clock_t end = clock();
    double elapsed = double(end - start) / CLOCKS_PER_SEC;
	printVector("After : ", input);
   std::cout << "Time taken by vector fordJohnson: " << std::fixed << std::setprecision(6) << elapsed << std::endl;

    start = clock();
    dq = fordJohnson(dq);
    end = clock();
    elapsed = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Time taken by deque fordJohnson: " << std::fixed << std::setprecision(6) << elapsed << std::endl;

	
	//printdeque("After: ", dq);
}