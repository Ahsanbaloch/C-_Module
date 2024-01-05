/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/02 19:04:26 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 21:06:43 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : virtual public ClapTrap
{
private:
    
public:
    ScavTrap();
    ScavTrap(std::string name);
    ~ScavTrap();
    //copy constructor
    ScavTrap(const ScavTrap& copy_object);
    ScavTrap &operator=(const ScavTrap& assign_op);

    void attack(const std::string& target);
    void guardGate();
};


#endif