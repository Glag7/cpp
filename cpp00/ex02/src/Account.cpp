/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: glaguyon <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 15:31:25 by glaguyon          #+#    #+#             */
/*   Updated: 2024/10/16 17:48:10 by glaguyon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <ctime>
#include <iostream>
#include <iomanip>
#include "Account.hpp"

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp()
{
	time_t		timestamp = time(0);
	struct tm	date = *localtime(&timestamp);

	std::cout << '[' << date.tm_year + 1900
		<< std::setfill('0') << std::setw(2) << date.tm_mon 
		<< std::setfill('0') << std::setw(2) << date.tm_mday << '_'
		<< std::setfill('0') << std::setw(2) << date.tm_hour
		<< std::setfill('0') << std::setw(2) << date.tm_min
		<< std::setfill('0') << std::setw(2) << date.tm_sec << "] ";
}

Account::Account(int money)
{
	_accountIndex = _nbAccounts++;
	_amount = money;
	_totalAmount += money;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";created" << "\n";
}

Account::Account()
{
	_accountIndex = _nbAccounts++;
	_amount = 0;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:0;created" << "\n";
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";amount:" << _amount << ";closed" << "\n";
}

void	Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts
		<< ";total:" << _totalAmount
		<< ";deposits:" << _totalNbDeposits
		<< ";withdrawals:" << _totalNbWithdrawals << "\n";
}

void	Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << "\n";
}

void	Account::makeDeposit(int money)
{
	int	prev = _amount;

	_amount += money;
	_totalAmount += money;
	++_nbDeposits;
	++_totalNbDeposits;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << prev
		<< ";deposit:" << money
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int money)
{
	int	prev = _amount;

	if (_amount >= money)
	{
		_amount -= money;
		_totalAmount -= money;
		++_nbWithdrawals;
		++_totalNbWithdrawals;
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << prev
			<< ";withdrawal:" << money
			<< ";amount:" << _amount
			<< ";nb_withdrawals:" << _nbDeposits << "\n";
		return true;
	}
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << prev
		<< ";withdrawal:refused\n";
	return false;
}

int	Account::getNbAccounts()
{
	return _nbAccounts;
}

int	Account::getTotalAmount()
{
	return _totalAmount;
}

int	Account::getNbDeposits()
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals()
{
	return _totalNbWithdrawals;
}

int	Account::checkAmount() const
{
	return _amount;
}
