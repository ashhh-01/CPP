
#include <iostream>
#include <fstream>
#include<iomanip>

void print_header(){
    std::cout<<std::setw(10)<<std::left<<"Student"
    <<std::setw(20)<<std::right<<"score"<<std::endl;
    std::cout<<std::setfill('-');
    std::cout<<std::setw(40)<<" "<<std::endl;
    std::cout<<std::setfill(' ');
};

void print_footer(double average){
    std::cout<<std::setw(40)<<std::setfill('-')<<""<<std::endl;
    std::cout<<std::setfill(' ');
    std::cout<<std::setw(10)<<std::left<<"Average score"
    <<std::setw(20)<<std::right<<average<<std::endl;
};

void print_students(const std::string &student,int score){
    std::cout<<std::setprecision(1)<<std::fixed;
    std::cout<<std::setw(10)<<std::left<<student
    <<std::setw(20)<<std::right<<score<<std::endl;
};

int process_response(const std::string &response,const std::string answer_key){
    int score{0};
    for(size_t i=0;i<answer_key.size();++i){
        if(response.at(i)==answer_key.at(i)){
            score++;
        }
    }
    return score;
};



int main() {
    std::string answer_key{};
    std::string name{};
    std::string responses{};
    int running_sum{};
    int total{};
    double average{};

    std::ifstream in_file;
    in_file.open("./responses.txt");
    if(!in_file){
        std::cerr<<"File Doesn't Exist"<<std::endl;
        return 1;
    }

    in_file>>answer_key;
    print_header();
    while(in_file>>name>>responses){
        ++total;
        int score=process_response(responses,answer_key);
        running_sum+=score;
        print_students(name,score);
    }
    if(total!=0){
        average=static_cast<double>(running_sum)/total;
    }
    print_footer(average);


    std::cout << "Hello world" << std::endl;
    return 0;
}

