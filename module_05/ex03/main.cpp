/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:38:46 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/18 11:34:06 by ahsalam          ###   ########.fr       */
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

		shrubbery = someRandomIntern.makeForm("ShrubberyCreationForm", "Hello World");
		pardon = someRandomIntern.makeForm("PresidentialPardonForm1" , "Jorah");
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

/* #define BLUE "\033[1;34m"
#define RED "\033[1;31m"
#define RESET "\033[0m"


#include "Bureaucrat.hpp"

#include <iostream>

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern someRandomIntern;
	AForm* tree = NULL;
	AForm* robot = NULL;
	AForm* president = NULL;

	try
	{
		tree = someRandomIntern.makeForm("ShrubberyCreationForm", "treeTarget");
		robot = someRandomIntern.makeForm("RobotomyRequestForm", "robotTarget");
		president = someRandomIntern.makeForm("PresidentialPardonForm", "presidentTarget");
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		delete tree;
		delete robot;
		return 1;
	}

	Bureaucrat	max("max", 1);

	std::cout << RED << *tree << RESET << std::endl;
	std::cout << RED << *robot << RESET << std::endl;
	std::cout << RED << *president << RESET << std::endl;
	std::cout << std::endl;

	std::cout << BLUE << max << RESET << "\n";
	max.signForm(*tree);
	max.signForm(*robot);
	max.signForm(*president);
	std::cout << std::endl;

	std::cout << RED << *tree << RESET << std::endl;
	std::cout << RED << *robot << RESET << std::endl;
	std::cout << RED << *president << RESET << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	max.executeForm(*tree);
	std::cout << std::endl;
	max.executeForm(*robot);
	std::cout << std::endl;
	max.executeForm(*president);
	std::cout << std::endl;

	delete tree;
	delete robot;
	delete president;

	try
	{
		AForm* invalidForm = someRandomIntern.makeForm("invalid form", "invalidTarget");
		(void)invalidForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return 0;
} */