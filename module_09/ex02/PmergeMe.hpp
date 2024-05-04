/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/30 20:31:41 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:32:25 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <iostream>
#include <exception>
#include <sstream>
#include <climits>
#include <set>
#include <deque>
#include <ctime>
#include <iomanip>

#include "vector.hpp"
#include "deque.hpp"


class PmergeMe
{
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe &);
		PmergeMe &operator=(const PmergeMe &);

		PmergeMe(int agrc, char *argv[]);
		
};

 
#endif