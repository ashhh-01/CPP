#ifndef __CHECKING__
#define __CHECKING__
#include "account.h"

class Checking_Account:public Account{
    private:
        static constexpr const char* def_name="Unnamed";
        static constexpr double def_balance=0.0;
        static constexpr double per_check_fee=1.5;
    public:
        Checking_Account(std::string name=def_name,double balance=def_balance);\
        virtual bool withdraw(double)override;  
        virtual bool deposit(double)override;
        virtual void print(std::ostream &os)const override; 

        virtual ~Checking_Account()=default;
};


#endif