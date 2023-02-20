#include <iostream>
#include <vector>
using namespace std;
int main(){
    int items{};
    cout<<"Enter the Number of items: ";
    cin>>items;
    vector <int> data{};
    for(int i{0};i<=items;i++){
        int data_item{};
        cout<<"Enter the data ";
        cin>>data_item;
        data.push_back(data_item);
    }
    cout<<"\nDisplaying Histogram"<<endl;
    for(auto val:data){
        for(int i{1};i<=val;i++){
            if(i%5==0)
                cout<<"*";
        else
            cout<<"-";
        }
        cout<<endl;
    }
}