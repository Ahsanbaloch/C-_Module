/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:33:58 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/14 18:10:26 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat b1("Ahsan", 9);
	Form form("Form A", 7, 8);
	try
	{
		std::cout << b1 << std::endl;

		b1.signForm(form);
		std::cout << form << std::endl;
		//form.beSigned(b1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	Bureaucrat b2("Jerry", 14);
	Form form1("Form B", 15, 13);
	try
	{
		b2.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch(const Form::GradeTooHighException& e)
	{
		std::cerr << e.what();
	}
	catch(const Form::GradeTooLowException& e)
	{
		std::cerr << e.what();
	}

	return (0);
}