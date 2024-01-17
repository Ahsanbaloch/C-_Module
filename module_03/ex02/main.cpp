/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:51:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/17 15:44:18 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//clapTrap tests
	std::cout << std::endl << "ClapTrap" << std::endl <<"----------" << std::endl;
	ClapTrap c1("Robo1 ");
	ClapTrap c2("Robo2 ");

	c1.attack("inocent ");
	c1.takeDamage(10);
	c1.beRepaired(5); 

	c2.attack("inocent 2 ");
	c2.takeDamage(10);
	c2.beRepaired(5);

	std::cout << std::endl << "ScavTrap" << std::endl <<"----------" << std::endl;
	ScavTrap s1("Scav_Robo ");
	s1.attack("inonect 3 ");
	s1.takeDamage(50);
	s1.beRepaired(20);
	s1.guardGate();

	//FragTrap test
	std::cout << std::endl << "FragTrap" << std::endl <<"----------" << std::endl;
	FragTrap f1("Frag_Robo");
	f1.attack("incoent 4 ");
	f1.takeDamage(100);
	f1.beRepaired(30);
	f1.highFiveGuys();

	std::cout << std::endl << "Destructor messages" << std::endl <<"----------" << std::endl;

	return (0);
}