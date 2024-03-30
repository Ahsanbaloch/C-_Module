/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:37:36 by ahsalam           #+#    #+#             */
/*   Updated: 2024/03/30 16:06:31 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>
#include <iostream> 


template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container>
{
	public:
	 	MutantStack(){};
        ~MutantStack(){}
        MutantStack(const MutantStack &other) : std::stack<T>(other){
            *this = other;
        }
        MutantStack& operator=(const MutantStack& other)
		{
            if (this == &other) {return (*this);}
            this->std::stack<T>::operator=(other);
            return (*this);
        }

		typedef typename std::stack<T, Container>::container_type::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};


#endif