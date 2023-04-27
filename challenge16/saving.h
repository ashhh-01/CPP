#ifndef __SAVING__
#define __SAVING__
#include "account.h"

class Saving_Account:public Account{
    private:
        static constexpr const char* def_name="Unnamed";
        static constexpr double def_balance=0.0;
        static constexpr double def_int_rate=0.0;
    protected:
        double int_rate;
    public:
        Saving_Account(std::string name=def_name,double balance=def_balance,double int_rate=def_int_rate);
        virtual bool deposit(double)override;
        virtual bool withdraw(double)override;
        virtual void print(std::ostream &os)const override; 

        virtual ~Saving_Account()=default;
};
#endif