/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 20:03:10 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/13 20:05:13 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
private:
    AMateria* _inventory[4];
public:
    MateriaSource();
    ~MateriaSource();

    MateriaSource(const MateriaSource& copy_const);
    MateriaSource& operator=(const MateriaSource& assign_op);

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};


#endif