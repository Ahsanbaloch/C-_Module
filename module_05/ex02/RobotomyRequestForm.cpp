/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 16:01:08 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/18 14:29:46 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) 
: AForm("Robotomy Form", 72, 45), _target(target) {}

RobotomyRequestForm::~RobotomyRequestForm() {}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm & copy_const) : AForm(copy_const)
{
    _target = copy_const._target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm & assign_op)
{
    if (this != &assign_op)
        _target = assign_op._target;
    return (*this);
}

std::string RobotomyRequestForm::getTarget() const
{
    return (_target);
}

void RobotomyRequestForm::setTarget(std::string target)
{
    _target = target;
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
    std::srand(std::time(0));
    if (executor.getGrade() > getExecuteGrade())
        throw (Bureaucrat::GradeTooLowException());
    else if (getStatus() == false)
        throw (FormNotSignedException());
    else if (std::rand() % 2) // change random number generator
        std::cout << "\033[32mDRRRRRRRRR....... " << getTarget() << " has been robotomized\033[0m" << std::endl;
    else
        std::cout <<"\033[31mhas been failed...\033[0m" << std::endl;
}

std::ostream& operator<<(std::ostream& output, RobotomyRequestForm& PPF)
{
	output << "\033[33m" << PPF.getName() << " grading sign " << PPF.getSignGrade()
	<< " grade to execute " << PPF.getExecuteGrade() << "\033[0m" << std::endl;

    return (output);
}