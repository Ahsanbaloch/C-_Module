/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:08:38 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/24 13:04:49 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

Conversion::Conversion() {}

Conversion::~Conversion() {}

Conversion::Conversion(const Conversion &copy_const)
{
	*this = copy_const; 
}

Conversion &Conversion::operator=(const Conversion &assign_op)
{
	(void)assign_op;
	return (*this);
}

void Conversion::Convert(const std::string input)
{
	//char to others
	if (input.size() == 1 && std::isprint(input[0]) && !std::isdigit(input[0]))
	{
		std::cout << "chararacter : " << input[0] << std::endl;
		std::cout << "integer : " << static_cast<int>(input[0]) << std::endl;
		std::cout << "float : " << static_cast<float>(input[0]) << ".0f" << std::endl;
		std::cout << "double : " << static_cast<double>(input[0]) << ".0" << std::endl;
		return ;
	}
	std::string	ch = "";
	float		ft = atof(input.c_str());
	double		db = 0;

	//float/double to others
	if (input[input.length() - 1] == 'f')
		db = static_cast<double>(ft);
	else
	{
		db = std::atof(input.c_str());
		ft = static_cast<float>(db);
	}

	//special characters
	if (std::isnan(ft) || std::isinf(ft))
		ch = "impossible";

	//assigning char with ascii 
	int in = std::atoi(input.c_str());
	if (ch == "" && isprint(in))
	{
		ch = "'";
		ch += static_cast<char>(in);
		ch += "'";
	}
	else if (ch == "")
		ch = "Non displayable";
	std::cout << "char: " << ch << std::endl;

	if (ch == "impossible")
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int: " << in << std::endl;
	
	if (ch == "imposible" && ft == 0) 
	{
		std::cout << "float: imposible" << std::endl;
		std::cout << "double: imposible" << std::endl;
	} 
	else 
	{
		if (ch != "imposible" && !(ft - static_cast<int>(ft))) 
		{
			std::cout << "float: " << ft << ".0f" << std::endl;
			std::cout << "double: " << db << ".0" << std::endl;
		} 
		else 
		{
			std::cout << "float: " << ft << "f" << std::endl;
			std::cout << "double: " << db << std::endl;
		}
	}
}