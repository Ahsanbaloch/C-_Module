/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 12:30:37 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/25 12:30:37 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
protected:
	std::string const _name;
	bool _signed;
	int const _grade_sign;
	int const _grade_execute;
public:
	AForm(std::string const name, int const grade_sign, int const grade_execute);
	virtual ~AForm();
	AForm(const AForm& copy_const);
	AForm &operator=(const AForm& assign_op);
	
	std::string getName() const;
	bool getStatus() const;
	int getSignGrade() const;
	int getExecuteGrade() const;

	void setStatus(bool status);
	void beSigned(Bureaucrat &bureacrat);

	virtual void execute(Bureaucrat const & executor) const;

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
	class FormNotSignedException : public std::exception
	{
	public:
		virtual const char *what() const throw();
	};
};

std::ostream& operator<<(std::ostream &output, const AForm &Aform);


#endif