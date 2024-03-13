#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no. of rows : ";
    cin>>n;
    for(int i=1;i<=n;i++){
         for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        for(int k=1;k<=i;k++){
            cout<<"*";
        }
        for(int q=i-1;q>=1;q--){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=n;i>=1;i--){
        for(int j=n-i;j>=1;j--){
            cout<<" ";
        }
        for(int k=i;k>=1;k--){
            cout<<"*";
        }
        for(int q=i-1;q>=1;q--){
            cout<<"*";
        }
        cout<<endl;
         } 
}