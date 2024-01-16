/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 14:47:18 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/08 18:38:30 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{

public:
    WrongCat();
    ~WrongCat();

    WrongCat(const WrongCat& copy_const);
    WrongCat &operator=(const WrongCat& assign_op);
    void makeSound() const;
};

#endif