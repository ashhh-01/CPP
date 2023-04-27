#ifndef __ACCOUNT_UTILS
#define __ACCOUNT_UTILS
#include "savingsAccout.h"
#include "account.h"
#include "trustaccount.h"
#include "checkingaccount.h"
#include<vector>

//Accounts
void display(const std::vector <Account>&accounts);
void deposit(std::vector <Account>&account,double amount);
void withdraw(std::vector <Account>&account,double amount);

//Trust Account
void display(const std::vector <Trust_Account>&accounts);
void deposit(std::vector <Trust_Account>&account,double amount);
void withdraw(std::vector <Trust_Account>&account,double amount);

//Checking Account
void display(const std::vector <Checking_Account>&accounts);
void deposit(std::vector <Checking_Account>&account,double amount);
void withdraw(std::vector <Checking_Account>&account,double amount);


//Saving account
void display(const std::vector <Saving_Account>&accounts);
void deposit(std::vector <Saving_Account>&account,double amount);
void withdraw(std::vector <Saving_Account>&account,double amount);

#endif