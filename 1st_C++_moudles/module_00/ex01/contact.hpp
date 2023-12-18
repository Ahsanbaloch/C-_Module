/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 00:19:37 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/18 13:37:52 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <iomanip>
#include <string>

class Contact 
{
	public :
		Contact();
		~Contact();

		std::string Get_FName() const;
		std::string Get_LName() const;
		std::string Get_Number() const;
		std::string Get_NName() const;
		std::string Get_DSecret() const;

		void Set_FName(std::string &fname);
		void Set_LName(std::string &lname);
		void Set_Number(std::string &number);
		void Set_NName(std::string &nick_name);
		void Set_DSecret(std::string &dark_secret);

	private :
		std::string	_First_Name;
		std::string	_Last_Name;
		std::string	_Number;
		std::string	_Nick_Name;
		std::string _Darkest_secret;
};


#endif