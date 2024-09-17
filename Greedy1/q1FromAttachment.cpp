#include<iostream>
#include<vector>
#include<algorithm>
#define ll long long int
using namespace std;
bool cmp(int x , int y){
    return x > y;
}

ll minCostToBreakGrid(int n , int m , vector<ll> &vertical , vector<ll>&horizontal){
    sort(vertical.begin(),vertical.end(),cmp);
    sort(horizontal.begin(),horizontal.end(),cmp);
    int hblocks = 1;
    int vblocks = 1;
    int h = 0 , v = 0; // cuts
    ll ans = 0;
    while(h < horizontal.size() && v < vertical.size()){
        if(vertical[v] > horizontal[h]){
            ans += vertical[v]*vblocks;
            hblocks++;
            v++;
        }
        else{
            ans += horizontal[h]*hblocks;
            vblocks++;
            h++;
        }
    }
    while(h<horizontal.size()){
          ans += horizontal[h]*hblocks;
            vblocks++;
            h++;
    }
    while(v < vertical.size()){
         ans += vertical[v]*vblocks;
            hblocks++;
            v++;
    }
    return ans;
}
int main(){
    int n, m;
    cin>>m>>n;
    vector<ll>horizontal,vertical;
    for(int i = 0 ; i < m-1 ; i++){
        int x ;
        cin>>x;
        vertical.push_back(x);
    }
      for(int i = 0 ; i < n-1 ; i++){
        int x ;
        cin>>x;
        vertical.push_back(x);
    }
    cout<<minCostToBreakGrid(n,m,vertical,horizontal);
    return 0;
}

//leetcode 2182