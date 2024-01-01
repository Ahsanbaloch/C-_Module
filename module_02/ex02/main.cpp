/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 16:30:44 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/01 21:33:09 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{

    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;

    a = 0;
    Fixed c(0);
    Fixed f(a / c);
    std::cout << f << std::endl;

    a = 9;
    a--;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << (a == 11) << std::endl;
    std::cout << (a != 11) << std::endl;
    std::cout << (a > 11) << std::endl;
    std::cout << (a < 11) << std::endl;
    std::cout << (a >= 11) << std::endl;
    std::cout << (a <= 11) << std::endl;

    return (0);
    
}