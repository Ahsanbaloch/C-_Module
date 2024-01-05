/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 14:10:22 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 16:18:40 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	std::cout << "Hello from FragTrap Constructor" << std::endl;
	_Name = name;
	_Hit_Point = 100;
	_Energy_Point = 100;
	_Damage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "Bye from FragTrap" << std::endl;
}

FragTrap::FragTrap(const FragTrap& copy_const) : ClapTrap(copy_const)
{
	std::cout << "copy constructor from FragTrap" << std::endl;
	*this = copy_const;
}

FragTrap &FragTrap::operator=(const FragTrap& assign_op)
{
	std::cout << "assign operator from FragTrap" << std::endl;
	if (this != &assign_op)
	{
		_Name = assign_op._Name;
		_Hit_Point = assign_op._Hit_Point;
		_Energy_Point = assign_op._Energy_Point;
		_Damage = assign_op._Damage;
	}
	return *this;
}

void FragTrap::highFiveGuys(void)
{
	std::cout << "This is highFive functions of " << _Name << " from FragTrap" << std::endl;
}
