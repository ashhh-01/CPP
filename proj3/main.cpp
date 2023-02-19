#include <iostream>
using namespace std;

int main(){
    int num{0};
    const int max{100};
    const int min{0};
    cout<<"Enter a number between "<<min<<"and "<<max<<endl;
    cin>>num;
    if(num>=min){
        cout<<"\n======================="<<endl;
        cout<<num<<"is greater than or equal to "<<min<<endl;
        int diff{num-min};
        cout<<num<<"is"<<diff<<"greater than"<<min<<endl;
    }
    if(num<=max){
        cout<<"\n========================"<<endl;
        cout<<num<<"is less then or equal to "<<max<<endl;
        int diff{max-num};
        cout<<num<<" "<<diff<<"less then "<<max<<endl;
    }
    if(num>=min && num<=max){
        cout<<"\n========================"<<endl;
        cout<<num<<"is in range"<<endl;
    }
    if(num==min||num==max){
        cout<<num<<"is right on a boundary"<<endl;
    }

    return 0;
}