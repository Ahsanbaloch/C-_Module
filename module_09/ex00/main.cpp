/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:05:16 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/01 18:14:01 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int argc, char **argv)
{

	if (argc == 2)
	{
		try
		{
			
				BitcoinExchange btc;
				btc.data_csv_file();
				btc.read_data_input(argv[1]);
			
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	else
		std::cout << "Only 2 arguments are required..." << std::endl;
	return (0);
}