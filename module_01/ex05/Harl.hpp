/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/26 00:37:14 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/26 00:38:53 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include <iostream>

class Harl
{
private:
    void _debug(void);
    void _info(void);
    void _warning(void);
    void _error(void);
public:
    Harl();
    ~Harl();
    void complain(std::string level);
};



#endif