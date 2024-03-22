/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 14:45:08 by ahsalam           #+#    #+#             */
/*   Updated: 2024/01/26 21:39:37 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
private:
    std::string _target;
public:
    PresidentialPardonForm(std::string target);
    ~PresidentialPardonForm();
    PresidentialPardonForm(const PresidentialPardonForm & copy_const);
    PresidentialPardonForm &operator=(const PresidentialPardonForm & assign_op);

    std::string getTarget() const;
    void setTarget(std::string target);
    void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream &output, PresidentialPardonForm& PPF);

#endif