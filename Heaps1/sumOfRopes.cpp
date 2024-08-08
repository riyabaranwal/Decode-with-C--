#include<iostream>
using namespace std;
#include<queue>
#include<vector>
int main(){
    int arr[] = {6,5,3,2,8,10,9};
    int k = 3;
    int n = sizeof(arr)/4;
    priority_queue<int , vector<int>,greater<int>>pq;
int minCost = 0 ;
for(int i = 0 ; i < n ; i++){
    pq.push(arr[i]);
}
while(pq.size()>1){ //1 isliye h kyonki 2 elements chaiye x aur y , agar 0 se greater kiye toh ek hi bachega
    int x = pq.top();
    pq.pop();
    int y = pq.top();
    pq.pop();
    pq.push(x + y);
    minCost += (x + y);
}
cout<<minCost;
}