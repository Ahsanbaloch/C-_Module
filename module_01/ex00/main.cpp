/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:38:49 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/15 21:37:43 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie stack("stack");
    Zombie *heap = new Zombie("Bro");
    randomChump("Porsche...");
    delete heap;

    return (0);
}