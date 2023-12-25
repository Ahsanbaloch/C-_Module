/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:59:22 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/25 15:36:45 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon& weapon) 
: _weapon(weapon), _name(name) 
{}

HumanA::~HumanA() {}

void HumanA::attack()
{
	std::cout << _name << " attack with " << _weapon.getType() << std::endl;
}