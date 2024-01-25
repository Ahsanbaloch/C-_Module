/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/22 21:48:01 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/23 19:56:06 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Bureaucrat.hpp"

int main(void)
{
    try
	{
		Bureaucrat css("Ahsan", 50);
		std::cout << css << std::endl;

		//hight grade
		Bureaucrat css1("Ahsan", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat css("Ahmad", 150);
		css.increaseGrade();
		css.decreaseGrade();
		css.decreaseGrade();
	}
	catch(const Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch(const Bureaucrat::GradeTooLowException& e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	return (0);
}