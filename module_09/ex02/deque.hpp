/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   deque.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 20:09:51 by ahsalam           #+#    #+#             */
/*   Updated: 2024/05/04 20:13:36 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEQUE_HPP
#define DEQUE_HPP

#include "PmergeMe.hpp"

std::deque<std::pair<int, int> > formAndSortPairs(std::deque<int> v);
std::deque<int> SortingMerge(std::deque<std::pair<int, int> > &pairs);
std::deque<int> mergeInsertion(std::deque<std::pair<int,int> > &pairs);
std::deque<int> fordJohnson(std::deque<int> v);
void printdeque(const std::string &msg, const std::deque<int> &v);

#endif