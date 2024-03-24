/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:03:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/24 15:17:02 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serial.hpp"

int main()
{
	Data data = {42, 42.42};

	Data* ptr = &data;
	Serial s;
	uintptr_t srl = s.Serialize(ptr);
	Data* dsrl = s.Deserialize(srl);

	if (ptr == dsrl)
		 std::cout << "\033[32mSerialization and deserialization worked correctly.\033[0m" << std::endl;
    else
        std::cout << "\033[33mSerialization and deserialization failed.\033[0m" << std::endl;
	std::cout << "ptr: " << ptr << std::endl;
	std::cout <<  "dsrl: " << dsrl << std::endl;
}