#ifndef __TRUSTACCOUNT__
#define __TRUSTACCOUNT__
#include "savingsAccout.h"

class Trust_Account:public Saving_Account{
    friend std::ostream &operator<<(std::ostream &os, const Trust_Account &account);
    private:
        static constexpr const char *def_name="Unnamed";
        static constexpr double def_balance=0.0;
        static constexpr double def_int_rate=0.0;
        static constexpr double bonus_amount=50.0;
        static constexpr double bonus_threshold=5000.0;
        static constexpr int max_withdraws=3;
        static constexpr double max_withdraw_percent=0.2;
    protected:
        int num_withdraws;
    public:
        Trust_Account(std::string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
        bool deposit(double amount);
        bool withdraw(double amount);
};

#endif