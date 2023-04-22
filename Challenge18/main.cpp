#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;
int main() {
    std::unique_ptr<Account> moes_account;
    std::unique_ptr<Account> larry_account;
    try{
    moes_account=std::make_unique<Savings_Account>("Moes",-10000);
    std::cout<<*moes_account<<std::endl;
    }
    catch(const InsufficientFundsException &ex){
                std::cerr << ex.what() << std::endl;
    }
    catch(const IllegalBalanceException &ex){
        std::cerr<<ex.what()<<std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
};

