#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#define inf INT_MAX

using namespace std;
int ftd(int n , vector<int>&dp){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n] != -1) return dp[n];
    return dp[n] = 1 + min({ftd(n-1,dp),(n % 2 == 0) ? ftd(n/2,dp) : inf , (n%3 == 0) ? ftd(n/3,dp) : inf});
}
int fbu(int n , vector<int>&dp){
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 4 ; i <= n ; i++){
         dp[i] = 1 + min({dp[i-1],(i % 2 == 0) ? dp[i/2] : inf , (i%3 == 0) ? dp[i/3] : inf});
    }
    return dp[n];
}
int main(){
    int n ;
    cin>>n;
      vector<int>dp(n+1,-1);
  cout<<ftd(n,dp)<<" "<<fbu(n,dp);
}