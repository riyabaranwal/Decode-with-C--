#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter no. : ";
    cin>>n;
    int sum=0;
   while(n!=0) {
        a=n%10;
        sum=sum+a;
        n=n/10;
    } 
    cout<<sum;
}