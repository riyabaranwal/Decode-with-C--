#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter first side of triangle";
    cin>>a;
    cout<<"Enter second side of triangle";
    cin>>b;
    cout<<"Enter third side of triangle";
    cin>>c;
    int d=a+b,e=b+c,f=a+c;
    if(d>c && e>a && f>b){
        cout<<"triangle";
    }
    else{
        cout<<"cannot form a triangle"; 
    }
}