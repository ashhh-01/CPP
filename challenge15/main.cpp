#include<iostream>
#include "savingsAccout.h"
#include "account_utils.h"
#include "checkingaccount.h"
#include "trustaccount.h"
#include<vector>

using namespace std;

int main(){
    cout.precision(2);
    cout<<fixed;
//Account
    vector<Account>accounts;
    accounts.push_back(Account{});
    accounts.push_back(Account{"A"});
    accounts.push_back(Account{"B",3000});
    accounts.push_back(Account{"C",5000});

    display(accounts);
    deposit(accounts,4000);
    withdraw(accounts,2000);

//Savings
    vector<Saving_Account>sav_accounts;
    sav_accounts.push_back(Saving_Account{});
    sav_accounts.push_back(Saving_Account{"D"});
    sav_accounts.push_back(Saving_Account{"E",3000});
    sav_accounts.push_back(Saving_Account{"F",5000});

    display(sav_accounts);
    deposit(sav_accounts,4000);
    withdraw(sav_accounts,12000);

//Checking Account
    vector<Checking_Account>check_accounts;
    check_accounts.push_back(Checking_Account{});
    check_accounts.push_back(Checking_Account{"G"});
    check_accounts.push_back(Checking_Account{"H",3000});
    check_accounts.push_back(Checking_Account{"I",5000});

    display(check_accounts);
    deposit(check_accounts,4000);
    withdraw(check_accounts,12000);

//Trust Account
    vector<Trust_Account>Trust_accounts;
    Trust_accounts.push_back(Trust_Account{});
    Trust_accounts.push_back(Trust_Account{"K"});
    Trust_accounts.push_back(Trust_Account{"L",3000});
    Trust_accounts.push_back(Trust_Account{"M",5000});

    display(Trust_accounts);
    deposit(Trust_accounts,4000);
    withdraw(Trust_accounts,12000);    

    return 0;
}