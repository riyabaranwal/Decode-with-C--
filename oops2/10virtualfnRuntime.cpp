#include <iostream>
using namespace std;
class vehicle
{
public:
    int tyreSize;
    int engineSize;
    virtual void show()
    {   // agar yha virtual hata denge toh output will be vehicle ka show kyonki virtual is use for
        // runtime
        cout << "vehicle ka show" << endl;
    }
};
class bike : public vehicle
{
public:
    int handleSize;
    void show()
    {
        cout << "bike ka show" << endl;
    }
};

int main()
{
    vehicle *a; // compile time ke according vehicle ka show output aana chahiye but correct is runtime polymorphism
    bike b;
    a = &b;    // runtime ke according ab bike ka show output aana chahiye
    a->show(); // calling base class function using pointer of derived class object.
}
// note:- jab hum virtual use karenge toh vptr karkr ek pointer background mein aa jaayega mtlb ki memory lega 8 byte
// i.e ki jab bhi virtual aayega toh size increase hoga