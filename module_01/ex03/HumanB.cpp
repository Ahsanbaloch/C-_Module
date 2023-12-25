/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:02:14 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/25 15:36:45 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _str(name) {}

HumanB::~HumanB() {}

void HumanB::attack()
{
	std::cout << _str << " attack with " << _weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon& type)
{
	_weapon = &type;
}