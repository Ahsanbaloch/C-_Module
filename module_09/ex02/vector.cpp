/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:53:29 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:08:17 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"


void printVector(const std::string &msg, const std::vector<int> &v)
{
	std::cout << msg;
	for (size_t i = 0; i < v.size(); ++i)
		std::cout << v[i] << " ";
	std::cout << std::endl;
}

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b)
{
    return a.second < b.second;
}

std::vector<std::pair<int, int> > formAndSortPairs(std::vector<int> v)
{
    std::vector<std::pair<int, int> > pairs;
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

void findJackNumber(int &prev_num, int &next_num)
{
	next_num = prev_num * 2 + next_num;
	std::swap(prev_num, next_num);
}

std::vector<int> SortingMerge(std::vector<std::pair<int, int> > &pairs)
{
	std::vector<int> vctr;
	std::cout << std::endl;
	vctr.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		vctr.push_back(pairs[i].second);
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
			vctr.insert(std::lower_bound(vctr.begin(), std::find(vctr.begin(), vctr.end(), pairs[jack].second), pairs[jack].first), pairs[jack].first);
			i--;
		}
	}
	return (vctr);
}

void setNextJacNumber(int &prevJacNumber, int &jacNumber)
{
	int temp;
	temp = jacNumber;
	jacNumber = prevJacNumber * 2 + jacNumber;
	prevJacNumber = temp;
}

std::vector<int> mergeInsertion(std::vector<std::pair<int,int> > &pairs)
{
	std::vector<int> vectorStack;
	int	prevJacNumber = 1;
	int	jacNumber = 1;

	if (pairs.size() == 0)
		return (std::vector<int>());
	vectorStack.clear();
	vectorStack.push_back(pairs[0].first);
	for (size_t i = 0; i < pairs.size(); ++i)
	{
		vectorStack.push_back(pairs[i].second);
	}

	for (int i = pairs.size(); i > 0; i--)
	{
		setNextJacNumber(prevJacNumber, jacNumber);
		for (int j = jacNumber - 1; j + 1 > prevJacNumber; j--)
		{
			if (static_cast<size_t>(j) >= pairs.size())
				continue;
			vectorStack.insert(std::lower_bound(vectorStack.begin(), std::find(vectorStack.begin(), vectorStack.end(), pairs[j].second), pairs[j].first), pairs[j].first);
			i--;
		}
	}
	return (vectorStack);
}


std::vector<int> fordJohnson(std::vector<int> v)
{
    std::vector<std::pair<int, int> > pairs = formAndSortPairs(v);
	bool odd_value = false;
	int last_value = 0;
	std::vector<int> new_vctr;
	new_vctr = mergeInsertion(pairs);
	if (v.size() % 2)
	{
		last_value = v.back();
		odd_value = true; 
	}
	if (odd_value == true)
		new_vctr.insert(std::lower_bound(v.begin(), v.end(), last_value), last_value);

    return (new_vctr);
}