#include <iostream>
using namespace std;
int power(int a, int b)
{
    int p = 1;
    for (int i = 0; i < b; i++)
    {
        p *= a;
    }
    return p;
}
int power2(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a*power2(a,b-1);
    }
}
    int main()
    {
        cout << power2(2, 3);
    }