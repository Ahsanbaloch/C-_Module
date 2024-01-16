/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/13 19:58:49 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/13 19:58:50 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria
{

public:
	Ice();
	~Ice();

	Ice(const Ice& copy_const);
	Ice& operator=(const Ice& assign_op);
	AMateria* clone() const;
	void use(ICharacter& target);
};

#endif