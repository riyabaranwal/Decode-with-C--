#include <iostream>
using namespace std;
class vehicle
{
public:
    int tyreSize;
    int engineSize;
    int lights;
    string companyName;
};
class car : public vehicle // created a child of vehicle mtlb ki car will have all the above qualities including steering size
{
public:
    int steeringSize;
};
class bike : public vehicle // created a child of vehicle mtlb ki bike will have all the above qualities including handlesize
{
public:
    int handleSize;
};
int main()
{
    // creating objects of the classes
    bike royalEnfield;
    royalEnfield.handleSize = 6;
    royalEnfield.tyreSize = 24;
    royalEnfield.engineSize = 900;
    royalEnfield.lights = 1;
    royalEnfield.companyName = "Royal Enfield";
    cout << royalEnfield.engineSize << endl;
    cout << royalEnfield.handleSize;
    cout << royalEnfield.companyName;
}