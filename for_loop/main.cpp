#include <iostream>
#include <vector>

using namespace std;

int main(){
    for(int i {0};i<5;i++){
        cout<<i<<endl;
    }

    for(int i{10};i>0;--i){
        cout<<i<<endl;
    }

    for(int i{1},j{5};i<5;i++,j++){
        cout<<i<<"+"<<j<<"="<<(i+j) <<endl;
    }


    vector <int> num{1,2,3,4};
    for(unsigned i{0};i<num.size();i++)
        cout<<num[i]<<endl;

    int numb[]{1,2,3,5,56,7};
    for (auto number:numb)
        cout<<number<<endl;

    vector <int> temps{22,33,45,63,21};
    double sum_temp{0};
    double avg_temp{0};
    for(auto temp:temps)
        sum_temp+=temp;
    avg_temp=sum_temp/temps.size();
    cout<<avg_temp<<endl;

    for(int i{1};i<=10;i++){
        for(int j{1};j<=10;j++){
            cout<<i<<"*"<<j<<"="<<(i*j)<<endl;
        }
    }






}