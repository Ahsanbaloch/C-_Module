/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serial.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 14:57:28 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/24 15:03:33 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

Serial::Serial() {};

Serial::~Serial() {};

Serial::Serial(const Serial &copy_const)
{
	*this = copy_const;
}

Serial &Serial::operator=(const Serial &assign_op)
{
	(void)assign_op;
	return (*this);
}

uintptr_t Serial::Serialize(Data *ptr)
{
	return reinterpret_cast<uintptr_t>(ptr);
}

Data* Serial::Deserialize(uintptr_t raw)
{
	return reinterpret_cast<Data*>(raw);
}