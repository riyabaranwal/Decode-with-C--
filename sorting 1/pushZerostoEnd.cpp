#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n = 6;
    int arr[9] = {5,0,1,2,0,0,4,0,3};
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
    cout << endl;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j]==0)
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i]<<" ";
    }
}
