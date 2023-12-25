/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/24 19:38:49 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/24 20:24:15 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
    Zombie stack("stack");
    Zombie *heap = new Zombie("heap");
    delete heap;
    randomChump("Porsche...");

    return (0);
}