/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 13:36:17 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/17 22:03:53 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()	{}

std::string Contact::Get_FName() const
{
    return _First_Name;
}

void    Contact::Set_FName(std::string &fname) 
{
    _First_Name = fname;
}

std::string Contact::Get_LName() const
{
    return _Last_Name;
}

void    Contact::Set_LName(std::string &lname) 
{
    _Last_Name = lname;
}

std::string Contact::Get_Number() const
{
    return _Number;
}

void    Contact::Set_Number(std::string &number) 
{
    _Number = number;
}

std::string Contact::Get_NName() const
{
    return _Nick_Name;
}

void    Contact::Set_NName(std::string &nick_name) 
{
    _Nick_Name = nick_name;
}

std::string Contact::Get_DSecret() const
{
    return _Darkest_secret;
}

void    Contact::Set_DSecret(std::string &dark_secret) 
{
    _Darkest_secret = dark_secret;
}

Contact::~Contact()	{}