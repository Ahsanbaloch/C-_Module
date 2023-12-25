/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:02:42 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/25 17:41:04 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
{
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType("some other type of club");
bob.attack();
}
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}

//my own test
/* Weapon machine_gun = Weapon("machine gun");
HumanA ahsalam("HumanA", machine_gun);
ahsalam.attack();
machine_gun.setType(" is working");
ahsalam.attack();

Weapon bazooka = Weapon("bazooka");
HumanB ahsalam_b("HumanA");
ahsalam_b.setWeapon(bazooka);
ahsalam_b.attack();
bazooka.setType(" is working");
ahsalam_b.attack(); */

return 0;
}