/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:02:42 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/29 14:15:24 by ahsalam          ###   ########.fr       */
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
std::cout << "---------------------" << std::endl;
{
Weapon club = Weapon("crude spiked club");
HumanB jim("Jim");
jim.setWeapon(club);
jim.attack();
club.setType("some other type of club");
jim.attack();
}
std::cout << "---------------------" << std::endl;
{
Weapon club = Weapon("crude spiked club");
HumanB jim1("Jim");
jim1.setWeapon(NULL);
jim1.attack();
club.setType("some other type of club");
jim1.attack();
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