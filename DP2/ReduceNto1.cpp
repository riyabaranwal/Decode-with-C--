// question copy mein hai
#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
#define inf INT_MAX

using namespace std;
//ftd mtlb top down approach and fbu mtlb bottom up approach jisko hum tabular form bhi bolte hai
int ftd(int n , vector<int>&dp){
    if(n == 1) return 0;
    if(n == 2 || n == 3) return 1;
    if(dp[n] != -1) return dp[n];
    // 1 + isliye kar rhe h kyonki n se n-1 ya n/2 ya n/3 jaane mein bhi toh 1 step lagta h phir uske
    // baad ka count karte hi jaise n-1 se 1 tak jaane mein kitne step lag rhe h
    return dp[n] = 1 + min({ftd(n-1,dp),(n % 2 == 0) ? ftd(n/2,dp) : inf , (n%3 == 0) ? ftd(n/3,dp) : inf});
}
int fbu(int n , vector<int>&dp){
    dp[1] = 0;
    dp[2] = dp[3] = 1;
    for(int i = 4 ; i <= n ; i++){
        //ye pura line same h upar waale case jaise bas ftd ke jagah dp kar diya hai aur dp hata diya parameter se, sab mein yhi karenge
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
//t.c = O(n)   ,  s.c = O(n)  nhi toh t.c = O(2^n) hota