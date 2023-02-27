#include<iostream>
#include<string>
#include<vector>

using namespace std;

void display_menu();
char selection();
void printlist(const vector <int> &n);
void display_list(const vector <int> &n);
void add_number(vector<int> &n);
void find_smallest(vector <int> &n);
void find_mean(vector <int> &n);
void find_largest(vector <int> &n);

int main(){
    char selected{};
    vector <int> number{};
    do{
        display_menu();
        selected=selection();
        switch(selected){
            case 'P':
                printlist(number);
                break;
            case 'A':
                add_number(number);
                break;
            case 'S':
                find_smallest(number);
                break;
            case 'M':
                find_mean(number);
                break;
            case 'L':
                find_largest(number);
                break;
            default:
                break;
        }
    }
    while(selected!='Q');

}




void display_menu(){
        cout<<"\nP - Print numbers";
        cout<<"\nA - Add a number";
        cout<<"\nM - Display mean of the numbers";
        cout<<"\nS - Display the smallest number";
        cout<<"\nL - Display the largest number";
        cout<<"\nQ - Quit";
        cout<<"\nEnter your choice: ";
}
char selection(){
    char select{};
    cin>>select;
    return toupper(select);
}
void printlist(const vector <int> &n){
    if(n.size()==0){
        cout<<"[] - empty list";
    }else
        display_list(n);
}

void display_list(const vector<int> &n){
    cout<<"[";
    for(auto i:n){
        cout<<i<<" ";
    }
    cout<<"]";
}

void add_number(vector<int> &n){
    int number{0};
    cout<<"Enter the number: ";
    cin>>number;
    n.push_back(number);
}
void find_smallest(vector <int> &n){
    int small=n.at(0);
    if(n.size()==0){
        cout<<"Empty list"<<endl;
    }else{
    for(size_t i{0};i<n.size();++i){
        if(small>n.at(i)){
            small=n.at(i);
        }
    }
    cout<<"the smallest is: "<<small;
}}

void find_mean(vector <int> &n){
    double total{0};
    if(n.size()==0){
        cout<<"Empty list"<<endl;
    }else{
    for(int i:n){
        total+=i;
    }
    cout<<"The mean is "<<total/n.size()<<endl;
}}

void find_largest(vector<int> &n){
        if(n.size()==0){
            cout<<"Empty list"<<endl;
        }else{
            int large=0;
            for(int i:n){
                if(large<i){
                    large=i;
                }
            }
            cout<<"The largest is: "<<large<<endl;
        }
}