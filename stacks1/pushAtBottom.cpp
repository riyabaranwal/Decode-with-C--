#include<iostream>
#include<stack>
using namespace std;
void print(stack<int>st){
     stack<int> temp;
    while(st.size()>0){
        temp.push(st.top());
         st.pop();
    }
    // putting back elements from temp to normal stack i.e st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
        st.push( temp.top());
        temp.pop();
    }
     cout<<endl;
}
void pushAtbottom(stack<int>&st,int val){
    stack<int>temp;
    while(st.size()>0){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
     cout<<endl;
}
void pushAtIndex(stack<int>&st,int idx,int val){
    stack<int>temp;
    while(st.size()>idx){
        temp.push(st.top());
        st.pop();
    }
    st.push(val);
    while(temp.size()>0){
        st.push(temp.top());
        temp.pop();
    }
     cout<<endl;
}
int main(){
    stack<int>st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    print(st);
    pushAtbottom(st,80);
    print(st);
    pushAtIndex(st,2,110);
    print(st);
}