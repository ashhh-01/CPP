#include <iostream>

int main(){
    int fav_number;
    std::cout << "Enter Your favorite number b/w 1 and 100:"<<std::endl;
    std::cin>>fav_number;
    if( fav_number==24){
        std::cout<<"Amazing!! That's my favorite number too!"<<std::endl;
    }else{
        std::cout<<"No really!!,24 is my favorite number!"<<std::endl;
    };
    return 0;
}