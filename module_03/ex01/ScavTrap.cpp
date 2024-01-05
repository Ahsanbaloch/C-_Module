/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:22:11 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 01:10:08 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_Hit_Point = 100;
	_Energy_Point = 50;
	_Damage = 20;
	std::cout << "Hello from ScavTrap Constructor..." << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Bye from ScavTrap Destructor..." << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& copy_object) : ClapTrap(copy_object)
{
	std::cout << "copy constructor from ScavTrap" << std::endl;
	*this = copy_object;
}

ScavTrap &ScavTrap::operator=(const ScavTrap& assign_op)
{
	std::cout << "assign operator from ScavTrap" << std::endl;
	if (this != &assign_op)
	{
		_Name = assign_op._Name;
		_Hit_Point = assign_op._Hit_Point;
		_Energy_Point = assign_op._Energy_Point;
		_Damage = assign_op._Damage;
	}
	return *this;
}

void ScavTrap::attack(const std::string& target)
{
	if (_Energy_Point > 0 && _Hit_Point > 0)
    {
        std::cout << "ClapTrap " << _Name << " attacks " << target <<
        "and lost " << _Energy_Point << " amount of Energy" << std::endl;
        _Energy_Point--;
    }
    else if (_Energy_Point == 0)
        std::cout << _Name << " has no energy to attack" << std::endl;
    else
        std::cout << "can't attack" << std::endl;
}

void ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl; 
}