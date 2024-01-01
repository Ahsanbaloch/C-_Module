/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:32:45 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/01 18:31:30 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) : _fixedPointValue(0){}

Fixed::Fixed(const Fixed &copy_object)
{
    *this = copy_object;
}

Fixed::~Fixed(void){}

// operator overloading && arithmetic operator overloading

Fixed &Fixed::operator=(const Fixed &assignment_op)
{
    if (this != &assignment_op)
        this->_fixedPointValue = assignment_op.getRawBits();
    return (*this);
}

Fixed Fixed::operator+(const Fixed &add_op)
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue + add_op.getRawBits());
    return (result);
}

Fixed Fixed::operator-(const Fixed &sub_op)
{
    Fixed result;
    result.setRawBits(this->_fixedPointValue - sub_op.getRawBits());
    return (result);
}

Fixed Fixed::operator*(const Fixed &mul_op)
{
    Fixed result;
    result.setRawBits((this->_fixedPointValue * mul_op.getRawBits()) >> this->_fractionalBits);
    return (result);
}

Fixed Fixed::operator/(const Fixed &div_op)
{
    Fixed result;
    if (div_op.getRawBits() == 0)
    {
        std::cout << "Division by zero is not allowed" << std::endl;
        return (*this);
    
    }
    result.setRawBits((this->_fixedPointValue << this->_fractionalBits) / div_op.getRawBits());
    return (result);
}

//postfix
Fixed &Fixed::operator++()
{
    this->_fixedPointValue++;
    return (*this);
}

Fixed &Fixed::operator--()
{
    this->_fixedPointValue--;
    return (*this);
}

//prefix
Fixed Fixed::operator++(int)
{
    Fixed temp = *this;
    this->_fixedPointValue++;
    return (temp);
}

Fixed Fixed::operator--(int)
{
    Fixed temp = *this;
    this->_fixedPointValue--;
    return (temp);
}

//comparison operator overloading
bool Fixed::operator!=(const Fixed &ne_op)
{
    return (this->_fixedPointValue != ne_op.getRawBits());
}

bool Fixed::operator==(const Fixed &eq_op)
{
    return (this->_fixedPointValue == eq_op.getRawBits());
}

bool Fixed::operator>(const Fixed &gt_op)
{
    return (this->_fixedPointValue > gt_op.getRawBits());
}

bool Fixed::operator<(const Fixed &lt_op)
{
    return (this->_fixedPointValue < lt_op.getRawBits());
}

bool Fixed::operator>=(const Fixed &ge_op)
{
    return (this->_fixedPointValue >= ge_op.getRawBits());
}

bool Fixed::operator<=(const Fixed &le_op)
{
    return (this->_fixedPointValue <= le_op.getRawBits());
}

//min max

Fixed &Fixed::min(Fixed &num1, Fixed &num2)
{
    if (num1.getRawBits() < num2.getRawBits())
        return (num1);
    return (num2);
}

Fixed &Fixed::max(Fixed &num1, Fixed &num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return (num1);
    return (num2);
}

const Fixed &Fixed::min(const Fixed &num1, const Fixed &num2)
{
    if (num1.getRawBits() < num2.getRawBits())
        return (num1);
    return (num2);
}

const Fixed &Fixed::max(const Fixed &num1, const Fixed &num2)
{
    if (num1.getRawBits() > num2.getRawBits())
        return (num1);
    return (num2);
}

//getters and setters
int Fixed::getRawBits(void) const
{
    return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
    this->_fixedPointValue = raw;
}

//float to fixed
Fixed::Fixed(const int int_num)
{
    this->_fixedPointValue = int_num << this->_fractionalBits;
}

Fixed::Fixed(const float float_num)
{
    this->_fixedPointValue = roundf(float_num * (1 << this->_fractionalBits));
}

float Fixed::toFloat(void) const
{
    return ((float)this->_fixedPointValue / (float)(1 << this->_fractionalBits));
}

int Fixed::toInt(void) const
{
    return (this->_fixedPointValue >> this->_fractionalBits);
}

std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num)
{
    out << fixed_num.toFloat();
    return (out);
}

