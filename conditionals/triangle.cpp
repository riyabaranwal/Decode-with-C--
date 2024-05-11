// Write a program to input sides of a triangle and check whether a triangle is equilateral,
// scalene or isosceles triangle.
#include <iostream>
using namespace std;
int main()
{
    int s1, s2, s3;
    cout << "Enter first side of triangle";
    cin >> s1;
    cout << "Enter second side of triangle";
    cin >> s2;
    cout << "Enter third side of triangle";
    cin >> s3;
    if (s1 == s2 && s2 == s3 && s3 == s1)
    {
        cout << "equilateral";
    }
    else if (s1 == s2 && (s3 != s1 || s3 != s2))
    {
        cout << "Isosceles";
    }
    else
    {
        cout << "scalene";
    }
}