/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:30:58 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/02 23:57:21 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

void RPN::readData(std::string data)
{
	std::string op = "+-*/";
	size_t opr_i = 0;
	size_t num = 0;
	for (size_t i = 0; i < data.length(); ++i)
	{
		if (isdigit(data[i]))
		{
			num++;
			_p_num.push(data[i] - '0');
		}
		else if (op.find(data[i]) != std::string::npos)
		{
			if (_p_num.size() < 2)
        		throw std::invalid_argument("irregular expression...");
			opr_i++;
			int num2 = _p_num.top();
			_p_num.pop();
			int num1 = _p_num.top();
			_p_num.pop();
			_p_num.push(result(num1, num2, data[i]));
		}
		else if (isspace(data[i]))
			continue ;
		else
			throw std::invalid_argument("invalid format...");
	}
	if ((opr_i + 1) != num)
		throw std::invalid_argument("Number of argument aren't valid...");
	std::cout <<  _p_num.top() << std::endl;
}

int RPN::result(int num1, int num2, char op)
{
	switch (op)
	{
		case '+':
			return (num1 + num2);
		case '-':
			return (num1 - num2);
		case '*':
			return (num1 * num2);
		case '/':
		{
			if (num2 == 0)
			{
				throw std::invalid_argument("infinity...");
			}
			return (num1 / num2);
		}
	}
	return (0);
}