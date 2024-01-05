/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:20:25 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 21:05:15 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _Name("default"), _Hit_Point(10), _Energy_Point(10), _Damage(0)
{
    std::cout << "Hello from CalpTrap Default constructor " << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _Name(name), _Hit_Point(10), _Energy_Point(10), _Damage(0)
{
    std::cout << _Name << "Hello from CalpTrap constructor " << std::endl;
}

ClapTrap::~ClapTrap()
{
    std::cout << "Bye from CalpTrap Destructor for " << _Name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& copy_object)
{
    std::cout << "copy constructor is called " << std::endl;
    *this = copy_object;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& assign_op)
{
    std::cout << "Assignment Operator is called" << std::endl;
    this->_Name = assign_op._Name;
    this->_Energy_Point = assign_op._Energy_Point;
    this->_Hit_Point = assign_op._Hit_Point;
    this->_Damage = assign_op._Damage;
    return *this;
}

void ClapTrap::attack(const std::string& target)
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

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->_Hit_Point > amount)
        this->_Hit_Point -= amount;
    else if (_Hit_Point <= amount && _Hit_Point > 0)
        this->_Hit_Point = 0;
    else
    {
        std::cout << _Name << " is dead " << std::endl;
        return ;
    }
    std::cout << _Name << " has been damaged and it hit by " << amount << " attacks" << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_Energy_Point > 0 && _Hit_Point > 0)
    {
        _Hit_Point += amount;
        std::cout << _Name << " has repaired by " << amount << " Energy and now he has total " << _Hit_Point << " Hit Points" << std::endl;
        _Energy_Point--;
    }
    else if (_Energy_Point == 0 || _Hit_Point == 0)
        std::cout << " Can't be repaired because of low energy or 0 hit points" << std::endl;
    else
        std::cout << " Can't be repaired. Sorry..." << std::endl;
}

