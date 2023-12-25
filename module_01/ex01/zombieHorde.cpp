/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:54:28 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/24 20:56:45 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorder(int N, std::string name)
{
	int i;

	i = -1;
	Zombie *zombie = new Zombie[N];
	while(++i < N)
		zombie[i].set_name(name);
	return (zombie);
}