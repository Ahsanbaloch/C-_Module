/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:44:14 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/09 18:07:59 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

/* int main()
{
	int k = -1;
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;
	delete i;

	Animal* animal[4];
	while (++k > 2)
		animal[k] = new Dog();
	while (k > 4)
	{
		animal[k] = new Cat();
		k++;
	}
	k = -1;
	while (++k < 4)
	{
		delete animal[k];
	}		
	return (0);
} */
int main()
{
Animal	*animals[50];
	
	// create cats and dogs array
	for (int i = 0; i < 50 ; i++)
	{
		if (i < 25)
			animals[i] = new Cat();
		else
			animals[i] = new Dog();
	}

	//call the makesound to make sure that everything was allocated correctly
	for (int i = 0; i < 50; i++)
		animals[i]->makeSound();
	
	//delete each object to free memory
	for (int i = 0; i < 50; i++)
		delete (animals[i]);
	}