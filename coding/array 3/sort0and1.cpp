#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(1);
    v.push_back(0);
    v.push_back(1);
    v.push_back(1);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);
for(int i = 0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
}
cout<<endl;
//sort(v.begin(),v.end());
int temp;
for(int i = 0 ; i<v.size()-1 ; i++){
    for(int j = i+1 ; j<v.size() ; j++){
        if(v[i]>v[j]){
           temp = v[i];
           v[i]=v[j];
           v[j]=temp; 
        }
    }
}

cout<<endl;
for(int i = 0 ; i<v.size() ; i++){
    cout<<v[i]<<" ";
}
}

//next permutation(leetcode 31)
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int idx = -1;
//         int n = nums.size();
//         for(int i = n-2 ; i>=0 ; i--){
//             if(nums[i]<nums[i+1]){
//                 idx = i;
//                 break;
//             }
//         }
//         if(idx == -1){
//              reverse(nums.begin() , nums.end());
//              return;
//         }
//         reverse(nums.begin()+idx+1 , nums.end());
//         int j = -1;
//         for(int i = idx+1 ; i<n ; i++){
//             if(nums[i]>nums[idx]){
//                 j = i;
//                 break;
//             }
//         }
//         swap(nums[idx],nums[j]);
//         return;

//     }
// };