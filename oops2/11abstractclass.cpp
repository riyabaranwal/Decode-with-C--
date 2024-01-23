//abstract class means - which only has pure virtual functions agar ek child h aur usme saare functions jo parent cla
//ss mein manidatory hone hi chahiye toh uske liye asbstract class ka function banayenge i.e pure virtual class banyenge
//i.e gfuncton banakar ke 0 ke eual kar denge parent class mein aur usi ko abstract class bolenge
#include<iostream>
using namespace std;
class vehicle{
    public:
    int tyreSize;
    int engineSize;
    virtual void calculateMilage()=0;
    virtual void refuel()=0;

};
class bike : public vehicle{
    public:
    int handleSize;

    void calculateMilege(){
        cout<<"Bike ka milege"<<endl;
    }
    void refuel(){
        cout<<"Bike se fuel"<<endl;
    }
};

int main(){
    
    vehicle v;
    v.calculateMilage();
    v.refuel();
}