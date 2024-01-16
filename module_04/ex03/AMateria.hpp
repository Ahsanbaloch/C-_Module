/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:09:25 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/12 20:16:28 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include <iostream>
#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
protected:
	std::string _type_;

public:
	AMateria(std::string const & type);
	virtual ~AMateria();

	AMateria(const AMateria& copy_const);
	AMateria& operator=(const AMateria& assign_op);

	std::string const & getType() const; //should return the materia type

	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};

#endif