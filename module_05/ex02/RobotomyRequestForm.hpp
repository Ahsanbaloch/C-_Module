/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/25 15:06:54 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/18 14:29:36 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <ctime>
#include <cstdlib>

class RobotomyRequestForm : public AForm
{
private:
    std::string _target;
public:
    RobotomyRequestForm(std::string target);
    ~RobotomyRequestForm();
    RobotomyRequestForm(const RobotomyRequestForm & copy_const);
    RobotomyRequestForm &operator=(const RobotomyRequestForm & assign_op);
    
    std::string getTarget() const;
    void setTarget(std::string target);
    void execute(Bureaucrat const & executor) const;
};

std::ostream& operator<<(std::ostream &output,  RobotomyRequestForm& PPF);

#endif