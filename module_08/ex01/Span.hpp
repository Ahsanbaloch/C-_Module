/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:33:03 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/25 16:26:18 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>
#include <cstdlib> // for rand() and srand()
#include <ctime>

class Span
{
private:
	std::vector<int>	 _numbers;
	unsigned int		_max_size;
public:
	Span(unsigned int max_size);
	~Span();
	Span(const Span &);
	Span &operator=(const Span &);

	void	addNumber(int n);
	int		shortestSpan();
	int		longestSpan();

};



#endif