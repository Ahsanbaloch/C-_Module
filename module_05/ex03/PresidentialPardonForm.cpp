/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:21:25 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/26 21:43:39 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target) 
: AForm("Presidential Pardon Form", 25, 5), _target(target) {}

PresidentialPardonForm::~PresidentialPardonForm() {}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& copy_const) : AForm(copy_const)
{
	_target = copy_const._target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm& assign_op)
{
	if (this != &assign_op)
		_target = assign_op._target;
	return (*this);
}

std::string PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void PresidentialPardonForm::setTarget(std::string target)
{
	_target = target;
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > getExecuteGrade())
		throw (Bureaucrat::GradeTooHighException());
	else if (getStatus() == false)
		throw (FormNotSignedException());
	else
		std::cout << "\033[32m" << getTarget() << " has been pardoned by Zaphod Beeblebrox\033[0m" << std::endl;
}

std::ostream& operator<<(std::ostream& output, PresidentialPardonForm& PPF)
{
	output << "\033[33m" << PPF.getName() << " grading sign " << PPF.getSignGrade()
	<< " grade to execute " << PPF.getExecuteGrade() << "\033[0m" << std::endl;

	return (output);
}