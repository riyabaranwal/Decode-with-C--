//Hackerearth roy and coin boxes
//7373
//yeh technique jyada useful h  aur bhi problem mein use hoti h
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>f(n+1,0);
    int m ;
    cin>>m;
    vector<int>l(n+1,0);
    vector<int>r(n+1,0);
    int m;
    cin>>m;
    for(int i = 0 ; i < m ; i++){
        int L , R;
        f[L]++;
        f[R+1]--;
    }
    //prefix sum
      for(int i = 1 ; i < f.size(); i++){
     f[i] = f[i] + f[i-1];
    }
    vector<int> c(10000005,0);
    for(int i = 0 ; i <= n ; i++){
        int coins = f[i];
        c[coins]++;
    }
    for(int i = c.size()-2 ; i >= 0 ; i++){
        c[i] =c[i] + c[i+1];
    }
    int q;
    cin>>q;
    while(q--){
        int num;
        cin>>num;
        cout<<"\n";
    }
    return 0;
}