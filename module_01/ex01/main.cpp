/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 21:02:02 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/24 21:10:46 by ahsalam          ###   ########.fr       */
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
    Zombie *zombie2 = zombieHorder(9, "Porsche 911 Gt3 RS  > Otehr_Porsche");
     while(++i < 9)
        zombie[i].announce();
    delete[] zombie2; */
    return (0);
}