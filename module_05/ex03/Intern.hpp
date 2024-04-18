/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/27 17:16:07 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/18 14:33:35 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"


class Intern
{
private:
    /* data */
public:
    Intern();
    ~Intern();
    Intern(const Intern & copy_const);
    Intern &operator=(const Intern &assign_op);

    AForm *makeForm(std::string name, std::string target);
    class UnkownFormExecption : public std::exception
    {
        public:
            const char *what() const throw();
    };
};

#endif