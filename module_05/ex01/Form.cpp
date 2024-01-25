/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:23:33 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/23 19:50:39 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string const name, int const grade_sign, int const grade_execute)
: _name(name), _grade_sign(grade_sign), _grade_execute(grade_execute)  
{
	setStatus(false);
	if (grade_sign < 1 || grade_execute < 1)
		throw GradeTooHighException();
	else if (grade_sign > 150 || grade_execute > 150)
		throw GradeTooLowException();
}

Form::~Form() {}

Form::Form(const Form& copy_const)
: _name(copy_const._name), _signed(copy_const._signed), _grade_sign(copy_const._grade_sign), _grade_execute(copy_const._grade_execute)
{
	_signed = copy_const._signed;

}

Form &Form::operator=(const Form& assign_op)
{
	if (this != &assign_op)
		_signed = assign_op._signed;
	return (*this);
}

std::string Form::getName() const
{
	return (_name);
}

bool Form::getStatus() const
{
	return (_signed);
}

int Form::getSignGrade() const
{
	return (_grade_sign);
}

int Form::getExecuteGrade() const
{
	return (_grade_execute);
}

void Form::setStatus(bool status)
{
	_signed = status;
}

void Form::beSigned(Bureaucrat &bureacrat)
{
	if (bureacrat.getGrade() <= _grade_sign)
		setStatus(true);
	else
		throw (Form::GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("\033[31mGrade too high to sign the form...\033[0m\n");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("\033[31mGrade too low to sign the form...\033[0m\n");
}

std::ostream& operator<<(std::ostream& output, const Form& form)
{
	output << "\033[33m" << form.getName() << "'s status is " << form.getStatus() << " and grade which will be signed is "
	<< form.getSignGrade() << " and grade which are required to execute is " << form.getExecuteGrade() << "\033[0m" ;
	return (output);
}
