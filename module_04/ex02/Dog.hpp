/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 02:33:02 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 18:49:50 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog : public Animal
{
private:
    Brain *_brain;
public:
    Dog();
    ~Dog();

    Dog(const Dog& copy_const);
    Dog& operator=(const Dog& assign_op); 
    void makeSound() const;
};

#endif