#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. : ";
    cin>>n;
    for(int i=2 ; i<=n-1 ; i++){
        if(n%i==0){
        cout<<"composite"<<endl;
        break;
        }
        else {cout<<"not composite";
                break;
        }
    } 
}