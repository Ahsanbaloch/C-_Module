/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:41:01 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/28 16:15:11 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <map>
#include <fstream>
#include <sstream>
#include <iomanip>

class BitcoinExchange {
	private:
		std::map<std::string, double> _bitcoin_details;

	public:
		BitcoinExchange();
		~BitcoinExchange();
		BitcoinExchange(const BitcoinExchange &src);
		BitcoinExchange &operator=(const BitcoinExchange &src);

		void							data_csv_file();
		void							read_data_input(std::string file_name);
		void							set_data(std::string key, double value);
		std::map<std::string, double>	get_data();

		int								parseDateRate(int year, int month, int day, std::string rate, double value_rate, std::string fileContent);
		void							showOutput(std::string date, double rate);
};

#endif