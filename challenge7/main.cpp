#include <iostream>
#include <string>
using namespace std;

int main(){
    string letters{};
    cout<<"Enter the letters to create the pyramid: ";
    getline(cin,letters);
    size_t letters_len=letters.length();
    int position{0};
    for(char c:letters){
        int name_space=letters_len-position;
        while(name_space>0){
            cout<<" ";
            name_space--;
        }
    // Starts from line 2 because position is 0 when the code runs.
    for(size_t j=0;j<position;j++){
        cout<<letters.at(j);
    }
    cout<<c;
    //Wont run at first because value of j is -1
    for(int j=position-1;j>=0;--j){
        auto k =static_cast<size_t>(j);//cant be negative
        cout<<letters.at(k);
    }
    cout<<endl;
    ++position;
    }
    }
    //0