/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Conversion.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 11:58:59 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/24 12:52:47 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONVERSION_HPP
#define CONVERSION_HPP

#include <iostream>
#include <cstdlib>
#include <cmath>

class Conversion
{
	private:
	/* data */
	public:
	Conversion(/* args */);
	~Conversion();
	Conversion(const Conversion &);
	Conversion &operator=(const Conversion &);

	static void Convert(const std::string input);
};

#endif
