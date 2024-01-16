/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 20:41:31 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 21:42:18 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>

class Zombie
{
private:
	std::string _name;
public:
	Zombie();
	~Zombie();
	void announce();
	void set_name(std::string name);
};

Zombie* zombieHorde(int N, std::string name);

#endif