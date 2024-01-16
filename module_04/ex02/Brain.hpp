/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/08 21:23:43 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/08 21:29:42 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
public:
	std::string ideas[100];

	Brain();
	~Brain();

	Brain(const Brain& copy_const);
	Brain& operator=(const Brain& assign_op);
};


#endif