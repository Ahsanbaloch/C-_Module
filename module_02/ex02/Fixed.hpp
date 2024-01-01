/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 00:22:41 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/01 21:33:44 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed();
    Fixed(const Fixed &copy_object);
    ~Fixed();
    
    // operator overloading && arithmetic operator overloading
    Fixed &operator=(const Fixed &assignmet_op);
    Fixed operator+(const Fixed &add_op);
    Fixed operator-(const Fixed &sub_op);
    Fixed operator*(const Fixed &mul_op);
    Fixed operator/(const Fixed &div_op);
    
    //postfix
    Fixed &operator++();
    Fixed &operator--();
    //prefix
    Fixed operator++(int);
    Fixed operator--(int);
    
    //comparison operator overloading
    bool operator!=(const Fixed &ne_op);
    bool operator==(const Fixed &eq_op);
    bool operator>(const Fixed &gt_op);
    bool operator<(const Fixed &lt_op);
    bool operator>=(const Fixed &ge_op);
    bool operator<=(const Fixed &le_op);

    //min max
    static Fixed &min(Fixed &num1, Fixed &num2);
    static Fixed &max(Fixed &num1, Fixed &num2);
    static const Fixed &min(const Fixed &num1, const Fixed &num2);
    static const Fixed &max(const Fixed &num1, const Fixed &num2);

    //getters and setters
    int getRawBits(void) const;
    void setRawBits(int const raw);

    //float to fixed
    Fixed(const int int_num);
    Fixed(const float float_num);
    float toFloat(void) const;
    int toInt(void) const;

};

std::ostream &operator<<(std::ostream &out, const Fixed &fixed_num);


#endif