#include <iostream>
#include <time.h>
#include "../includes/Account.hpp"

// We need to define static variables at least once for the code to compile
// (this really should be done in tests.cpp)
int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;



int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:"<< getNbAccounts() //total, deposits,withdrawals
		<< ";total:" << getTotalAmount()
		<< ";deposits:" << getNbDeposits()
		<< ";withdrawals:" << getNbWithdrawals() << std::endl;
}

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	_totalAmount = _totalAmount + initial_deposit;
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	this->_accountIndex = _nbAccounts++; // This can lead to duplicated indexes (when an account is deleted)
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";created" << std::endl;

}

Account::~Account(void)
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";closed" << std::endl;
	_nbAccounts--;
}


void	Account::makeDeposit( int deposit )
{
	int p_amount = _amount;
	_amount = _amount + deposit;
	_nbDeposits++;
	// Not thread safe from now on
	_totalNbDeposits++;
	_totalAmount = _totalAmount + deposit;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";deposit:" << deposit
		<< ";amount:" << _amount
		<< ";nb_deposits:" << _nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int p_amount = _amount;

	if (withdrawal > _amount)
	{
		_displayTimestamp();
		std::cout << "index:" << _accountIndex
			<< ";p_amount:" << p_amount
			<< ";withdrawal:refused" << std::endl;
		return (false);
	}
	_amount = _amount - withdrawal;
	_nbWithdrawals++;
// Not thread safe from now on!
	_totalNbWithdrawals++;
	_totalAmount = _totalAmount - withdrawal;
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";p_amount:" << p_amount
		<< ";withdrawal:" << withdrawal
		<< ";amount:" << _amount
		<< ";nb_withdrawals:" << _nbWithdrawals << std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	return (_amount);
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex
		<< ";amount:" << _amount
		<< ";deposits:" << _nbDeposits
		<< ";withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::_displayTimestamp( void )
{
	struct tm t_struct;
	char buf[16];
	std::time_t now = std::time(0);

	t_struct = *std::localtime(&now);
	std::strftime(buf, sizeof(buf), "%Y%m%d_%H%M%S", &t_struct);
	std::cout << "[" << buf << "] ";
}

