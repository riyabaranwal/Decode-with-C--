#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter no. : ";
    cin>>n;
    int count=0;
   while(n!=0) {
        a=n%10;
        n=n/10;
        count++;
    } 
    cout<<count;
}