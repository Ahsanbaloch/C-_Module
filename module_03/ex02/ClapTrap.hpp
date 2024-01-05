/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 14:11:03 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 14:21:29 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
# define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
protected:
   std::string _Name;
   unsigned int _Hit_Point;
   unsigned int  _Energy_Point;
   unsigned int _Damage;
public:
    ClapTrap(std::string name);
    ~ClapTrap();
    //copy constructor
    ClapTrap(const ClapTrap& copy_object);
    ClapTrap &operator=(const ClapTrap& assign_op);

    void attack(const std::string& target);
    void takeDamage(unsigned int amount);
    void beRepaired(unsigned int amount);
};

#endif