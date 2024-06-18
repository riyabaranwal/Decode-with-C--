#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void display(queue<int>&q){
    int n = q.size();
    for(int i = 1 ; i <= n ; i++){
        int x = q.front();
        cout<<x<<" ";
        q.pop();
        q.push(x);
    }
    cout<<endl;
}
void reversefirstk(queue<int>&q,int k){
    stack<int>st;
    int n = q.size();
    for(int i= 1 ; i<=k ; i++){
        int x = q.front();
        q.pop();
        st.push(x);
    }
    while(st.size()>0){
        int x = st.top();
        st.pop();
        q.push(x);
    }
    for(int i = 1 ; i<= n-k ; i++){
        int x = q.front();
        q.pop();
        q.push(x);
    }
}
int main(){
    queue<int>q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    reversefirstk(q,2);
    display(q);
}