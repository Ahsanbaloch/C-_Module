/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 14:04:24 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/23 19:39:08 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	std::string const _name;
	bool _signed;
	int const _grade_sign;
	int const _grade_execute;
public:
	Form(std::string const name, int const grade_sign, int const grade_execute);
	~Form();
	Form(const Form& copy_const);
	Form &operator=(const Form& assign_op);
	
	std::string getName() const;
	bool getStatus() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void setStatus(bool status);
	void beSigned(Bureaucrat &bureacrat);

	class GradeTooHighException : public std::exception
	{
		public:
		const char *what() const throw();
	};
	class GradeTooLowException : public std::exception
	{
		public:
		const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &output, const Form &form);


#endif