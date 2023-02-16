#include <iostream>
using namespace std;

int main(){
    int small_rooms {0};
    int large_rooms {0};
    const double price_per_small_room {25.0};
    const double price_per_large_room {35.0};
    const double sales_tax {0.06};
    const int days{30};

    cout<<"Hello, Welcome to Frank's Carpet cleaning  Service"<<endl;
    cout<<"\nHow many small rooms would you like cleaned: ";
    cin>>small_rooms;
    cout<<"\nHow many large rooms would you like cleaned: ";
    cin>>large_rooms;
    cout<<"Price per small room: $"<<price_per_small_room<<endl;
    cout<<"Price per large room: $"<<price_per_large_room<<endl;
    cout<<"cost: $"<<(price_per_small_room*small_rooms)+(price_per_large_room*large_rooms)<<endl; 
    cout<<"Tax: $"<<((price_per_large_room*large_rooms)+(price_per_small_room*small_rooms))*sales_tax<<endl;
    cout<<"========================="<<endl;
    cout<<"Total estimate: $"<<((price_per_large_room*large_rooms)+(price_per_small_room*small_rooms))+(((price_per_small_room*small_rooms)+(price_per_large_room*large_rooms))*sales_tax)<<endl;
    cout<<"This estimate is valid for "<<days<<" days"<<endl;
    cout<<endl;
    return 0;
}