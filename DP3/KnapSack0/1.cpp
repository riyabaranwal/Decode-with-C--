#include <iostream>
#include <vector>
using namespace std;
int f(int n, int c, vector<int> &w, vector<int> &val, vector<vector<int>> &dp)
{
    if (n == 0 || c == 0)
        return 0;
    if (dp[n][c] != -1)
        return dp[n][c];
    if (w[n - 1] > c)
       return dp[n][c] = f(n - 1, c, w, val, dp);
    return dp[n][c] = max(f(n - 1, c - w[n - 1], w, val, dp) + val[n - 1], f(n - 1, c, w, val, dp) );
   
}
int main()
{
    int n, c;
    cin >> n >> c;

    vector<int> w(n), val(n);

    for (int i = 0; i < n; i++)
        cin >> w[i];
    for (int i = 0; i < n; i++)
        cin >> val[i];

    vector<vector<int>> dp(n + 1, vector<int>(c + 1, -1));
    cout << "Maximum value: " << f(n, c, w, val, dp) << endl;

    return 0;
}
