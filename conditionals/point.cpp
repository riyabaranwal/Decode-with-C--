// Given a point (x, y), write a program to find out if it lies on the x-axis, y-axis or at the origin, viz. (0, 0).
#include <iostream>
using namespace std;
int main()
{
    int x, y;
    cout << "x : ";
    cin >> x;
    cout << "y : ";
    cin >> y;
    if (x == 0 && y == 0)
    {
        cout << "(x,y) lies on origin.";
    }
    else if (x == 0 && (y > 0 || y < 0))
    {
        cout << "(x,y) lies on y axis";
    }
    else if (y == 0 && (x > 0 || x < 0))
    {
        cout << "(x,y) lies on x axis";
    }
    else
    {
        cout << "between";
    }
}