#include<iostream>
using namespace std;
int swap(int a,int b){
    int temp;
    temp=a;
    a=b;
    b=temp;
    cout<<"a : "<<a<<" "<<"b : "<<b;
}
int main(){
    int a, b,temp;
    cout<<"a : ";
    cin>>a;
    cout<<"b : ";
    cin>>b;
    swap(a,b);
    
}