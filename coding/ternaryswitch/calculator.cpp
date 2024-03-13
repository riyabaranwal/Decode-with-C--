//Write a program to create a calculator that performs basic arithmetic operations. The calculator should input two no. and one operator from the user
#include<iostream>
using namespace std;
int main(){
    int a,b;
    char ch;
    cout<<"Enter the operation : ";
    cin>>a>>ch>>b;
    if(ch=='+')
    cout<<a+b;
    if(ch=='-')
    cout<<a-b;
    if(ch=='*')
    cout<<a*b;
    if(ch=='/')
    cout<<a/b;
}