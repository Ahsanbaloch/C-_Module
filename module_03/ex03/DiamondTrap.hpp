/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/03 17:15:04 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/03 21:18:31 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
   std::string _Name;
public:
    DiamondTrap();
    DiamondTrap(std::string name);
    ~DiamondTrap();

    DiamondTrap(const DiamondTrap& copy_const);
    DiamondTrap &operator=(const DiamondTrap& assign_op);

    void WhoAmI();
};

#endif