// Given the length and breadth of a rectangle, write a program to find whether numerically the
// area of the rectangle is greater than its perimeter.
#include <iostream>
using namespace std;
int main()
{
    int length, breadth;
    cout << "length : ";
    cin >> length;
    cout << "breadth : ";
    cin >> breadth;
    int area = length * breadth;
    int perimeter = 2 * (length + breadth);
    if (area > perimeter)
    {
        cout << "area is larger";
    }
    else
    {
        cout << "perimeter is larger";
    }
}
