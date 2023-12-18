/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 17:46:17 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/18 13:37:24 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
# define PHONEBOOK_H
#include "contact.hpp"

class PhoneBook
{
private:
	Contact list[8];

public:
	PhoneBook();
	~PhoneBook();

	void	Set_data(std::string &fist_name, std::string &last_name, std::string &nick_name,
					std::string &numebr, std::string &darkest_secret);
	void	show_data() const;
	Contact get_data(int index) const;
	std::string truncate(std::string str) const;
};

#endif