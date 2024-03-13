#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    bool flag=true;
    for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
            flag=false;
        }
    } 
    if(n==1){
        cout<<"neither prime nor composite";
    }
    else if(flag==true){
        cout<<"Prime";
    }
    else{
        cout<<"composite";
    }
}