#include<iostream>
using namespace std;

class Bike{
public:
    static int noOfBikes;
    int tyreSize;
    int engineSize;

    Bike(int tyreSize , int engineSize){
        this->tyreSize=tyreSize;
        this->engineSize=engineSize;
        cout<<"Constructor call hua"<<endl;
    }

    ~Bike(){
        cout<<"Destructor call hua"<<endl;
    }

    static void increaseNoOfBikes(){
        noOfBikes++;
    }

};
int Bike::noOfBikes=10;
int main(){
    Bike tvs(78,150);
    Bike honda(67,160);
    Bike discover(56,180);
    bool flag=true;
    if(flag==true){
        Bike bmw(1000,2000);
        cout<<bmw.tyreSize<<" "<<bmw.engineSize<<endl;
    }
    cout<<tvs.tyreSize <<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<discover.tyreSize<<" "<<discover.engineSize<<endl;

    tvs.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl;
    cout<<honda.noOfBikes<<endl;

    discover.increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl;
    cout<<honda.noOfBikes<<endl;
    cout<<discover.noOfBikes<<endl;

    Bike::increaseNoOfBikes();
    cout<<tvs.noOfBikes<<endl;
    cout<<honda.noOfBikes<<endl;
}