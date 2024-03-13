#include<iostream>
using namespace std;
int main(){
    int n,b;
    cout<<"Enter number : ";
    cin>>n;
    int sum=0;
    while(n!=0){
        b=n%10;
        n=n/10;
         sum=sum+b;
    }
    cout<<sum<<endl;
}