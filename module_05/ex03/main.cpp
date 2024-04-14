/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:38:46 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/14 19:49:43 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{

   	Intern	someRandomIntern;
	AForm	*shrubbery = 0;
	AForm	*pardon = 0;
	try
	{

		shrubbery = someRandomIntern.makeForm("ShrubberyCreationForm", "");
		pardon = someRandomIntern.makeForm("presidential pardon" , "Jorah");
	}
	catch (const Bureaucrat::GradeTooLowException &e)
	{		
		std::cerr << e.what() << std::endl;
	}
	catch (const Bureaucrat::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const AForm::GradeTooHighException &e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (const Intern::UnkownFormExecption &e)
	{
		std::cerr << e.what() << std::endl;
	}
	
	delete (shrubbery);
	delete (pardon);
}