#include <iostream>
#include <vector>
using namespace std;

int main(){
    char selection{};
    vector <int> number{};

    do{
        cout<<"\nP - Print numbers";
        cout<<"\nA - Add a number";
        cout<<"\nM - Display mean of the numbers";
        cout<<"\nS - Display the smallest number";
        cout<<"\nL - Display the largest number";
        cout<<"\nQ - Quit";
        cout<<"\nEnter your choice: ";
        cin>>selection;

        switch (selection)
        {
        case 'p':
        case 'P':
        {
            if(number.size()==0){
                cout<<"[]- the list is empty"<<endl;
                break;
            }else{
                cout<<"[";
                for(auto i: number)
                    cout<<i<<" ";
                cout<<"]"<<endl;
            break;
            }
        };
        case 'A':
        case 'a':
        {   
            int digit{};
            cout<<"Enter an integer to add to the list: ";
            cin>>digit;
            number.push_back(digit);
            cout<<digit<<" is added.";
            break;

        };
        case 'M':
        case 'm':{
            if(number.size()==0){
                cout<<"No data"<<endl;
            }
            else{
            double total{};
            for(auto i:number){
                total+=i;
            }
            cout<<"The mean is: "<<(total/number.size())<<endl;
            break;
            }

        };
        case 'S':
        case 's':{
            if(number.size()==0){
                cout<<"No data"<<endl;
            }
            else{    
                int small=number.at(0);
                for(auto i:number){
                    if(i<small)
                    small=i;
            }
            cout<<"The smallest number is : "<<small<<endl;
            }break;
        }
        case 'L':
        case 'l':{
                int large=number.at(0);
                for(auto i:number){
                    if(i>large){
                        large=i;
                    }
                }
                cout<<"The largest number is: "<<large<<endl;
                break;
        }
    }
    }
    while(selection!='Q' && selection!='q'); 
        cout<<"Goodbye.....";
}