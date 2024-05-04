/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:10:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:21:20 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "deque.hpp"

#include "PmergeMe.hpp"


void printdeque(const std::string &msg, const std::deque<int> &v)
{
	std::cout << msg;
	for (size_t i = 0; i < v.size(); ++i)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

std::deque<std::pair<int, int> > formAndSortPairs(std::deque<int> v)
{
    std::deque<std::pair<int, int> > pairs;
    for (size_t i = 0; i < v.size() / 2; ++i)
    {
        int first = v[2 * i];
        int second = v[2 * i + 1];
        if (first > second)
            std::swap(first, second);
        pairs.push_back(std::make_pair(first, second));
    }
	std::sort(pairs.begin(), pairs.end(), comparePairs);
    return pairs;
}

std::deque<int> SortingMerge(std::deque<std::pair<int, int> > &pairs)
{
	std::deque<int> dq;
	std::cout << std::endl;
	dq.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		dq.push_back(pairs[i].second);
	}
	int prev_num = 1;
	int next_num = 1;
	for (size_t i = pairs.size(); i > 0; i--)
	{
		findJackNumber(prev_num, next_num);
		for (int jack = next_num - 1; (jack + 1) > prev_num; jack--)
		{
			if (static_cast<size_t>(jack) >= pairs.size())
				continue;
			dq.insert(std::lower_bound(dq.begin(), std::find(dq.begin(), dq.end(), pairs[jack].second), pairs[jack].first), pairs[jack].first);
			i--;
		}
	}
	return (dq);
}


std::deque<int> mergeInsertion(std::deque<std::pair<int,int> > &pairs)
{
	std::deque<int> dequeStack;
	int	prevJacNumber = 1;
	int	jacNumber = 1;

	if (pairs.size() == 0)
		return (std::deque<int>());
	dequeStack.clear();
	dequeStack.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		dequeStack.push_back(pairs[i].second);
	}

	for (int i = pairs.size(); i > 0; i--)
	{
		setNextJacNumber(prevJacNumber, jacNumber);
		for (int j = jacNumber - 1; j + 1 > prevJacNumber; j--)
		{
			if (static_cast<size_t>(j) >= pairs.size())
				continue;
			dequeStack.insert(std::lower_bound(dequeStack.begin(), std::find(dequeStack.begin(), dequeStack.end(), pairs[j].second), pairs[j].first), pairs[j].first);
			i--;
		}
	}
	return (dequeStack);
}


std::deque<int> fordJohnson(std::deque<int> d)
{
    std::deque<std::pair<int, int> > pairs = formAndSortPairs(d);
	bool odd_value = false;
	int last_value = 0;
	std::deque<int> new_dq;
	new_dq = mergeInsertion(pairs);
	if (d.size() % 2)
	{
		last_value = d.back();
		odd_value = true; 
	}
	if (odd_value == true)
		new_dq.insert(std::lower_bound(new_dq.begin(), new_dq.end(), last_value), last_value);

    return (new_dq);
}