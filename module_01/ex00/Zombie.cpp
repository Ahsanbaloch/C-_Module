/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:15:02 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 21:31:19 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

/* Zombie::Zombie()
{
	std::cout << "constructor is called" << std::endl;
} */

Zombie::Zombie(std::string name) : _name(name)
{
	std::cout << "object " << _name << " is created in constructor" << std::endl;
	this->announce();
}

Zombie::~Zombie()
{
	std::cout << _name << " is called in destructor" << std::endl;
}

void Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}