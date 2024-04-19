/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/24 15:56:35 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/19 16:29:30 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate()
{
    switch (rand() % 3)
    {
        case 0: 
            return new A;
        case 1:
            return new B;
        case 2:
            return new C;
        default:
            return NULL;
    }
    return NULL;
}

void identify(Base* ptr)
{
    if (dynamic_cast<A*>(ptr))
        std::cout << "Pointer type A" << std::endl;
    else if (dynamic_cast<B*>(ptr))
        std::cout << "Pointer type B" << std::endl;
    else if (dynamic_cast<C*>(ptr))
        std::cout<< "Pointer type C" << std::endl;
	else
		std::cout << "Unkown Pointer..." << std::endl;
}

void identify(Base& ref)
{
    try
    {
		A& a = dynamic_cast<A&>(ref); 
		(void)a;
    	std::cout << "Ref type A" << std::endl;
    }
    catch(std::exception&) {}
    try
    {
		B &b  = dynamic_cast<B&>(ref); 
		(void)b;
		std::cout << "Ref type B" << std::endl;
    }
    catch(std::exception&) {}
    try
    {
		C &c = dynamic_cast<C&>(ref); 
		(void)c;
		std::cout << "Ref type C" << std::endl;
    }
    catch(std::exception&) {}
}

int main()
{
    srand(time(0));
    Base *ptr = generate();
    identify(ptr);
    identify(*ptr);
    delete (ptr);
    return (0);

}