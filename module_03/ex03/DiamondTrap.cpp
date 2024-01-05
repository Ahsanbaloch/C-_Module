/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:19:36 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 21:19:24 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("ClapTrap")
{
     std::cout << "Hello from child DiamondTrap Default constructor" << std::endl;
	_Name = "Diamond_Trap";
    _Hit_Point = FragTrap::_Hit_Point;
    _Energy_Point = FragTrap::_Hit_Point;
    _Damage = FragTrap::_Damage;
    
}

DiamondTrap::DiamondTrap(std::string name) :  ClapTrap(name + "_clap_name")
{
    std::cout << "Hello from child DiamondTrap" << std::endl;
	_Name = name;
    _Hit_Point = FragTrap::_Hit_Point;
    _Energy_Point = FragTrap::_Hit_Point;
    _Damage = FragTrap::_Damage;
}

DiamondTrap::~DiamondTrap()
{
    std::cout<< "Bye from DiamonTrap Destructor of " << _Name << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy_const) : ClapTrap(copy_const), FragTrap(copy_const), ScavTrap(copy_const)
{
    *this = copy_const;
    std::cout << "Hello from Copy constructor from DiamondTrap" << std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap& copy_assign)
{
    std::cout << "Hello from DiamondTrap assignemnet operator" << std::endl;
    if (this != &copy_assign)
    {
        _Name = copy_assign._Name + "_clap_name";
        _Hit_Point = copy_assign._Hit_Point;
        _Energy_Point = copy_assign._Energy_Point;
        _Damage = copy_assign._Damage;
    }
    return (*this);
}

void DiamondTrap::WhoAmI(void)
{
    std::cout << "I will show you my grandparent name which is " << ClapTrap::_Name
    << " and My Name is " << _Name << std::endl;
}

