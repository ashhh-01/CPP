// Shipping cost calculator

#include <iostream>
#include<iomanip>
using namespace std;

int main(){
    const double base_cost{2.50};
    int length{},width{},height{};
    const int tier1_threshold{100};
    const int tier2_threshold{500};

    int max_dimension_length{10};

    double tier1_surcharge{0.10};
    double tier2_surcharge{0.25};

    int package_volume{};
    cout<<"welcome to the package cost calculator "<<endl;
    cout<<"Enter length width and height of the package separated by space: ";
    cin>>length>>width>>height;

    if (length>max_dimension_length||width>max_dimension_length||height>max_dimension_length){
        cout<<"Sorry,Package rejected-dimensions exceeded"<<endl;
    }
    else{
        double package_cost{};
        package_volume=length*width*height;
        package_cost=base_cost;
        if(package_volume>tier2_threshold){
            package_cost+=package_cost*tier2_surcharge;
            cout<<"adding tier 2 surcharge"<<endl;
        }else if(package_volume>tier1_threshold){
            package_cost+=package_cost*tier1_surcharge;
            cout<<"adding tier 1 surcharge"<<endl;
        }
        cout<<fixed<<setprecision(2);
        cout<<"The volume of your package is "<<package_volume<<endl;
        cout<<"Your package will cose $ :"<<package_cost<<" to ship"<<endl;
    }
    cout<<endl;
     


}
