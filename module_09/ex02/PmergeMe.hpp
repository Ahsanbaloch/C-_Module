/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/05 14:58:13 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/06 22:09:19 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <iostream>
#include <exception>
#include <sstream>
#include <deque>
#include <vector>
#include <ctime>

class PmergeMe
{
	private:
		std::deque<int>		_deque;
		std::vector<int>	_vector;
		int					_temp;
	public:
		PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe &operator=(const PmergeMe &);
		~PmergeMe();

		void setDeque(std::deque<int> dq);
		void setVector(std::vector<int> vctr);

		void operations(int i);

		//vector operations...
		void printPairs(std::vector<std::pair<unsigned int, unsigned int> > vect_pair);
		void vectorOperation(std::vector<int> vctr);
		void sortInsidePairs(std::vector<std::pair<unsigned int, unsigned int> > &vect_pair);
		void extractVector(std::vector<std::pair<unsigned int, unsigned int> > &vect_pair);
		void organizeVector(std::vector<unsigned int> &sm, std::vector<unsigned int> &lg);
		void printVector(std::vector<unsigned int> sm);

		//deque operations...
		void printPairs(std::deque<std::pair<unsigned int, unsigned int> > dq_pair);
		void dequeOperation(std::deque<int> dq);
		void sortInsidePairs(std::deque<std::pair<unsigned int, unsigned int> > &dq_pair);
		void extractDeque(std::deque<std::pair<unsigned int, unsigned int> > &dq_pair);
		void organizeDeque(std::deque<unsigned int> &sm, std::deque<unsigned int> &lg);
		void printdeque(std::deque<unsigned int> sm);
};

#endif