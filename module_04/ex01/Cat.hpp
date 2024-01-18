/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/07 01:57:46 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/18 17:35:03 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat : public Animal
{
private:
    Brain *_brain;
public:
    Cat();
    ~Cat();

    Cat(const Cat& copy_const);
    Cat& operator=(const Cat& assign_op); 
    void makeSound() const;
};

#endif