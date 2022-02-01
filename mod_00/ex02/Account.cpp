/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lugonzal <lugonzal@student.42urduli>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/01 19:23:32 by lugonzal          #+#    #+#             */
/*   Updated: 2022/02/01 21:46:18 by lugonzal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>

int Account::_nbAccounts;
int Account::_totalAmount;
int Account::_totalNbDeposits;
int Account::_totalNbWithdrawals;

Account::Account( int initial_deposit )
{
	Account::_accountIndex = _nbAccounts;
	Account::_nbDeposits = 0;
	Account::_nbWithdrawals = 0;
	Account::_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	std::cout << "index:" << Account::_nbAccounts;
	std::cout << ";amount:" << Account::_amount;
	std::cout << ";created" << std::endl;
	Account::_nbAccounts += 1;
}

Account::~Account( void )
{
	std::cout << " ";
}

int	Account::checkAmount( void ) const
{
	return (Account::_amount);
}

void	Account::displayAccountsInfos( void )
{
	std::cout << "accounts:" << Account::_nbAccounts;
	std::cout << ";total:" << Account::_totalAmount;
	std::cout << ";deposits:" << Account::_totalNbDeposits;
	std::cout << ";withdrawals:" << Account::_totalNbWithdrawals;
}
