#include<iostream>
using namespace std;
int main(){
    int n,a;
    cout<<"Enter number : ";
    cin>>n;
    int reverse=0;
    while(n!=0){
        a=n%10;
        n=n/10;
        reverse=reverse*10+a;
    }
    cout<<"reverse : "<<reverse;
}