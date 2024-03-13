#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter no. : ";
    cin>>n;
    int reverse=0;
   while(n!=0) {
        a=n%10;
        reverse=reverse*10+a;
        n=n/10;
    } 
    cout<<reverse;
}
    