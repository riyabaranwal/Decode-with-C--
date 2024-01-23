#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int arr[] = {19, 12, 23, 8, 16};
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    vector<int> v(5, 0); // 0 means not visited
    int x = 0;
    for (int i = 0; i < n; i++)
    {
        int min = INT_MAX;
        int mindex = -1;
        for (int j = 0; j < v.size(); j++)
        {
            if (v[j] == 1)
            {
                continue;
            }
            else
            {
                if (arr[j] < min)
                {
                    min = arr[j];
                    mindex = j;
                }
            }
        }
        arr[mindex] = x;
        v[mindex] = 1; // mark as visited
        x++;
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}