/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:44:14 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 18:50:25 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	//Animal animal = new dog(); //can't make that becuase of abstract class

	Dog *d = new Dog();
	Cat *c = new Cat();

	std::cout << "Dog : ";
	d->makeSound();

	std::cout << "Cat : ";
	c->makeSound();

	delete(d);
	delete(c);

	Dog German_shepherd;
	std::cout << "German Shepherd : ";
	Animal *dog_breed = &German_shepherd;
	dog_breed->makeSound(); // check leaks
}