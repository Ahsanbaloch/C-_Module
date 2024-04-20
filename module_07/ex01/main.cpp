/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/25 13:12:40 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/20 13:47:00 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void printInt(int  i)
{
    std::cout << "i: " << i << std::endl; 
}

int main()
{
	int arr[] = {1, 2, 3};
	iter(arr, 3, printInt); //instead of 3 we can also use sizeof(arr)/sizeof(arr[0])
    return (0);
}