#include <iostream>
using namespace std;

int main(){
    enum direction{ left,right,up,down};

    direction direct{right};
    switch (direct){
        case up:
            cout<<"Heading up"<<endl;
            break;
        case left:
            cout<<"Heading left"<<endl;
            break;
        case right:
            cout<<"Heading right"<<endl;// break doesnt exist! Prints the next statement too 
        case down:
            cout<<"Heading down"<<endl;
            break;
        default:
            cout<<"Exit-default"<<endl;//Doesnt require break
    }
    return 0;
}