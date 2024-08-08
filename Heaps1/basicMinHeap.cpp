#include<iostream>
#include<queue>
using namespace std;
int main(){
    //priority queue i.e min heap mtlb ki saare elements random order mein rhenge sets ya map ki tarah bas min element jo hoga wo top pe rhega hmesha
    priority_queue< int,vector<int>,greater<int> > pq;
    pq.push(10);
    pq.push(25);
    pq.push(-6);
    pq.push(80);
    cout<<pq.top()<<endl;
    pq.pop();
    cout<<pq.top()<<endl;
}