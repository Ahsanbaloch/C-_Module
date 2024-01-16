/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/25 14:02:42 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 21:55:48 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
{
    std::string input;
    std::cout << "give some input for user" << std::endl;
    std::getline(std::cin, input);
    //std::cin >> input;
Weapon club = Weapon("crude spiked club");
HumanA bob("Bob", club);
bob.attack();
club.setType(input);
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