/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 13:54:15 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/29 14:19:48 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
private:
	Weapon *_weapon;
	std::string _str;
public:
	HumanB(std::string name);
	~HumanB();

	void attack();
	void setWeapon(Weapon& type);
	void setWeapon(Weapon* type);
};


#endif