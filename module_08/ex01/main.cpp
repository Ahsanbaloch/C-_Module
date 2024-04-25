/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 13:33:08 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/25 16:33:19 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{

	Span span(10000);
	for (int i = 0; i < 10000; ++i)
		span.addNumber(i);
	std::cout << "Shortest span: " << span.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span.longestSpan() << std::endl;

	Span span1(10);
	srand(time(0)); // initialize random seed based on current time

	std::cout << "number genenrators" << std::endl;
	for (int i = 0; i < 10; ++i)
	{
	    int random_number = rand() % 500;
	    span1.addNumber(random_number);
		std::cout <<  random_number << " ";

	}
	std::cout << std::endl;
	std::cout << "Shortest span: " << span1.shortestSpan() << std::endl;
	std::cout << "Longest span: " << span1.longestSpan() << std::endl;

	return 0;
}