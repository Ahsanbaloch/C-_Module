/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:08:01 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/17 18:29:02 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
private:
    std::string _target;
public:
    ShrubberyCreationForm(std::string target);
    ~ShrubberyCreationForm();

    ShrubberyCreationForm(const ShrubberyCreationForm & copy_const);
    ShrubberyCreationForm &operator=(const ShrubberyCreationForm & assign_op);

    std::string getTarget() const;
    void setTarget(std::string target);

    void execute(Bureaucrat const & executor) const;
    void makeTree() const;
};

std::ostream& operator<<(std::ostream &output,  ShrubberyCreationForm& PPF);


#endif