/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:59:15 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/13 21:46:31 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
    std::cout << "\033[32mHello from Cure constructor\033[0m" << std::endl;
}

Cure::~Cure()
{
    std::cout << "\033[31mBye from Cure destructor\033[0m" << std::endl;
}

Cure::Cure(const Cure &copy_const) : AMateria(copy_const)
{
    std::cout << "\033[32mHello from Cure copy constructor\033[0m" << std::endl;
}

Cure &Cure::operator=(const Cure &assign_op)
{
    std::cout << "\033[32mHello from Cure assignation operator\033[0m" << std::endl;
   AMateria::operator=(assign_op);
    return (*this);
}

AMateria *Cure::clone() const
{
    return (new Cure(*this));
}

void Cure::use(ICharacter &target)
{
    std::cout << "\033[33m* heals " << target.getName() << "'s wounds *\033[0m" << std::endl;
}