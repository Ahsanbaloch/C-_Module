/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:33:06 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/30 14:15:20 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(unsigned int max_size) : _max_size(max_size) {}

Span::~Span() {}

Span::Span(const Span &copy_const)
{
	*this = copy_const;
}

Span &Span::operator=(const Span &assign_op)
{
	if (this != &assign_op)
	{
		this->_max_size = assign_op._max_size;
		this->_numbers  = assign_op._numbers;
	}
	return (*this);
}

void Span::addNumber(int num)
{
	if (_numbers.size() >= _max_size)
		throw std::runtime_error("Span is full");
	_numbers.push_back(num);
}

int Span::shortestSpan()
{
	if (_numbers.empty() || _numbers.size() < 2)
		std::runtime_error("Single Number isn't allowed...");
	std::sort(_numbers.begin(), _numbers.end());
	int	shortest = _numbers[1] - _numbers[0];
	for (unsigned int i = 1; i < _numbers.size() - 1; ++i)
		shortest = std::min(shortest, _numbers[i + 1] - _numbers[i]);
	return shortest;
}

int Span::longestSpan()
{
	if (_numbers.empty() || _numbers.size() < 2)
		std::runtime_error("Single Number isn't allowed...");
	int max = *std::max_element(_numbers.begin(), _numbers.end()) - *std::min_element(_numbers.begin(), _numbers.end());
	return (max);
}