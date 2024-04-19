/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:08:38 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/19 16:10:31 by ahsalam          ###   ########.fr       */
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

void Conversion::Convert(const std::string input) {
        // Check if input is a single character
        if (input.size() == 1 && isprint(input[0]) && !isdigit(input[0])) 
		{
			std::cout << "chararacter: " << input[0] << std::endl;
			std::cout << "integer: " << static_cast<int>(input[0]) << std::endl;
			std::cout << "float: " << static_cast<float>(input[0]) << ".0f" << std::endl;
			std::cout << "double: " << static_cast<double>(input[0]) << ".0" << std::endl;
            return;
        }

        // Convert input to float
        float ft = atof(input.c_str());
        double db = 0;

        // Check if input is float or double
        if (input[input.length() - 1] == 'f') 
            db = static_cast<double>(ft);
        else 
		{
            db = atof(input.c_str());
            ft = static_cast<float>(db);
        }

        // Special characters handling
        std::string ch;
        if (std::isnan(ft) || std::isinf(ft))
            ch = "impossible";
        else 
		{
            // Assigning char with ASCII
            int in = atoi(input.c_str());
            if (in >= 0 && in <= 127 && isprint(in)) {
                ch += "'";
                ch += static_cast<char>(in);
                ch += "'";
            } 
			else
                ch = "Non displayable";
        }
		std::cout << "char: " << ch << std::endl;

        if (ch == "impossible")
            std::cout << "int: impossible" << std::endl;
        else
            std::cout << "int: " << static_cast<int>(ft) << std::endl;

        if (ch == "impossible" && ft == 0) 
		{
            std::cout << "float: impossible" << std::endl;
            std::cout << "double: impossible" << std::endl;
        } 
		else 
		{
            if (ch != "impossible" && !(ft - static_cast<int>(ft))) 
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
