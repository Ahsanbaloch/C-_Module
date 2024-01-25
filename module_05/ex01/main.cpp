/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 17:33:58 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/23 20:14:01 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	Bureaucrat b1("Ahsan", 2);
	Form form("Form A", 2, 2);
	try
	{
		std::cout << b1 << std::endl;

		std::cout << form << std::endl;
		b1.signForm(form);
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
		std::cout << form1 << std::endl;
		b2.signForm(form1);
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