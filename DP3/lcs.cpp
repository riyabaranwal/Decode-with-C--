#include <iostream>
#include <vector>
#include<climits>
#include<string.h>
using namespace std;
string getLCS(vector<string> &A, vector<string> &B, vector<vector<int>> &dp) {
    string lcs = "";
    int i = 0, j = 0;
    while (i < A.size() && j < B.size()) {
        if (A[i] == B[j]) {
            lcs += A[i] + " ";  // Add the common element to the LCS
            i++;
            j++;
        } else if (dp[i + 1][j] >= dp[i][j + 1]) {
            i++;
        } else {
            j++;
        }
    }
    return lcs;
}
int f(int i , int j , vector<string> &A, vector<string> &B, vector<vector<int>> &dp)
{
     if (i == A.size() || j == B.size())
        return 0;

     if(dp[i][j] != -1) return dp[i][j];
        else if(A[i] == B[j]){
             return dp[i][j] =  1 + f(i+1,j+1,A,B,dp);
        }
        else{
            return dp[i][j] = max(f(i+1,j,A,B,dp),f(i,j+1,A,B,dp));
        }
   
}
int main()
{
    int n, m;
    cin >> n >> m;
    vector<string> A(n), B(m);
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < m; i++)
        cin >> B[i];
   vector<vector<int>> dp(n+1, vector<int>(m+1, -1));
     cout << "Length of Longest common subsequence : " << f( 0, 0, A, B, dp) << endl;
     cout << "Longest Common Subsequence: " << getLCS(A, B, dp) << endl;

    return 0;
}