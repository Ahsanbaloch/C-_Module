/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/28 15:46:29 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/16 13:47:16 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
private:
    int _fixedPointValue;
    static const int _fractionalBits = 8;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed& copy_constructor); // copy constructor
    Fixed& operator=(const Fixed& assignment_operator); // assignment operator
    
    int getRawBits(void) const;
};

//std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif