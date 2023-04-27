#ifndef __ACCOUNT_UTILS
#define __ACCOUNT_UTILS
#include "account.h"

#include<vector>

//Accounts
void display(const std::vector <Account*>&accounts);
void deposit(std::vector <Account*>&account,double amount);
void withdraw(std::vector <Account*>&account,double amount);

#endif