/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahsalam <ahsalam@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 17:40:44 by ahsalam           #+#    #+#             */
/*   Updated: 2023/12/24 17:33:02 by ahsalam          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h>
#include <iostream>

int	Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

void Account::_displayTimestamp()
{
	time_t current_time = time(NULL);
	struct tm *local_time = localtime(&current_time);
	std::cout << '[' << local_time->tm_year + 1900 << local_time->tm_mon << local_time->tm_mday
	<< "_" << local_time->tm_hour << local_time->tm_min << local_time->tm_sec << "] ";
}

Account::Account() {}

int Account::getNbAccounts()
{
	return (_nbAccounts);
}

int Account::getTotalAmount()
{
	return (_totalAmount);
}

int Account::getNbDeposits ()
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals()
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts <<  ";" ;
	std::cout << "total:" << _totalAmount << ";" ;
	std::cout << "deposit:" << _totalNbDeposits << ";" ;
	std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl; 
}

Account::Account(int initial_deposit) : _amount(initial_deposit)
{
	_accountIndex = _nbAccounts;
	_nbAccounts++;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";created" << std::endl;
}

Account::~Account( void )
{
	_nbAccounts--;
	_totalAmount -= this->_amount;
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:" << _amount << ";";
	_amount += deposit;
	_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++; 
	std::cout << "deposit:" << deposit << ";";
	std::cout << "amount:" << _amount + deposit << ";";
	std::cout << "nb_deposits:" << ++_nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
	if (_amount - withdrawal > 0)
	{
		std::cout << "withdrawal:" << withdrawal << ";";
		std::cout << "amount:" << _amount - withdrawal << ";";
		std::cout << "nb:withdrawals:" << ++_nbWithdrawals << std::endl;
		_amount -= withdrawal;
		_totalAmount -= withdrawal;
		_totalNbWithdrawals++;
		return (true);
	}
	else
	{
		std::cout << "withdrawal:" << "refused" << std::endl;
		return (false);
	}
}

int Account::checkAmount() const
{
	return (_amount);
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "deposits:" << _nbDeposits << ";";
	std::cout << "withdrawals:" << _nbWithdrawals << std::endl;
}