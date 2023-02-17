// //Using '/'
// #include <iostream>
// using namespace std;

// int main(){
//     int amount_change{0};
//     const int dollars_value{100};
//     const int quarters_value{25};
//     const int dimes_value{10};
//     const int nickels_value{5};
//     cout<<"Enter the amount in cents: ";
//     cin>>amount_change;

//     int balance{},dollars{},quarters{},dimes{},nickels{},pennies{};
    
//     dollars=amount_change/dollars_value;
//     balance=amount_change-(dollars*dollars_value);

//     quarters=balance/quarters_value;
//     balance-=quarters*quarters_value;

//     dimes=balance/quarters_value;
//     balance-=dimes_value*dimes;
    
//     nickels=balance/nickels_value;
//     balance-=nickels*nickels_value;

//     pennies=balance;

//     cout<<"Dollars: "<<dollars<<"\nQuarters: "<<quarters<<"\nDimes: "<<dimes<<"\nNickels: "<<nickels<<"\nPennies: "<<pennies;

//     return 0;

// }


//Using '%'

#include <iostream>
using namespace std;

int main(){
    int amount_change{0};
    const int dollar_value{100};
    const int quarter_value{25};
    const int dime_value{10};
    const int nickle_value{5};

    cout<<"Enter the amount in cents: ";
    cin>>amount_change;

    int balance{},dollars{},quarters{},dimes{},nickels{},pennies{};

    dollars=amount_change/dollar_value;
    balance=amount_change%dollar_value;

    quarters=balance/quarter_value;
    balance%=quarter_value;

    dimes=balance/dime_value;
    balance%=dime_value;

    nickels=balance/nickle_value;
    balance%=nickle_value;

    pennies=balance;

    cout<<"Dollars: "<<dollars<<"\nQuarters: "<<quarters<<"\nDimes: "<<dimes<<"\nNickels: "<<nickels<<"\nPennies: "<<pennies;

    return 0;


}


