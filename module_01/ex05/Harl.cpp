/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:39:02 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 22:18:16 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl() {}

Harl::~Harl() {}

void Harl::_debug(void)
{
	std::cout << "[DEBUG] :  I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::_info(void)
{
	std::cout << "[INFO] :  I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void Harl::_warning(void)
{
	std::cout << "[WARNING] :  I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void Harl::_error(void)
{
	std::cout << "[ERROR] :  This is unacceptable, I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
	int i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*ptr[4])(void) = {&Harl::_debug, &Harl::_info, &Harl::_warning, &Harl::_error};
	while (i < 4)
	{
		if (levels[i] == level)
			(this->*ptr[i])();
		i++;
	}
}