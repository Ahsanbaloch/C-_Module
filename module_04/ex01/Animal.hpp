/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/05 14:12:46 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 22:04:10 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Brain.hpp"

#include <iostream>

class Animal
{

protected:
	std::string _type_;
public:
	Animal();
	virtual ~Animal();

	Animal(const Animal& copy_const);
	Animal& operator=(const Animal& assign_op);

	virtual void makeSound() const;
	std::string getType() const;
	void setType(std::string type);
};

#endif