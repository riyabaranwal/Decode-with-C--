// CSES problem set
//  you are given an integer n . On each step , you may subtract one of the digits from the number
// How many steps are required to make the number equal to 0

#include <iostream>
#include <vector>
#include <climits>
using namespace std;
vector<int> get_digits(int n)
{
    vector<int> result;
    while (n > 0)
    {
        if (n % 10 != 0)
        {
            result.push_back(n % 10);
        }
        n /= 10;
    }
    return result;
}
vector<int> dp;
int f(int n)
{
    if (n == 0)
        return 0;
    if (n <= 9)
        return 1;
    if (dp[n] != -1)
        return dp[n];
    vector<int> d = get_digits(n);
    int res = INT_MAX;
    for (int i = 0; i < d.size(); i++)
    {
        res = min(res, f(n - d[i]));
    }
    return dp[n] = 1 + res;
}

int fbu(int num)
{
    dp[0] = 0;
    for (int i = 0; i <= 9; i++)
        dp[i] = 1;
    for (int n = 10; n <= num; n++)
    {
        vector<int> d = get_digits(n);
        int res = INT_MAX;
        for (int i = 0; i < d.size(); i++)
        {
            res = min(res, f(n - d[i]));
        }
        dp[n] = 1 + res;
    }
    return dp[num];
}
int main()
{
    dp.resize(10005, -1);
    int n;
    cin >> n;
    cout << f(n) << "\n"
         << fbu(n);
    return 0;
}
