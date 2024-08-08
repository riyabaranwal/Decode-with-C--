#include<iostream>
using namespace std;
#include<queue>
#include<vector>
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 3;
    int n = sizeof(arr)/4;
    priority_queue<int , vector<int>,greater<int>>pq;
    vector<int>ans;
    for(int i = 0 ; i < n ; i++){
        pq.push(arr[i]);
        if(pq.size()>k){
            ans.push_back(pq.top());
            pq.pop();
        }
    }
    while(pq.size()>0){
        ans.push_back(pq.top());
        pq.pop();
    }
    for(int i = 0 ; i < ans.size() ; i++){
        cout<<ans[i]<<" ";
    }
}

// class Solution {
// public:
//  //   isme humlog largest diya hai phir bhi minheap isliye nhi liye kyonki k diya hi nhi h
//     int lastStoneWeight(vector<int>& stones) {
//         priority_queue<int>pq;
//         for(int ele : stones){
//             pq.push(ele);
//         }
//         while(pq.size()>1){
//             int x = pq.top();
//             pq.pop();
//               int y = pq.top();
//             pq.pop();
//             if(x!=y) pq.push(x-y);
//         }
//            if(pq.size()==1) return pq.top();
//             else return 0;
//     }
// };