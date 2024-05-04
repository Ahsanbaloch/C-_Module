/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 19:57:20 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:08:22 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef VECTOR_HPP
#define VECTOR_HPP

#include "PmergeMe.hpp"

bool comparePairs(const std::pair<int, int>& a, const std::pair<int, int>& b);
std::vector<std::pair<int, int> > formAndSortPairs(std::vector<int> v);
void findJackNumber(int &prev_num, int &next_num);
std::vector<int> SortingMerge(std::vector<std::pair<int, int> > &pairs);
void setNextJacNumber(int &prevJacNumber, int &jacNumber);
std::vector<int> mergeInsertion(std::vector<std::pair<int,int> > &pairs);
std::vector<int> fordJohnson(std::vector<int> v);
void printVector(const std::string &msg, const std::vector<int> &v);

#endif