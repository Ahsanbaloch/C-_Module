/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 17:51:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/17 15:45:50 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{

	//FragTrap test
	DiamondTrap f1;
	f1.attack("incoent 4 ");
	f1.takeDamage(100);
	f1.beRepaired(30);
	f1.highFiveGuys();
	f1.WhoAmI();
	std::cout << std::endl << "Destructor messages" << std::endl <<"----------" << std::endl;


	return (0);
}