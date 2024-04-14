/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 17:49:05 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/26 21:43:20 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) 
: AForm("Shrubbery Form", 145, 137), _target(target){}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm & copy_const) : AForm(copy_const)
{
    _target = copy_const._target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm & assign_op)
{
    if (this != &assign_op)
        _target = assign_op._target;
    return (*this);
}

std::string ShrubberyCreationForm::getTarget() const
{
    return (_target);
}

void ShrubberyCreationForm::setTarget(std::string target)
{
    _target = target;
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (executor.getGrade() > getExecuteGrade())
		throw Bureaucrat::GradeTooLowException();
	else if (getStatus() == false)
		throw AForm::FormNotSignedException();
	makeTree();
}

void ShrubberyCreationForm::makeTree() const
{
	std::string filename = getTarget().append("Shrubbery");
	std::ofstream file_write(filename.c_str());

		file_write << "         ^\n"
           << "        ^^^\n"
           << "       ^^^^^\n"
           << "      ^^^^^^^\n"
           << "     ^^^^^^^^^\n"
           << "    ^^^^^^^^^^^\n"
           << "   ^^^^^^^^^^^^^\n"
           << "  ^^^^^^^^^^^^^^^\n"
           << " ^^^^^^^^^^^^^^^^^\n"
           << "^^^^^^^^^^^^^^^^^^^\n"
           << "         ||\n"
           << "         ||\n"
		   << "         ||\n"
           << "         ||\n";
		file_write.close();
    std::cout << "\033[32mFile is created in Shrubbery Form.... \033[0m" << std::endl;
}

std::ostream& operator<<(std::ostream& output, ShrubberyCreationForm& PPF)
{
	output << "\033[33m" << PPF.getName() << " grading sign " << PPF.getSignGrade()
	<< " grade to execute " << PPF.getExecuteGrade() << "\033[0m" << std::endl;

    return (output);
}