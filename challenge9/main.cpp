#include<iostream>

using namespace std;

int *apply_toall(const int *const arr1,size_t size1,const int *const arr2,size_t size2);
void print(const int *const arr,size_t size);

int main(){
    const int arr1_size{5};
    const int arr2_size{3};
    int arr1[]{1,2,3,4,5};
    int arr2[]{10,20,30};
    cout<<"Array 1: ";
    print(arr1,arr1_size);
    cout<<"Array 2: ";
    print(arr2,arr2_size);

    int *result=apply_toall(arr1,arr1_size,arr2,arr2_size);
    constexpr size_t result_size(arr1_size*arr2_size);
    cout<<"Result: ";
    print(result,result_size);

    delete []result;
    cout<<endl;
    return 0;

}

int *apply_toall(const int *const arr1,size_t size1,const int *const arr2,size_t size2){
    int *new_storage{nullptr};
    new_storage=new int[size1*size2];
    int position{0};
    for(size_t i{0};i<size2;i++){
        for(size_t j{0};j<size1;j++){
            new_storage[position]=arr1[i]*arr2[j];
            position++;
        }
    }
    return new_storage;
}


void print(const int *const arr,size_t size){
    cout<<"[";
    for(size_t i{0};i<size;i++){
        cout<<arr[i]<<" "; //pointer subscript 
        // cout<<*(arr+i)<<" "; //pointer offset

    }
    cout<<"]";
    cout<<endl;
}