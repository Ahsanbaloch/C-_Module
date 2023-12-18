/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:58:00 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/18 13:40:56 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

PhoneBook::PhoneBook() {}

void PhoneBook::Set_data(std::string &first_name, std::string &last_name, std::string &nick_name,
					std::string &number, std::string &darkest_secret)
{
	static int i = 0;

	list[i].Set_FName(first_name);
	list[i].Set_LName(last_name);
	list[i].Set_NName(nick_name);
	list[i].Set_Number(number);
	list[i].Set_DSecret(darkest_secret);

	i++;
	i = i % 8;
}

void PhoneBook::show_data() const
{
	int index;

	index = -1;
	std::cout << "|" << std::setw(10) << "index	|	" << std::setw(10) 
		<< "First Name	|	" << std::setw(10) 
		<< " Last Name	|	" << std::setw(10) << "Nick Name" << std::endl;
	while (++index < 8)
		std::cout << "|" << std::setw(10) << index << "|" << std::setw(10) 
		<< truncate(list[index].Get_FName()) << "|" << std::setw(10) 
		<< truncate(list[index].Get_LName()) << "|" << std::setw(10) << truncate(list[index].Get_NName()) << std::endl;
}

Contact PhoneBook::get_data(int index) const
{
	if (index < 0 || index > 7)
		return Contact();
	return list[index];
}

std::string PhoneBook::truncate(std::string str) const
{
	if (str.length() > 10)
	{
		str = str.substr(0, 10 - 1);
		str += ".";
	}
	return (str);
}

PhoneBook::~PhoneBook() {}