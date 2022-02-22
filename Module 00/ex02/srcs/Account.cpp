
#include "../includes/Account.h"

static int Account::getNbAccounts(void)
{
	return (_nbAccounts);
}

static int Account::getTotalAmount(void)
{
	return (_totalAmount);
}

static int Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}

static int Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}

static void Account::displayAccountsInfos(void)
{
}

Account::Account(int initial_deposit)
{

}

Account::~Account(void)
{
}


void	Account::makeDeposit( int deposit )
{
}

bool	Account::makeWithdrawal( int withdrawal )
{
}

int		Account::checkAmount( void ) const
{
}

void	Account::displayStatus( void ) const
{
}

static void	_displayTimestamp( void );
{

}

