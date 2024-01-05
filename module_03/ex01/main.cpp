/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:51:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 01:19:09 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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
	ScavTrap s1("Robot");
	s1.attack("Inconect 3");
	s1.takeDamage(50);
	s1.beRepaired(20);
	s1.guardGate();

}