/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:51:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/02 18:40:48 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap c1("Robo1 ");
	ClapTrap c2("Robo2 ");

	c1.attack("inocent ");
	c1.takeDamage(10);
	c1.beRepaired(5); 

	c2.attack("inocent 2 ");
	c2.takeDamage(10);
	c2.beRepaired(5); 

}