/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:51:58 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/01 18:14:43 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() 
{
}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange &copy_const)
{
	*this = copy_const;
}

BitcoinExchange &BitcoinExchange::operator=(const BitcoinExchange &assign_op)
{
	if (this != &assign_op)
		this->_bitcoin_details = assign_op._bitcoin_details;
	return (*this);
}

void BitcoinExchange::data_csv_file()  //check the error for basic_string
{

	std::ifstream file("./data.csv");
	std::string		file_data;

	if (file.is_open())
	{
		while (std::getline(file, file_data))
		{
			//file >> file_data;
			std::string date = file_data.substr(0,10).erase(4,1).erase(6,1);
			double rate = 0.0;
			std::stringstream double_convert;
			double_convert << file_data.substr(11);
			double_convert >> rate;
			_bitcoin_details.insert(std::make_pair(date, rate));
		}
	}
	else
		throw std::runtime_error("Permission not granted...");
	file.close();
}

//

void BitcoinExchange::read_data_input(std::string file_name)
{
	std::string fileContent;
	std::ifstream file(file_name);
	if (file.is_open())
	{
		while (std::getline(file, fileContent))
		{
			int year = 0 , month = 0 ,day = 0;
			std::stringstream y, m , d;
			y << fileContent.substr(0, 4);
			m << fileContent.substr(5, 2);
			d << fileContent.substr(8,2);
			y >> year;
			m >> month;
			d >> day;
			if ((fileContent.length() < 14) || (y.fail() || m.fail() || d.fail()))
			{
				std::cerr << "Invalid Format" << std::endl;
				continue ;
			}
			std::string rate = fileContent.substr(13);
			double value_rate = 0.00;
			std::stringstream str;
			str << rate;
			str >> value_rate;
			//std::cout << value_rate << std::endl;
			std::ostringstream oss;
			oss << year
				<< std::setw(2) << std::setfill('0') << month
				<< std::setw(2) << std::setfill('0') << day;
			std::string date = oss.str();
			int result = parseDateRate(year, month, day, rate, value_rate, fileContent);
			if (result == -1)
				std::cerr << "Invalid Date format..." << std::endl;
			else if (result == -2)
				std::cerr << "Invalid rate format..." << std::endl;
			else
				showOutput(date, value_rate);
		}
	}
	else
		throw std::runtime_error("Error file...");
}

int BitcoinExchange::parseDateRate(int year, int month, int day, std::string rate, double value_rate, std::string fileContent)
{
	size_t pipe = fileContent.find("|");
	if (fileContent[pipe + 1] != ' ' || fileContent[pipe - 1] != ' ')
		return (-1);
	//date format
	if (fileContent.substr(4,1) != "-" && fileContent.substr(7,1) != "-")
		return (-1);
	//check months last date
	int months_date[12];
	if (year == 2012 || year == 2016 || 2022)
	{
		int leap_year[] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		std::copy(leap_year, leap_year+12, months_date);
	}
	else
	{
		int nleap_year[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
		std::copy(nleap_year, nleap_year+12, months_date);

	}
	if (year < 2009 || month < 1 || month > 12)
		return (-1);
	if (day > months_date[month - 1] || day < 1)
		return (-1);
	int count = 0;
	//rate format
	for (size_t i = 0; i < rate.length(); i++)
	{
		if (rate[i] == '.')
		{
			if (i == 0 || i == rate.length() - 1 || ++count > 1)
				return (-2);
		}
		else if (!isdigit(rate[i]))
			return (-2);
	}
	if (value_rate < 0.0 || value_rate > 1000.0)
		return (-2);
	return (0);
}

void BitcoinExchange::showOutput(std::string date, double rate)
{
	bool flag = false;
	std::map<std::string, double>::iterator itb = this->_bitcoin_details.begin();
	std::map<std::string, double>::iterator ite = this->_bitcoin_details.end();
	for (; itb != ite; itb++)
	{
		
		if (itb->first == date)
		{
			flag = true;
			break;
		}
		(void)rate;  // remove it
	}
	if (flag == true)
	{
		std::cout << date.insert(4, "-").insert(7,"-") << " => " << rate << " = " << std::fixed << std::setprecision(2) << rate * itb->second << "\n";
		//std::cout << rate << " : "  << itb->second << " : " << rate * itb->second << " : " << std::endl;
		flag = false;
	}
	else
	{
		ite = _bitcoin_details.lower_bound(date);
		std::cout << date.insert(4, "-").insert(7,"-") << " => " << rate << " = " << std::fixed << std::setprecision(2) << rate * ite->second << "\n";
		//std::cout << rate << " : "  << ite->second << " : " << rate * ite->second << " : " << std::endl;
	}
}
