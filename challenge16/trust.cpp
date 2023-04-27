#include "trust.h"

Trust_Account::Trust_Account(std::string name,double balance,double int_rate)
:Saving_Account{name,balance,int_rate},num_withdraws{0}{
};

bool Trust_Account::deposit(double amount){
    if(amount>=bonus_threshold)
        amount+=bonus_amount;
    return Saving_Account::deposit(amount);
};

bool Trust_Account::withdraw(double amount){
    if(num_withdraws>=max_withdraws||amount>balance*max_withdraw_percent)
        return false;
    else{
        ++num_withdraws;
        return  Saving_Account::withdraw(amount);
    };
};
void Trust_Account::print(std::ostream &os)const{
    os.precision(2);
    os<<std::fixed;
        os<<"[Trust_Account: "<<name<<":"<<balance<<":"<<int_rate<<":"<<num_withdraws<<"]";

};