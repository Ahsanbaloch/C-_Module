/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:02:02 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/29 11:16:48 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    int i = -1;

    Zombie *zombie = zombieHorder(9, "Porsche > every_car");
    while(++i < 9)
        zombie[i].announce();
    delete[] zombie;

/*     i = -1;
    Zombie *zombie2 = zombieHorder(11, "Porsche 911 Gt3 RS  > Otehr_Porsche");
     while(++i < 11)
        zombie[i].announce();
    delete[] zombie2; */
    return (0);
}