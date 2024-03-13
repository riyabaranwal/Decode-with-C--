#include<iostream>
using namespace std;
int main(){
    int n,e;
    cout<<"Enter no. : ";
    cin>>n;
    cout<<"Enter the exponent :";
    cin>>e;
    int power=1;
    cout<<"power : ";
    for(int i=1;i<=e;i++){
        power=power*n;
    }
    cout<<power;
}