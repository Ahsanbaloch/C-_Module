/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/02 22:20:31 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/02 23:40:42 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef RPN_HPP
#define RPN_HPP

#include <stack>
#include <exception>
#include <iostream>
#include <sstream>

class RPN
{
private:
    std::stack<int> _p_num; 
public:
    RPN();
    ~RPN();

    void    readData(std::string input);
    int     result(int num1, int num2, char op);
    
};



#endif