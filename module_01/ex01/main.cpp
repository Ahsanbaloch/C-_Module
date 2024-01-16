/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:02:02 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 21:44:39 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = -1;

    Zombie *zombie = zombieHorde(2, "Porsche > every_car");
    while (++i < 2)
        zombie[i].announce();
    delete[] zombie;

/*     i = -1;
    Zombie *zombie2 = zombieHorder(11, "Porsche 911 Gt3 RS  > Otehr_Porsche");
     while(++i < 11)
        zombie[i].announce();
    delete[] zombie2; */
    return (0);
}