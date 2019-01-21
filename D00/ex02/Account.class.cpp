/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ygarrot <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/01/07 15:50:54 by ygarrot           #+#    #+#             */
/*   Updated: 2019/01/08 18:19:44 by ygarrot          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.class.hpp"
#include <iostream>
#include <string>
#include <iomanip>
#include <stdio.h>
#include <string.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

int		Account::getNbAccounts(void)
{
	return Account::_nbAccounts;
}

int		Account::getTotalAmount(void)
{
	return Account::_totalAmount;
}

int		Account::getNbDeposits(void)
{
	return Account::_totalNbDeposits;
}

int		Account::getNbWithdrawals(void)
{
	return Account::_totalNbWithdrawals;
}

void	display_format(std::string kind, std::string value, char c)
{
	std::cout << kind << ':' << value << c;
}

void	display_timestamp(void)
{
	time_t rawtime;
	struct tm * timeinfo;
	char buffer[80];

	time (&rawtime);
	timeinfo = localtime(&rawtime);
	strftime(buffer,sizeof(buffer),"[%Y%m%d_%H%M%S] ",timeinfo);
	std::string str(buffer);
	std::cout << str;
}

Account::Account(int deposit) : _accountIndex(Account::_nbAccounts),
	_amount(deposit), _nbDeposits(0), _nbWithdrawals(0)  
{
	Account::_nbAccounts++;
	Account::_totalAmount += deposit;
	display_timestamp();
	display_format("index", std::to_string(this->_accountIndex), ';');
	display_format("amount", std::to_string(this->_amount), ';');
	std::cout << "created" << std::endl;
}

Account::~Account(void)
{
	display_timestamp();
	display_format("index", std::to_string(this->_accountIndex), ';');
	display_format("amount", std::to_string(this->_amount), ';');
	std::cout << "closed" << std::endl;
}

void		Account::displayAccountsInfos( void )
{
	display_timestamp();
	display_format("accounts", std::to_string(Account::_nbAccounts), ';');
	display_format("total", std::to_string(Account::_totalAmount), ';');
	display_format("deposits", std::to_string(Account::_totalNbDeposits), ';');
	display_format("withdrawals", std::to_string(Account::_totalNbWithdrawals), '\n');
}

void Account::displayStatus(void) const 
{
	display_timestamp();
	display_format("index", std::to_string(this->_accountIndex), ';');
	display_format("amount", std::to_string(this->_amount), ';');
	display_format("deposits", std::to_string(this->_nbDeposits), ';');
	display_format("withdrawals", std::to_string(this->_nbWithdrawals), '\n');
}

void		Account::makeDeposit(int deposit)
{
	display_timestamp();
	display_format("index", std::to_string(this->_accountIndex), ';');
	display_format("p_amount", std::to_string(this->_amount), ';');
	if (deposit < 0 || this->_amount + deposit < 0)
	{
		display_format("deposit", "refused", '\n');
		return ;
	}
	display_format("deposit", std::to_string(deposit), ';');
	++this->_nbDeposits;
	this->_amount += deposit;
	display_format("amount", std::to_string(this->_amount), ';');
	display_format("nb_deposits", std::to_string(this->_nbDeposits), '\n');
	++Account::_totalNbDeposits;
	Account::_totalAmount += deposit;
}

bool		Account::makeWithdrawal(int deposit)
{
	display_timestamp();
	display_format("index", std::to_string(this->_accountIndex), ';');
	display_format("p_amount", std::to_string(this->_amount), ';');
	if (this->_amount - deposit < 0)
	{
		display_format("withdrawal", "refused", '\n');
		return (0);
	}
	display_format("withdrawal", std::to_string(deposit), ';');
	++this->_nbWithdrawals;
	this->_amount -= deposit;
	display_format("amount", std::to_string(this->_amount), ';');
	display_format("nb_withdrawals", std::to_string(this->_nbWithdrawals), '\n');
	++Account::_totalNbWithdrawals;
	Account::_totalAmount -= deposit;
	return (1);
}

