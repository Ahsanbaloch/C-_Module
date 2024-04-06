/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:58:10 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/06 21:38:26 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

/* int checkInput(std::string arguments)
{
	std::istringstream iss(arguments);
	int number;
	
	if ((iss >> number))
	{
		PmergeMe pm;
		pm.getdeque().push_back(number);
		pm.getvector().push_back(number);
	}
	else
		throw std::invalid_argument("format issue....");
	std::cout << "number :" << number << std::endl;
} */

void printStack(std::vector<int> vect)
{
	for (std::vector<int>::iterator it = vect.begin(); it !=vect.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		try
		{
			int number;
			std::deque<int> dq;
			std::vector<int> vctr;
			int temp = -1;
			for (int i = 1; i < argc; i++)
			{
				//checkInput(argv[i]);
				std::istringstream iss(argv[i]);
				if ((iss >> number) && (iss.rdbuf()->in_avail() == 0))
				{
					if (number < 0)
						throw std::invalid_argument("numbers are not allowed less than zero...");
					dq.push_back(number);
					vctr.push_back(number);
				}
				else
					throw std::invalid_argument("issue in number...");
			}
			PmergeMe pm;
			//print stack befre and after sorting
			std::cout << "Before: " ;
			pm.setDeque(dq);
			pm.setVector(vctr);
			if (!(argc % 2))
				temp = std::atoi(argv[argc - 1]);
			pm.operations(temp);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cerr << "Error with arguments" << std::endl;
}