/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 16:20:06 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 22:19:58 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	Harl harl;
	int i = 0;
	std::string harl_levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	if (argc != 2)
	{
		std::cout << "Usage: only 2 arguments are accepted" << std::endl;
		return (1);
	}
	while (i < 4)
	{
		if (harl_levels[i] == argv[1])
			break;
		i++;
	}
	switch (i)
	{
		case 0:
			harl.debug();
		case 1:
			harl.info();
		case 2:
			harl.warning();
		case 3:
			harl.error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return (0);
}