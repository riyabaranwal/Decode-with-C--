#include<iostream>
#include<vector>
using namespace std;
int main(){
    int k , l ,m;
    //m= no. of games
  cin>>k>>l>>m;
  vector<bool>dp(1000005,0);//0 = losing state
  dp[1] = 1;//1=winning state
  dp[k] = 1;
  dp[l] = 1;
  //1 waala compute karne ka jarurat nhi h n kyonki 1 ka humesha 1 hi hoga base condition h question mein
  for(int i = 2 ; i <=1000000 ; i++){
    //k=2,k=3 basicaaly humlog n ko yha i liye hue h
    if(i == k || i == l) continue;
    // base case teeno jo h 1 1 1 waale usse hi dekhege dp[4-1] = d[3]=1,dp[i-k]=dp[4-2]=dp[2]=1,dp[i-l]=dp[4-3]=dp[2]=1
    //agar i-1 ya i-k ya i- l teeno aagar 1 h toh dp[i] ek loosing sttate h 
     //agar i-1 ya i-k ya i- l teeno mein se koi ek bhi aagar 0 h toh and karne par loosing stae aayega i.e dp[i] ek winning state hoga
    dp[i] = !(dp[i-1] and ((i - k >=1) ? dp[i - k] : 1 ) and ((i - l >=1) ? dp[i - l] : 1));
    //if else isliye use hua h kyonki stable hone cheihiye n conditions mtlb ki game last mein kon end kar rha h mtlb - mein nhi hona chaihiye
  }
  
    for(int i = 0 ; i < m ; i++){
        int n;
        cin>>n;
        if(dp[n] == 1){
            //n is winning state
            cout<<"A";
        }
        else{
            //n ias loosing state
            cout<<"B";
        }
    }
  }

