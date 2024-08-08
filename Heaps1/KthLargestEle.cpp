#include<iostream>
#include<queue>
using namespace std;
int main(){
    //priority queue i.e max heap mtlb ki saare elements random order mein rhenge sets ya map ki tarah bas max element jo hoga wo top pe rhega hmesha
 int arr[] = {10,20,-4,5,18,24,1,-7,56};
 int k = 2;
 int n = sizeof(arr)/4;
 priority_queue< int,vector<int>,greater<int> > pq;
 for(int i = 0 ; i < n ; i++){
    pq.push(arr[i]);
    if(pq.size()>k) pq.pop();
 }
 cout<<pq.top();
 }