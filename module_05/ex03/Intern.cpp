/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:23:23 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/27 20:09:16 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(const Intern & copy_const)
{
    *this = copy_const;
}

Intern &Intern::operator=(const Intern & assign_op)
{
	if (this != &assign_op) {}
    return (*this);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string Intern_Form[3] = {"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm"};
	for (int i = 0; i < 3; i++)
		if (name == Intern_Form[i])
		{
			switch (i)
			{
			case 0:
				std::cout << "\033[32mIntern creates " << name << "\033[0m" << std::endl;
				return new ShrubberyCreationForm(target);
			case 1:
				std::cout << "\033[32mIntern creates " << name << "\033[0m" << std::endl;
				return new RobotomyRequestForm(target);
			case 2:
				std::cout << "\033[32mIntern creates " << name << "\033[0m" <<std::endl;
				return new PresidentialPardonForm(target);
			default:
				break;
			}
		}
	throw Intern::UnkownFormExecption();
	return (NULL);
}

const char *Intern::UnkownFormExecption::what() const throw()
{
	return "\033[31mForm is Unkown...\033[0m\n"; 
}