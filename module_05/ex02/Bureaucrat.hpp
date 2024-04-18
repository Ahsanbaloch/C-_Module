/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:29:15 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/18 11:29:21 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include "AForm.hpp"

class AForm;

class Bureaucrat
{
private:
    std::string const _name;
    int _grade; 
public:
    Bureaucrat(const std::string name, int grade);
    ~Bureaucrat();

    Bureaucrat(const Bureaucrat& copy_const);
    Bureaucrat &operator=(const Bureaucrat &assign_op);

    std::string getName() const;
    int getGrade() const;
    void setGrade(int grade);
    void increaseGrade();
    void decreaseGrade();
    void signForm(AForm &form);
    void executeForm(AForm const &form);

    class GradeTooHighException : public std::exception
    {
        public:
            const char *what(void) const throw();
    };
    class GradeTooLowException : public std::exception
    {
        public:
            const char *what(void) const throw();

    };
};

std::ostream& operator<<(std::ostream &ostream, const Bureaucrat &ref);

#endif