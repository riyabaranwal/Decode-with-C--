#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    if(n>=100 && n<=999){
        cout<<"three digit no.";
    }
    else{
        cout<<"not a three digit no.";
    }
}