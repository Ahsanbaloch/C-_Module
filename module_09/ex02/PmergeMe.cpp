/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:58:15 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/06 22:28:09 by ahsalam          ###   ########.fr       */
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
	vectorOperation(_vector);
	std::clock_t vector_end = std::clock();
	double vector_span = (double)(vector_end - vector_init) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _vector.size() << " elements in Vector : " << vector_span * 1000 << std::endl; 
	std::clock_t deque_init = std::clock();
	//operation for deque
	dequeOperation(_deque);
	std::clock_t deque_end = std::clock();
	double deque_span = (double)(deque_end - deque_init) / CLOCKS_PER_SEC;
	std::cout << "Time to process a range of " << _deque.size() << " elements in Deque : " << deque_span * 1000 << std::endl; 
}

void PmergeMe::printPairs(std::vector<std::pair<unsigned int, unsigned int> > vect_pair)
{
	for (std::vector<std::pair<unsigned int, unsigned int> >::const_iterator it = vect_pair.begin(); it != vect_pair.end(); ++it)
	{
	    std::cout << "(" << it->first << ", " << it->second << ")" << std::endl;
	}
}

void PmergeMe::sortInsidePairs(std::vector<std::pair <unsigned int, unsigned int> > &vector_pair)
{
	for (size_t i = 0; i < vector_pair.size(); ++i)
	{
		if (vector_pair[i].first > vector_pair[i].second)
			std::swap(vector_pair[i].first, vector_pair[i].second);
	}
}

void PmergeMe::vectorOperation(std::vector<int> vctr)
{
	std::vector<std::pair<unsigned int, unsigned int> > vect_pair;
	std::vector<int>::iterator it = vctr.begin();
	for (unsigned int i = 0; i < vctr.size() / 2; ++i)
	{
	    unsigned int first = *it++;
	    unsigned int second = *it;
	    vect_pair.push_back(std::make_pair(first, second));
	    it++;
	}
	sortInsidePairs(vect_pair);
	//printPairs(vect_pair);
	extractVector(vect_pair);
}

void PmergeMe::extractVector(std::vector<std::pair <unsigned int, unsigned int> > &vector_pair)
{
	std::vector<unsigned int> largest, smallest;
	for (size_t i = 0; i < vector_pair.size(); i++)
		smallest.push_back(vector_pair[i].first);
	for (size_t i = 0; i < vector_pair.size(); i++)
		largest.push_back(vector_pair[i].second);
	std::sort(smallest.begin(), smallest.end());
	organizeVector(smallest, largest);
}

void PmergeMe::organizeVector(std::vector<unsigned int> &sm, std::vector<unsigned int> &lg)
{
	for (size_t i = 0; i < lg.size(); i++)
		sm.insert(std::lower_bound(sm.begin(), sm.end(), lg[i]),lg[i]);
	if (_temp != -1)
		sm.insert(std::lower_bound(sm.begin(), sm.end(), _temp), _temp);
	printVector(sm);
}

void PmergeMe::printVector(std::vector<unsigned int> sm)
{
	std::cout << "After: ";
	for (std::vector<unsigned int>::iterator it = sm.begin(); it != sm.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

//Deque operations
void PmergeMe::dequeOperation(std::deque<int> dq)
{
	std::deque<std::pair<unsigned int, unsigned int> > dq_pair;
	std::deque<int>::iterator it = dq.begin();
	for (unsigned int i = 0; i < dq.size() / 2; ++i)
	{
	    unsigned int first = *it++;
	    unsigned int second = *it;
	    dq_pair.push_back(std::make_pair(first, second));
	    it++;
	}
	sortInsidePairs(dq_pair);
	//printPairs(vect_pair);
	extractDeque(dq_pair);
}

void PmergeMe::sortInsidePairs(std::deque<std::pair <unsigned int, unsigned int> > &dq_pair)
{
	for (size_t i = 0; i < dq_pair.size(); ++i)
	{
		if (dq_pair[i].first > dq_pair[i].second)
			std::swap(dq_pair[i].first, dq_pair[i].second);
	}
}

void PmergeMe::extractDeque(std::deque<std::pair <unsigned int, unsigned int> > &dq_pair)
{
	std::deque<unsigned int> largest, smallest;
	for (size_t i = 0; i < dq_pair.size(); i++)
		smallest.push_back(dq_pair[i].first);
	for (size_t i = 0; i < dq_pair.size(); i++)
		largest.push_back(dq_pair[i].second);
	std::sort(smallest.begin(), smallest.end());
	organizeDeque(smallest, largest);
}

void PmergeMe::organizeDeque(std::deque<unsigned int> &sm, std::deque<unsigned int> &lg)
{
	for (size_t i = 0; i < lg.size(); i++)
		sm.insert(std::lower_bound(sm.begin(), sm.end(), lg[i]),lg[i]);
	if (_temp != -1)
		sm.insert(std::lower_bound(sm.begin(), sm.end(), _temp), _temp);
	printdeque(sm);
}

void PmergeMe::printdeque(std::deque<unsigned int> sm)
{
	std::cout << "After: ";
	for (std::deque<unsigned int>::iterator it = sm.begin(); it != sm.end(); it++)
		std::cout << *it << " ";
	std::cout << std::endl;
}

/* 
void PmergeMe::setDeque(const std::deque<int>& dq)
{
    _deque = dq;
}

void PmergeMe::setVector(const std::vector<int>& vctr)
{
    _vector = vctr;
    for (std::vector<int>::const_iterator it = _vector.begin(); it !=_vector.end(); it++)
        std::cout << *it << " ";
    std::cout << std::endl;
}

void PmergeMe::vectorOperation(const std::vector<int>& vctr)
{
    // ...
}

void PmergeMe::extractVector(const std::vector<std::pair <unsigned int, unsigned int> >& vector_pair)
{
    std::vector<unsigned int> largest, smallest;
    for (size_t i = 0; i < vector_pair.size(); i++)
    {
        smallest.push_back(vector_pair[i].first);
        largest.push_back(vector_pair[i].second);
    }
    organizeVector(smallest, largest);
}

void PmergeMe::organizeVector(std::vector<unsigned int>& sm, const std::vector<unsigned int>& lg)
{
    for (size_t i = 0; i < lg.size(); i++)
        sm.insert(std::lower_bound(sm.begin(), sm.end(), lg[i]),lg[i]);
    if (_temp != -1)
        sm.insert(std::lower_bound(sm.begin(), sm.end(), _temp), _temp);
    std::sort(sm.begin(), sm.end());
    printVector(sm);
}

void PmergeMe::printVector(const std::vector<unsigned int>& sm)
{
    // ...
}

void PmergeMe::dequeOperation(const std::deque<int>& dq)
{
    // ...
}

void PmergeMe::extractDeque(const std::deque<std::pair <unsigned int, unsigned int> >& dq_pair)
{
    std::deque<unsigned int> largest, smallest;
    for (size_t i = 0; i < dq_pair.size(); i++)
    {
        smallest.push_back(dq_pair[i].first);
        largest.push_back(dq_pair[i].second);
    }
    organizeDeque(smallest, largest);
}

void PmergeMe::organizeDeque(std::deque<unsigned int>& sm, const std::deque<unsigned int>& lg)
{
    for (size_t i = 0; i < lg.size(); i++)
        sm.insert(std::lower_bound(sm.begin(), sm.end(), lg[i]),lg[i]);
    if (_temp != -1)
        sm.insert(std::lower_bound(sm.begin(), sm.end(), _temp), _temp);
    std::sort(sm.begin(), sm.end());
    printdeque(sm);
}

void PmergeMe::printdeque(const std::deque<unsigned int>& sm)
{
    // ...
}
 */