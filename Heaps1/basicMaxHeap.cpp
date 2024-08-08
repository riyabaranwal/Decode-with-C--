#include<iostream>
#include<queue>
using namespace std;
int main(){
    //priority queue i.e max heap mtlb ki saare elements random order mein rhenge sets ya map ki tarah bas max element jo hoga wo top pe rhega hmesha
    priority_queue<int>pq;
    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(80);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}