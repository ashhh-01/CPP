#include<iostream>
#include<vector>
#include<memory>

using namespace std;
class Test{
    private:
        int data;
    public:
        Test(){cout<<"Test Constructor"<<endl;};
        Test(int data):data{data}{cout<<"Test Constructor ["<<data<<"] "<<endl;};
        int get_data() const{return data;};
        ~Test(){cout<<"Test Destructor"<<"("<<data<<")"<<endl;};
};
//prototype
// unique_ptr<vector<shared_ptr<Test>>>make();
auto make();
void fill(vector<shared_ptr<Test>> &vec,int num);
void display(const vector<shared_ptr<Test>>&vec);

// unique_ptr<vector<shared_ptr<Test>>>make(){
auto make(){
    return make_unique<vector<shared_ptr<Test>>>();
}

void fill(vector<shared_ptr<Test>>&vec,int num){
    int temp;
    for(int i=1;i<=num;i++){
        cout<<"Enter the data points ["<<i<<"]: ";
        cin>>temp;
        // shared_ptr<Temp>ptr=make_shared<Test>(temp);
        // vec.push_back(ptr)
        vec.push_back(make_shared<Test>(temp));
    };
};

void display(const vector<shared_ptr<Test>>&vec){
    for(const auto &ptr:vec){
        cout<<ptr->get_data()<<endl;
    }
}

int main(){
    unique_ptr<vector<shared_ptr<Test>>>vec_ptr;
    vec_ptr=make();
    cout<<"How many data points do u want to enter";
    int num;
    cin>>num;
    fill(*vec_ptr,num);
    display(*vec_ptr);
    return 0;
};