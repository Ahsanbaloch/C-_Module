/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/10 23:48:19 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/10 23:59:28 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

int main()
{
	std::string input;

	while (1)
	{
		std::cout << "Choose between (add, search, exit)" << std::endl;
		std::cin >> input;
		if (input == "add")
			std::cout << "adding" << std::endl;
		else if (input == "search")
			std::cout << "searching" << std::endl;
		else if (input == "exit")
			break;
		else 
			std::cout << "Please choose from above given choices" << std::endl;
	}
	return (0);
}