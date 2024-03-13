// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"a : "; cin>>a; 
//     cout<<"b : "; cin>>b; 
//     int* p1=&a;
//     int* p2=&b;
//     cout<<a+b<<endl;
//     cout<<*p1+*p2;
// }
#include<iostream>
using namespace std;
int main(){
    int a,b;
    int* p1=&a;
    int* p2=&b;
    cout<<"*p1 : "; cin>>*p1; 
    cout<<"*p2 : "; cin>>*p2; 
    cout<<*p1+*p2;
}