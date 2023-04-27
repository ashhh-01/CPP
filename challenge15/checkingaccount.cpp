#include "checkingaccount.h"

Checking_Account::Checking_Account(std::string name,double balance)
    :Account{name,balance}{

};
bool Checking_Account::withdraw(double amount){
    amount+=def_check_fee;
    return Account::withdraw(amount);
};

std::ostream &operator<<(std::ostream &os,const Checking_Account &account){
    os<<"[Checking account"<<account.name<<" Balance: "<<account.balance<<"]";
    return os;
}