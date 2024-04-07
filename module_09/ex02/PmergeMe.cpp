/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:58:15 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/07 12:33:17 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &other) 
{
	(void)other;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &other) 
{
	(void)other;
	return (*this);
}

PmergeMe::~PmergeMe() {}

void PmergeMe::setDeque(std::deque<int> dq)
{
	_deque = dq;
}

void PmergeMe::setVector(std::vector<int> vctr)
{
	_vector = vctr;
	//print before insertion
	for (std::vector<int>::iterator it = _vector.begin(); it !=_vector.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::operations(int i)
{
	_temp = i;
	std::clock_t vector_init = std::clock();
	//operation for Vector
	fordJohnsonSort(_vector);
	//vectorOperation(_vector);
	std::clock_t vector_end = std::clock();
	double vector_span = (double)(vector_end - vector_init) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _vector.size() << " elements in Vector : " << vector_span * 1000 << std::endl; 
	std::clock_t deque_init = std::clock();
	//operation for deque
	fordJohnsonSort(_deque);
	//dequeOperation(_deque);
	std::clock_t deque_end = std::clock();
	double deque_span = (double)(deque_end - deque_init) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _deque.size() << " elements in Deque : " << deque_span * 1000 << std::endl; 
}

void PmergeMe::fordJohnsonSort(std::vector<int>& vctr)
{
	 // Step 1: Create and sort pairs of elements
	std::vector<std::pair<unsigned  int, unsigned int> > pairs;
    for (size_t i = 0; i < vctr.size() / 2; ++i)
    {
        unsigned int first = vctr[2 * i];
        unsigned int second = vctr[2 * i + 1];
        if (first > second)
            std::swap(first, second);
        pairs.push_back(std::make_pair(first, second));
    }
	printPairs(pairs);
	// Step 2: Merge pairs together
	std::vector<int> sorted;
	while (!pairs.empty())
	{
		// Find the pair with the smallest first element
		size_t minIndex = 0;
		for (size_t i = 0; i < pairs.size(); ++i)
		{
			if (pairs[i].first < pairs[minIndex].first)
				minIndex = i;
		}
		// Remove the smallest element from the pair and add it to the sorted list
		sorted.push_back(pairs[minIndex].first);
		if (pairs[minIndex].first != pairs[minIndex].second)
			sorted.push_back(pairs[minIndex].second);
		//remove it from the list
		pairs.erase(pairs.begin() + minIndex);
	}
	vctr = sorted;
	if (_temp != -1)
		vctr.insert(std::lower_bound(vctr.begin(), vctr.end(), _temp), _temp);
	printVector(vctr);
}

void PmergeMe::printPairs(std::vector<std::pair<unsigned int, unsigned int> > vect_pair)
{
	for (std::vector<std::pair<unsigned int, unsigned int> >::const_iterator it = vect_pair.begin(); it != vect_pair.end(); ++it)
	{
	    std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
	}
}

void PmergeMe::printVector(std::vector<int> sm)
{
	std::cout << "After: ";
	for (std::vector<int>::iterator it = sm.begin(); it != sm.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

void PmergeMe::fordJohnsonSort(std::deque<int>& dq)
{
	 // Step 1: Create and sort pairs of elements
	std::deque<std::pair<unsigned  int, unsigned int> > pairs;
    for (size_t i = 0; i < dq.size() / 2; ++i)
    {
        unsigned int first = dq[2 * i];
        unsigned int second = dq[2 * i + 1];
        if (first > second)
            std::swap(first, second);
        pairs.push_back(std::make_pair(first, second));
    }
	// Step 2: Merge pairs together
	std::deque<int> sorted;
	while (!pairs.empty())
	{
		// Find the pair with the smallest first element
		size_t minIndex = 0;
		for (size_t i = 0; i < pairs.size(); ++i)
		{
			if (pairs[i].first < pairs[minIndex].first)
				minIndex = i;
		}
		// Remove the smallest element from the pair and add it to the sorted list
		sorted.push_back(pairs[minIndex].first);
		if (pairs[minIndex].first != pairs[minIndex].second)
			sorted.push_back(pairs[minIndex].second);
		//remove it from the list
		pairs.erase(pairs.begin() + minIndex);
	}
	dq = sorted;
	if (_temp != -1)
		dq.insert(std::lower_bound(dq.begin(), dq.end(), _temp), _temp);
	printdeque(dq);
}


void PmergeMe::printdeque(std::deque<int> sm)
{
	std::cout << "After: ";
	for (std::deque<int>::iterator it = sm.begin(); it != sm.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

