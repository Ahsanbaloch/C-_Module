/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:54:28 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 21:42:00 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	int i;

	i = -1;
	Zombie *zombie = new Zombie[N];
	while(++i < N)
		zombie[i].set_name(name);
	return (zombie);
}