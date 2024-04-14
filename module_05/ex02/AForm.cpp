/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:18:12 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/27 20:32:28 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm(std::string const name, int const grade_sign, int const grade_execute)
: _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)  
{
	setStatus(false);
	if (grade_sign < 1 || grade_execute < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
}

AForm::~AForm() {}

AForm::AForm(const AForm& copy_const)
: _name(copy_const._name), _signed(copy_const._signed), _grade_sign(copy_const._grade_sign), _grade_execute(copy_const._grade_execute)
{
	_signed = copy_const._signed;

}

AForm &AForm::operator=(const AForm& assign_op)
{
	if (this != &assign_op)
		_signed = assign_op._signed;
	return (*this);
}

std::string AForm::getName() const
{
	return (_name);
}

bool AForm::getStatus() const
{
	return (_signed);
}

int AForm::getSignGrade() const
{
	return (_grade_sign);
}

int AForm::getExecuteGrade() const
{
	return (_grade_execute);
}

void AForm::setStatus(bool status)
{
	_signed = status;
}

void AForm::beSigned(Bureaucrat &bureacrat)
{
	if (bureacrat.getGrade() <= _grade_sign)
		setStatus(true);
	else
		throw (AForm::GradeTooLowException());
}

void AForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (getStatus() == false)
		throw AForm::FormNotSignedException();
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("\033[31mGrade too high to sign the Aform...\033[0m\n");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("\033[31mGrade too low to sign the Aform...\033[0m\n");
}

const char *AForm::FormNotSignedException::what() const throw()
{
	return ("\033[31mForm is not signed yet...\033[0m\n");
}

std::ostream& operator<<(std::ostream& output, const AForm& Aform)
{
	output << "\033[33m" << Aform.getName() << "'s status is " << Aform.getStatus() << " and grade which will be signed is "
	<< Aform.getSignGrade() << " and grade which are required to execute is " << Aform.getExecuteGrade() << "\033[0m" ;
	return (output);
}
