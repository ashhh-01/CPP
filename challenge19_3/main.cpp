
#include <iostream>
#include <fstream>
#include <string>

// bool find_word(std::string word,std::string current_word){
//     if(word==current_word){
//         return true;
//     }
//     return false;
// };

bool find_word(std::string &word_to_find,std::string &target){
    std::size_t found=target.find(word_to_find);
    if(found==std::string::npos)
        return false;
    else
        return true;
}

int main() {
    std::ifstream in_file;
    in_file.open("./romeoandjuliet.txt");
    if(!in_file){
        std::cerr<<"File doesn't exit"<<std::endl;
        return 1;
    }
    std::string word{};
    std::string current_word{};
    int total_words{0};
    int matches{0};
    std::cout<<"Enter the substring to search for: ";
    std::cin>>word;
    while(in_file>>current_word){
        total_words++;
        if(find_word(word,current_word)){
            matches++;
        }
    };
    std::cout<<"Found " <<matches<<" matches out of a total of "<< total_words<<"words."<< std::endl;
    return 0;
}

