/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:38:46 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/14 19:41:45 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    try
    {
        Bureaucrat bureaucrat1("Bureaucrat1", 1);
        Bureaucrat bureaucrat2("Bureaucrat2", 50);
        Bureaucrat bureaucrat3("Bureaucrat3", 150);

        ShrubberyCreationForm shrubberyForm("home");
        RobotomyRequestForm robotomyForm("target1");
        PresidentialPardonForm pardonForm("target2");

        // Bureaucrat1 signs and executes all forms
        bureaucrat1.signForm(shrubberyForm);
        bureaucrat1.executeForm(shrubberyForm);

        bureaucrat1.signForm(robotomyForm);
        bureaucrat1.executeForm(robotomyForm);

        bureaucrat1.signForm(pardonForm);
        bureaucrat1.executeForm(pardonForm);

        // Bureaucrat2 tries to sign and execute all forms
        bureaucrat2.signForm(shrubberyForm);
        bureaucrat2.executeForm(shrubberyForm);

        bureaucrat2.signForm(robotomyForm);
        bureaucrat2.executeForm(robotomyForm);

        bureaucrat2.signForm(pardonForm);
        bureaucrat2.executeForm(pardonForm);

        // Bureaucrat3 tries to sign and execute all forms
        bureaucrat3.signForm(shrubberyForm);
        bureaucrat3.executeForm(shrubberyForm);

        bureaucrat3.signForm(robotomyForm);
        bureaucrat3.executeForm(robotomyForm);

        bureaucrat3.signForm(pardonForm);
        bureaucrat3.executeForm(pardonForm);
    }
    catch (std::exception &e)
    {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}