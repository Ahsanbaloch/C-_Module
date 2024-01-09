/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 16:09:45 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/08 17:35:16 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal
{
protected:
    std::string _type_;
public:
    WrongAnimal();
    virtual ~WrongAnimal();

    WrongAnimal(const WrongAnimal& copy_const);
    WrongAnimal& operator=(const WrongAnimal& assign_op);
    void setType(std::string type);
    std::string getType() const;
    void makeSound() const;
};

#endif