/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:58:35 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/13 19:58:36 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria
{
public:
	Cure();
	~Cure();

	Cure(const Cure& copy_const);
	Cure& operator=(const Cure& assign_op);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif