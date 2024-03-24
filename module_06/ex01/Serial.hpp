/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:52:41 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/24 15:03:40 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIAL_HPP
#define SERIAL_HPP

#include <iostream>

struct Data {
    int i;
    double d;
};

class Serial
{
private:
    /* data */
public:
    Serial(/* args */);
    ~Serial();
    Serial(const Serial &);
    Serial &operator=(const Serial &);
    
    static uintptr_t Serialize(Data* ptr);
    static Data* Deserialize(uintptr_t raw);
};


#endif