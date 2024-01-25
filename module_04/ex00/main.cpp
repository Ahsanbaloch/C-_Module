/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 17:44:14 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 21:53:51 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
/* 	const Animal		*specie = new Animal();
	const Animal		*cat = new Cat();
	const Animal		*dog = new Dog(); */
	const WrongAnimal	*wrongspecie = new WrongAnimal();
	const WrongAnimal	*wrongCat = new WrongCat();
	
	/* std::cout << "Animal : " << specie->getType() << std::endl;
	specie->makeSound();
	std::cout << "Animal : " << cat->getType() << std::endl;
	cat->makeSound();
	std::cout << "Animal : " << dog->getType() << std::endl;
	dog->makeSound(); */
	std::cout << "Wrong Animal : " << wrongspecie->getType() << std::endl;
	wrongspecie->makeSound();
	std::cout << "Wrong cat : " << wrongCat->getType() << std::endl;
	wrongCat->makeSound();
/* 	delete(dog);
	delete(cat); */
	delete(wrongCat);
	delete(wrongspecie);
	//delete(specie);
}