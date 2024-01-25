/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:44:14 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 22:05:35 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	std::cout << "\n----another one---" << std::endl;

	Dog basic;
	{
	Dog tmp = basic;
	}

	std::cout << "\n--my example" << std::endl;
	Animal *animal[4];
	for (int i = 0; i < 2; i++)
		animal[i] = new Cat();
	for (int i = 2; i < 4; i++)
		animal[i] = new Dog();
	for (int i = 0; i < 4; i++)
		animal[i]->makeSound();
	for (int i = 0; i < 4; i++)
		delete animal[i];
}