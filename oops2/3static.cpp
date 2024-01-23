#include <iostream>
using namespace std;
class Bike
{
public:
    static int noOfBikes;
    int tyreSize;
    int engineSize;
    Bike(int tyreSize, int engineSize = 200)
    {
        this->tyreSize = tyreSize;
        this->engineSize = engineSize;
    }
    static void increaseNoOfBikes(){
    noOfBikes++;
}
};
int Bike::noOfBikes=10;
void print()
{
    static int b = 10; // static means aap dubaara se banane ka kosis bhi karoge toh bhi nhi banega i.e ki b ka value humlog khud se change nhi lar sakte mtlb ki initialize nhi kar sakte
    cout << b << endl;
    b++;
}

int main()
{
    // creating an object of the bike class with two parameters
     Bike royalEnfield(46,900);
     Bike bajaj(67,90);
     cout << "Royal Field's Tyre Size is :"<<royalEnfield.tyreSize<<endl;
     cout << "Royal Field's Engine Size is :"<<royalEnfield.engineSize<<endl;
     cout << "Bajaj's Tyre Size is :"<<bajaj.tyreSize<<endl;
     cout << "Bajaj's Engine Size is :"<<bajaj.engineSize<<endl;
    
    cout<<royalEnfield.noOfBikes<<endl;//bina function chale no. of bikes print kiya
    cout<<bajaj.noOfBikes<<endl;//bajaj and royalEnfield ke pass same no. of bikes honge kyuki static use hua h 
    
    royalEnfield.increaseNoOfBikes();//function chalake no. of bikes print kiya mtlb ki no. of bikes 11 ho gaya
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl;

    bajaj.increaseNoOfBikes();// no. of bikes for both = 12
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl;

    Bike::increaseNoOfBikes();// no. of bikes for both = 13
    cout<<royalEnfield.noOfBikes<<endl;
    cout<<bajaj.noOfBikes<<endl;
    //static belongs to the class
    // from above three function call se ye keh sakte h ki function kisi bhi object se call ho ya phir class se directly call ho tab bhi saare object ka no. of bikes badhega 
    // calling a member function using dot operator
    // print();
    // print();


}