#include<iostream>
#include<stack>
using namespace std;
int main(){
    stack<int> st;
    cout<<st.size()<<endl;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    cout<<st.size()<<endl;
    st.pop();
    cout<<st.size()<<endl;
    cout<<st.top()<<endl<<endl;
    //printing in reverse order
    // while(st.size()>0){
    //     cout<<st.top()<<endl;  
    //     st.pop();
    // }
    stack<int> temp;
    while(st.size()>0){
        cout<<st.top()<<" ";
        int x = st.top();
        st.pop();
        temp.push(x);
    }
    cout<<endl;
    // putting back elements from temp to normal stack i.e st
    while(temp.size()>0){
        cout<<temp.top()<<" ";
       int x = temp.top();
       temp.pop();
       st.push(x);
    }
    
}