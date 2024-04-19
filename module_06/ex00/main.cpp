/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 12:01:50 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/19 16:07:46 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Conversion.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		std::cout << "2 arguments please..." << std::endl;
	else
		Conversion::Convert(argv[1]);
	return (0);
}