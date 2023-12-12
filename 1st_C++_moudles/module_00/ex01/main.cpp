/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:48:19 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/11 14:24:39 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

int main()
{
	std::string input;
	Contact 	contact;

	while (1)
	{
		std::cout << "Choose between (add, search, exit)" << std::endl;
		std::cin >> input;
		if (input == "add")
			contact.Add();
		else if (input == "search")
			contact.Search();
		else if (input == "exit")
			break;
		else
			std::cout << "Please choose from above given choices" << std::endl;
	}
	return (0);
}