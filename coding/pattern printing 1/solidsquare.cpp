
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of sides: ";
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
        cout<<"*";
        }
        cout<<endl;
    }
    
}