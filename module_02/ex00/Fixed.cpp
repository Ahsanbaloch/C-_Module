/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:48:47 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/28 16:02:50 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixedPointValue(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy_constructor)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = copy_constructor;
}

Fixed& Fixed::operator=(const Fixed& assignment_operator)
{
    std::cout << "Copy assignment operator called " << std::endl;
    if (this != &assignment_operator)
        this->_fixedPointValue = assignment_operator.getRawBits();
    return *this;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return this->_fixedPointValue;
}
