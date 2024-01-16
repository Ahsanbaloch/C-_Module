/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:03:40 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/13 21:46:39 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    std::cout << "\033[32mHello from MateriaSource constructor\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
        _inventory[i] = NULL;
}

MateriaSource::~MateriaSource()
{
    std::cout << "\033[31mBye from MateriaSource destructor\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i])
            delete _inventory[i];
    }
}

MateriaSource::MateriaSource(const MateriaSource &copy_const)
{
    std::cout << "\033[32mHello from MateriaSource copy constructor\033[0m" << std::endl;
    for (int i = 0; i < 4; i++)
    {
        if (copy_const._inventory[i])
            _inventory[i] = copy_const._inventory[i]->clone();
        else
            _inventory[i] = NULL;
    }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &assign_op)
{
    std::cout << "\033[32mHello from MateriaSource assignation operator\033[0m" << std::endl;
    if (this != &assign_op)
    {
        for (int i = 0; i < 4; i++)
        {
            if (_inventory[i])
                delete _inventory[i];
            if (assign_op._inventory[i])
                _inventory[i] = assign_op._inventory[i]->clone();
            else
                _inventory[i] = NULL;
        }
    }
    return (*this);
}

void MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!_inventory[i])
        {
            _inventory[i] = m;
            break;
        }
    }
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
    for (int i = 0; i < 4; i++)
    {
        if (_inventory[i] && _inventory[i]->getType() == type)
            return (_inventory[i]->clone());
    }
    return (NULL);
}