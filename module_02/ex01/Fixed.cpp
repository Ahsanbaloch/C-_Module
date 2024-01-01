/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 21:45:09 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/30 17:36:08 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : _fixed_point(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _fixed_point(value << _fractional_bits)
{
    std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _fixed_point(roundf(value * (1 << _fractional_bits)))
{
    std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed (const Fixed& copy_construct) : _fixed_point(copy_construct._fixed_point) // coping the current object
{
    std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed& assign_op) // assignment operator overload
{
    std::cout << "copy assignment operator called" << std::endl;
    if (this != &assign_op)
        _fixed_point = assign_op._fixed_point;
    return *this;
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed)
{
    out << fixed.toFloat();
    return out;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

void Fixed::setRawBits(const int raw)
{
    std::cout << "setRawBits member function called" << std::endl;
    _fixed_point = raw;
}

int Fixed::getRawBits(void) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return _fixed_point;
}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(_fixed_point) / (1 << _fractional_bits));
}

int Fixed::toInt(void) const
{
    return (_fixed_point >> _fractional_bits);
}