#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "n :";
    cin >> n;
    int count = 0;
    while (n != 0)
    {
        int a = n % 10;
        n = n / 10;
        count++;
    }
    cout << "count :" << count;
}