#include<iostream>
#include<string>
using namespace std;

int main(){
    string alphabet{" [ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
    string key{"[@qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM"};
    string message{};
    cout<<"Enter the message: ";
    getline(cin,message);
    string encrypted_message{};
    cout<<"Encrypting Message"<<endl;
    for(char c:message){
        size_t positon=alphabet.find(c);
        if(positon!=string::npos){
            char new_char{key.at(positon)};
            encrypted_message+=new_char;
        }else{
            encrypted_message+=c;
        }
    }
    cout<<"The encrypted message is: "<<encrypted_message<<endl;
    
    string decrypted_message{};

    for(char i:encrypted_message){
        size_t pos=key.find(i);
        if(pos!=string::npos){
            char new_char{alphabet.at(pos)};
            decrypted_message+=new_char;
        }else{
            decrypted_message+=i;
        }
    }
    cout<<"decrypted Message: "<<decrypted_message<<endl;
    return 0;

}