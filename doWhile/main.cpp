#include<iostream>
using namespace std;

int main(){
    char selection{};
    do{
        cout<<"\n=================="<<endl;
        cout<<"1. This"<<endl;
        cout<<"2. That"<<endl;
        cout<<"3. Or"<<endl;
        cout<<"4. Something"<<endl;
        cout<<"\nEnter the Selection"<<endl;
        cin>>selection;
        switch(selection){
            case '1':
                cout<<"You chose this"<<endl;
                break;
            case '2':
                cout<<"You chose that"<<endl;
                break;
            case '3':
                cout<<"You chose Or"<<endl;
                break;
            case '4':
                cout<<"You chose something"<<endl;
                break;
            default:
                cout<<"Please choose the correct option"<<endl;
        }
    }while(selection!='q'&&selection!='Q');
}