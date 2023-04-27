#include"account_utils.h"
using namespace std;
void display(const std::vector <Account>&accounts){
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}

void deposit(std::vector <Account>&account,double amount){
    cout<<"____________Deposit____________"<<endl;
    for(auto &acc:account){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" To"<<acc<<std::endl;
        }else   
            cout<<"Failed Deposit of "<<amount<<" to"<<acc<<endl;
    }
}
void withdraw(std::vector <Account>&account,double amount){
    for(auto &acc:account){
        if(acc.withdraw(amount)){
            cout<<"Withdrawn "<<amount<<" from"<<acc<<endl;
        }else{
            cout<<"Failed Withdraw of "<<amount<<" from"<<acc<<endl;
        };
    };
}

// Savings
void display(const std::vector <Saving_Account>&accounts){
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}

void deposit(std::vector <Saving_Account>&account,double amount){
    cout<<"____________Deposit____________"<<endl;

    for(auto &acc:account){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" "<<acc<<std::endl;
        }else   
            cout<<"Failed Deposit of "<<amount<<" to"<<acc<<endl;
    }
}
void withdraw(std::vector <Saving_Account>&account,double amount){
    for(auto &acc:account){
        if(acc.withdraw(amount)){
            cout<<"Withdrawn"<<amount<<" from"<<acc<<endl;
        }else{
            cout<<"Failed Withdraw of"<<amount<<" from"<<acc<<endl;
        };
    };
}

//Checking Account
void display(const std::vector <Checking_Account>&accounts){
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}

void deposit(std::vector <Checking_Account>&account,double amount){
    cout<<"____________Deposit____________"<<endl;

    for(auto &acc:account){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<" "<<acc<<std::endl;
        }else   
            cout<<"Failed Deposit of "<<amount<<" to"<<acc<<endl;
    }
}
void withdraw(std::vector <Checking_Account>&account,double amount){
    for(auto &acc:account){
        if(acc.withdraw(amount)){
            cout<<"Withdrawn"<<amount<<" from"<<acc<<endl;
        }else{
            cout<<"Failed Withdraw of"<<amount<<" from"<<acc<<endl;
        };
    };
}

//Trust account
void display(const std::vector <Trust_Account>&accounts){
    for(const auto &acc:accounts){
        std::cout<<acc<<std::endl;
    }
}

void deposit(std::vector <Trust_Account>&account,double amount){
    cout<<"____________Deposit____________"<<endl;

    for(auto &acc:account){
        if(acc.deposit(amount)){
            std::cout<<"Deposited: "<<amount<<"   "<<acc<<std::endl;
        }else   
            cout<<"Failed Deposit of "<<amount<<" to "<<acc<<endl;
    }
}
void withdraw(std::vector <Trust_Account>&account,double amount){
    for(auto &acc:account){
        if(acc.withdraw(amount)){
            cout<<"Withdrawn"<<amount<<" from"<<acc<<endl;
        }else{
            cout<<"Failed Withdraw of"<<amount<<" from"<<acc<<endl;
        };
    };
}

