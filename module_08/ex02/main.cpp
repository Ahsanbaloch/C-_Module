/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42wolfsburg.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/30 15:59:16 by ahsalam           #+#    #+#             */
/*   Updated: 2024/04/25 16:41:23 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

int main()
{
	/* MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack); */

	MutantStack<int> mstack;
	// Test 1: Check if the stack is empty
	if (mstack.empty()) {
	    std::cout << "Stack is empty." << std::endl;
	} else {
	    std::cout << "Stack is not empty." << std::endl;
	}

	// Test 2: Push multiple elements and print the stack
	for (int i = 0; i < 10; ++i)
	    mstack.push(i);

	for (MutantStack<int>::iterator it = mstack.begin(); it != mstack.end(); ++it)
	    std::cout << *it << " ";
	std::cout << std::endl;
	return 0;

}