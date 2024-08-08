#include<iostream>
#include<set>
#include<map>
using namespace std;
int main(){
// set<int>s;
// s.insert(5);
// s.insert(3);
// s.insert(7);
// //sorted order mein output deta hai
// for(int ele : s){
//     cout<<ele<<" ";
// }
map<int,int>m;
m[1] = 30;
m[2] = 20;
m[3] = 10;
// yeh bhi sorted order mein hi aayega based on key not on value
for(auto x : m){
   // cout<<x.first<<" ";
    
    cout<<"   "<<x.second<<" ";
}
}