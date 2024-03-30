/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:33:03 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/30 14:14:07 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iostream>

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