#include<iostream>
#include<vector>
#include<climits>
using namespace std;
vector<int>coins;
vector<int>dp(100006,-2);
int f(int x){
    if(x == 0) return 0;
    if(dp[x] != -2) return dp[x];
    int res = INT_MAX;
    for(int i = 0 ; i < coins.size() ; i++){
        if(x - coins[i] < 0) continue;
        res = min(res , f(x - coins[i]));
    }
    if(res == INT_MAX) return dp[x] = INT_MAX;
    return 1 + res;
}

int main(){
    int n , x;
    cin>>n>>x;
    for(int i = 0 ; i < n ; i++){
        int num ;
        cin>> num;
        coins.push_back(num);
    }
    int ans = f(x);
    if(ans == INT_MAX) cout<<"-1\n";
    else cout<<ans<<"\n";
}