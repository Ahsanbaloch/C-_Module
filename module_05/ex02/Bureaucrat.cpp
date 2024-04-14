/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:18:35 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/25 18:19:19 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string name, int grade) : _name(name)
{
	setGrade(grade);
}

Bureaucrat::~Bureaucrat() {}

Bureaucrat::Bureaucrat(const Bureaucrat& copy_const)
{
	_grade = copy_const._grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat& assign_op)
{
	if (this != &assign_op)
		_grade = assign_op._grade;
	return (*this);
}

std::ostream& operator<<(std::ostream& ostream, const Bureaucrat& ref)
{
	ostream << "\033[33m" << ref.getName() << ", bureaucrat grade " << ref.getGrade() << "\033[0m";
	return (ostream);
}

std::string Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	_grade = grade;
	std::cout << "\033[32mGrade set to " << _grade << "\033[0m" << std::endl;
}

void Bureaucrat::increaseGrade()
{
	if (_grade < 1 || (_grade - 1) < 1)
		throw GradeTooHighException();
	_grade--;
	std::cout << "\033[32mGrade increases to " << _grade << "\033[0m" << std::endl;
}

void Bureaucrat::decreaseGrade()
{
	if (_grade > 150 || (_grade + 1) > 150)
		throw GradeTooLowException();
	_grade++;
	std::cout << "\033[32mGrade decreases to " << _grade << "\033[0m" << std::endl;
}

void Bureaucrat::signForm(AForm &form)
{
	 try {
	 	form.beSigned(*this);
		std::cout << "\033[32m" << _name << " signs " << form.getName() << "\033[0m" << std::endl;

	 }
	catch (const AForm::GradeTooHighException &e)
	{
		std::cerr << "\033[31m" << _name << " can't sign " << form.getName() << " because " << e.what() << "\033[0m" << std::endl;
	}
	catch (const AForm::GradeTooLowException &e)
	{
		std::cerr << "\033[31m" << _name << " can't sign " << form.getName() << " because " << e.what() << "\033[0m" << std::endl;
	} 
}

void Bureaucrat::executeForm(AForm const &form)
{
	if (_grade > form.getExecuteGrade())
		throw AForm::GradeTooLowException();
	else
	{
		std::cout << "\033[32m" << _name << " executed " << form.getName() << "\033[0m" << std::endl;
		form.execute(*this);
	}
}

const char *Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("\033[31mGrade too high...\033[0m");
}

const char *Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("\033[31mGrade too low...\033[0m");
}