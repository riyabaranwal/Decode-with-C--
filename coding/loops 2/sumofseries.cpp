#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number : ";
    cin >> n;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 0)
        {
            i = -i;
        }
        else
        {
            i = i;
        }
        sum = sum + i;
        // cout<<sum<<endl;
    }
    cout << sum << endl;
}
