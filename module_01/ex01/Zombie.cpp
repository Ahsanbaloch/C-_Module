/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:47:56 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/24 21:06:04 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie() : _name("") {}

Zombie::~Zombie() {
    std::cout << this->_name << " is dead because of destructor" << std::endl;
}

void Zombie::set_name(std::string name) 
{
    this->_name = name;
}

void Zombie::announce() 
{
    std::cout << this->_name << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}