/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:02:14 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/29 14:23:27 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _str(name) {}

HumanB::~HumanB() {}

void HumanB::attack()
{
	if (_weapon == NULL)
		std::cout << _str << " attack with bare hands" << std::endl;
	else
	std::cout << _str << " attack with " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
	_weapon = &type;
}

void HumanB::setWeapon(Weapon* type)
{
	_weapon = type;
}