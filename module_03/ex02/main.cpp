/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:51:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 16:26:48 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	//clapTrap tests
	ClapTrap c1("Robo1 ");
	ClapTrap c2("Robo2 ");

	c1.attack("inocent ");
	c1.takeDamage(10);
	c1.beRepaired(5); 

	c2.attack("inocent 2 ");
	c2.takeDamage(10);
	c2.beRepaired(5);

	//ScavTrap test
	ScavTrap s1("Scav_Robo ");
	s1.attack("inonect 3 ");
	s1.takeDamage(50);
	s1.beRepaired(20);
	s1.guardGate();

	//FragTrap test
	FragTrap f1("Frag_Robo");
	f1.attack("incoent 4 ");
	f1.takeDamage(100);
	f1.beRepaired(30);
	f1.highFiveGuys();

	return (0);
}